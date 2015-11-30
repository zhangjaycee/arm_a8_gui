#include "dialogct.h"
#include "ui_dialogct.h"
#include <unistd.h>
#include <QTimer>
#include <QPixmap>
#include <QImage>
#include <QPainter>
//#include <image.h>
#include "define.h"
#include "v4l2grab.h"
#include "convert.h"
#include "compressivetracker.h"
#include "handfinder.h"

void DialogCt::boxInit()
{
    //box[0] = Rect(450, 170, 130, 150);//Rect(x,y,width,height)
    //box[1] = Rect(70, 170, 130, 150);//Rect(x,y,width,height)
    if(HANDNUM==1){
        box[0] = Rect(150, 70, 60, 70);
    }else if(HANDNUM>1){
        box[0] = Rect(230, 70, 60, 70);//Rect(x,y,width,height)
        box[1] = Rect(30, 70, 60, 70);//Rect(x,y,width,height)
        for(int i=2;i<HANDNUM;i++)
            box[i]=Rect(0,0,10,10);
    }
        for(int i=0;i<HANDNUM;i++){
            x0[i]=box[i].x;
            y00[i]=box[i].y;
            dx[i]=0;
            dy[i]=0;
            rgb_r[i]=255;
        }

}
DialogCt::DialogCt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCt)
{
    ui->setupUi(this);
    if(init_v4l2() == FALSE)
    {
        printf("init error\n");
    }
    v4l2_grab();
    grabAndShow();
}

void DialogCt::grabAndShow(){
    yuv2Mat(buffers[0].start,imgWidth,imgHeight);
    //new frame grabed,process start
    if(mode == 2){//ct mode
        while(1){
            if(first_flag){
                cvtColor(frame, first_frame, CV_RGB2GRAY);
                first_flag=0;
            }
            cvtColor(frame, current_gray, CV_RGB2GRAY);
            absdiff(first_frame,current_gray,fore_frame);
            if(!gotHand){
                getHand();
                if(gotHand){
                    ctInitFlag=1;
                }
                break;
            }
            // CT initialization
            if(ctInitFlag){
                for(int i=0;i<HANDNUM;i++)
                    ct[i].init(fore_frame, box[i]);
                ctInitFlag=0;
            }
            for(int i=0;i<HANDNUM;i++){
                ct[i].processFrame(fore_frame, box[i]);
                rectangle(frame, box[i], Scalar(rgb_b[i],rgb_g[i],rgb_r[i]));
            }
            flip(frame, frame, 1);
            break;
        }
    } else if (mode == 1){//only dispaly mode
        flip(frame, frame, 1);
    }

    qImg=MatToQImage(frame);
    ui->label->setPixmap(QPixmap::fromImage(qImg));
    ui->label->resize(ui->label->pixmap()->size());
}


DialogCt::~DialogCt()
{
    delete ui;
}

void DialogCt::paintEvent(QPaintEvent *)
{
    //printf("framecount:%d\n",fpscount++);
    ioctl(fd, VIDIOC_DQBUF, &buf);
    grabAndShow();
    ioctl(fd, VIDIOC_QBUF, &buf);
}

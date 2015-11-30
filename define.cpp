#include <stdio.h>
#include "mainwindow.h"
#include "dialogct.h"


#include <QApplication>
#include "define.h"
#include "compressivetracker.h"


int imgWidth=IMAGEWIDTH;
int imgHeight=IMAGEHEIGHT;


Rect box[HANDNUM]; // tracking object
char c;
int first_flag=1;
int averInitCount=0;
int ctInitFlag=0;
int x0[HANDNUM];
int y00[HANDNUM];
int dx[HANDNUM];
int dy[HANDNUM];
int rgb_b[HANDNUM]={0},rgb_g[HANDNUM]={0},rgb_r[HANDNUM]={0};

int fpscount=1;

Mat first_frame(imgHeight, imgWidth, CV_8UC3);
Mat frame(imgHeight, imgWidth, CV_8UC3);
Mat fore_frame(imgHeight, imgWidth, CV_8UC3);
Mat current_gray(imgHeight, imgWidth, CV_8UC3);
CompressiveTracker ct[HANDNUM];

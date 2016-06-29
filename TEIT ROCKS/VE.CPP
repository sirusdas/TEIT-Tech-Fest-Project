#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main5()
{
int gd=DETECT,gm=0,col=0,dol=600;
initgraph(&gd,&gm,"c:/tc/bgi");

settextstyle(10,HORIZ_DIR,1);
outtextxy(30,30,"");
settextstyle(11,HORIZ_DIR,1);
settextstyle(10,HORIZ_DIR,1);
outtextxy(30,200,"Hit ENTER to Start the Magic...");
settextstyle(12,HORIZ_DIR,1);
getch();
cleardevice();

while(!kbhit())
{
for(int j=0;j<=50;j++)
{
{
setcolor(2);
circle(col,100,50+j);
setfillstyle(4,2);
floodfill(col,100,2);
delay(3);
col++;
if(col>=600)
col=0;
}


 {
setcolor(4);
circle(dol,330,50+j);
setfillstyle(5,4);
floodfill(dol,330,4);
delay(3);
dol--;
if(dol<=0)
dol=600;
}


for(int i=1;i<=15;i++)
{
if(col==200)
{
setbkcolor(random(i));
}
if(col==400)
{
setbkcolor(random(i));
}
}//for inner close
}//for outer loop

for(int k=1;k<=120;k++)
{
setcolor(random(15));
circle(300,250,1+k);
delay(1);

}

cleardevice();

}
closegraph();
getch();

}
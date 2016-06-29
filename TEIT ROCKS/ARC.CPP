#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<math.h>
int start(int,int,int,int);
void main2()
{
   int gd,gm,y1=0,y2=80,k=1,p=1,a=0,s=0,sc=0;
   detectgraph(&gd,&gm);
   initgraph(&gd,&gm,"c:\\tc\\bgi");
   while(p!=0)
   {
   cleardevice();
   setbkcolor(0);
   int t;
   settextstyle(1,0,2);
   outtextxy(250,10,"ARCHERY   GAME");
   for(int i=0;i<=4000;i++)
   {
   cleardevice();
   setcolor(YELLOW);
   arc(130,240,-90,-270,32);
   line(130,209,130,273);
   line(120,240,180,240);
   line(180,240,175,235);
   line(180,240,175,245);
   setcolor(WHITE);
   rectangle(2,2,638,478);
   setcolor(YELLOW);
   if(y1==0)
   {
   k=1;
   }
   else if(y2==480)
   {
   k=-1;
   }
   y1=y1+5*k;
   y2=y2+5*k;
   line(530,y1,530,y2);
   settextstyle(1,0,2);
   outtextxy(250,10,"ARCHERY   GAME");
   if(kbhit())
   {
   t=getch();
   if(t=='a' || t=='A')
   {
    a= start(y1,y2,k,s);
    if(a!=1)
    {
    sc=sc+a;
    }
    else
    {
    p=0;
    }
    break;
    }
    else
    {
     outtextxy(10,50,"You pressed the wrong button");
     delay(1000);
     }
     }
     delay(4);
     }
     }
     printf("\n");
      printf("\tSCORE=  %d",sc);

     getch();
   closegraph();
   }

   int start(int y1,int y2,int k,int s)
   {
   int x2=120,y3=240,l=1;
   for(int i=0;i<=34;i++)
   {
    cleardevice();
    setcolor(YELLOW);
   settextstyle(1,0,2);
   outtextxy(250,10,"ARCHERY   GAME");
   arc(130,240,-90,-270,32);
   line(130,209,130,273);
   x2=x2+10;
   setcolor(i);
   line(x2,y3,x2+60,y3);
   line(x2+60,y3,x2+55,y3-5);
   line(x2+60,y3,x2+55,y3+5);
   setcolor(WHITE);
   rectangle(2,2,638,478);
   setcolor(YELLOW);
   if(y1==0)
   {
   k=1;
   }
   else if(y2==480)
   {
   k=-1;
   }
   y1=y1+5*k;
   y2=y2+5*k;
   setcolor(RED);
   line(530,y1,530,y1+24);//target25up
   line(530,y2-24,530,y2);//target25down
   setcolor(YELLOW);
   line(530,y1+25,530,y1+34);//target50up
   line(530,y2-34,530,y2-25);//target50down
   setcolor(MAGENTA);
   line(530,y1+35,530,y1+45);//target100
   delay(4);
   }
   for(i=0;i<80;i++)
   {
     if(y1+i==y3)
     {
	l=2;
	if(i<=45 && i>=35)
	{
		settextstyle(1,0,2);
		outtextxy(50,400,"EXCELLENT!");
		s=s+100;
		outtextxy(400,400,"Your Score =100");
		delay(2000);
			break;
	}
	else if((i<35 && i>=25) || (i>45 && i<=55))
	{
		settextstyle(1,0,2);
		outtextxy(50,400,"VERY NICE");
		outtextxy(400,400,"Your Score =50");
		s=s+50;

		delay(2000);
			break;
	}
	 else if((i<25 && i>=0) || (i>55 && i<=80))
	{
		settextstyle(1,0,2);
		outtextxy(50,400,"GOOD");
		s=s+25;
		outtextxy(400,400,"Your Score =25");
		delay(2000);

	 }
     }

   }
   if(l==1)
	{
		settextstyle(1,0,2);
		outtextxy(250,240,"MISSSSEDDDDDD");
		outtextxy(270,260,"GAME   OVER");
		delay(200);
		s=1;
	}
	return(s);
}

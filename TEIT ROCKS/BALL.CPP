#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<math.h>
void main3()
{
  int stage=1,amount=5,value=1,cond=0,score=0,gd=DETECT,gm,i,j,xstep=1,ystep=1,l=10,t=10,theta=0;
  char ch,buffer[20];
  initgraph(&gd,&gm,"C:\\TC\\BGI");
  int x=1,y=1,a=((getmaxx()/2)-50),b=390,c=(a+100),d=410,f=390,p,q,r,s,n,u,o,v;
  float rad,g[3][2],m[3][3]={0,0,0,0,0,0,0,0,0},k[3][2],e[3][2];

  fflush(stdin);
  randomize();
  setcolor(4);
  settextstyle(10,HORIZ_DIR,1);
  outtextxy((getmaxx()/2)-100,200,"BALL BOUNCING");
  settextstyle(11,HORIZ_DIR,1);
  setcolor(7);
  outtextxy((getmaxx()/2)-75,300,"Press ENTER key to start");
  outtextxy((getmaxx()/2)-100,350,"Press LEFT & RIGHT arrow keys");
  getch();
  cleardevice();

 new1:
  setcolor(7);
  sprintf(buffer,"STAGE....%d",stage);
  outtextxy((getmaxx()/2)-100,200,buffer);
  outtextxy((getmaxx()/2)-60,450,"SCORE:- ");
  delay(1000);
  setcolor(0);
  sprintf(buffer,"STAGE....%d",stage);
  outtextxy((getmaxx()/2)-100,200,buffer);


  while(1)
  {
   f=390;
  while(!kbhit())
  {
   if(l>=getmaxx()||l<=0)
   {
    cond=0;
    setcolor(0);
    circle(l,t,10);
    x*=-1;
    xstep=x*(random(3)+value);
    ystep=y*(random(3)+value);
    if(l<=0)
     l=0;
    else
     l=getmaxx();
     theta*=-1;
   }

   if((((t+10)>=390) && l>=a && l<=c))
   {
    if(cond==0)
    {
     setcolor(0);
     sprintf(buffer,"%d",score);
     outtextxy((getmaxx()/2),450,buffer);
     score=score+amount;
      if(score==20){amount=10;stage++;value++;cleardevice();goto new1;}
 else if(score==100){amount=25;stage++;value++;cleardevice();goto new1;}
 else if(score==300){amount=50;stage++;value++;cleardevice();goto new1;}
 else if(score==700){amount=100;stage++;value++;cleardevice();goto new1;}
 else if(score==1500){value=value+5;}
     }
    cond=1;
    setcolor(0);
    circle(l,t,10);
    y=-1;
    ystep=y*(random(3)+value);
    if(l<=a+15){x*=-1;theta*=-1;}
    if(l>=c-15){x*=-1;theta*=-1;}
    xstep=x*(random(3)+value);
    f=f-random(5);
    t=f;
   }

   if(t<=0)
   {
    cond=0;
    setcolor(0);
    circle(l,t,10);
    y*=-1;
    ystep=y*(random(3)+value);
    xstep=x*(random(3)+value);
    if(t<=0)
     t=0;
    else
     t=0;
   }


   if(t>=410)
   {
    cleardevice();
    gotoxy(30,20);
    printf("YOUR SCORE......%d",score);
    setcolor(5);
    settextstyle(3,HORIZ_DIR,5);
    outtextxy((getmaxx()/2)-100,200,"GAME OVER");
    delay(2000);
    goto end;
   }

   setcolor(7);
   sprintf(buffer,"%d",score);
   outtextxy((getmaxx()/2),450,buffer);
//   setfillstyle(SOLID_FILL,4);
   setcolor(3);
   rectangle(a,b,c,d);
//   floodfill(a+50,d-10,3);

   setcolor(0);
   line(p,q,r,s);
   line(n,u,o,v);
   circle(l,t,10);
   delay(10);


   l+=x+xstep;
   t+=y+ystep;

   rad=theta*(3.14/180);

   k[0][0]=10;k[0][1]=10;k[1][0]=0;k[1][1]=20;k[2][0]=1;k[2][1]=1;
   e[0][0]=0;e[0][1]=20;e[1][0]=10;e[1][1]=10;e[2][0]=1;e[2][1]=1;

   m[0][0]=cos(rad);
   m[0][1]=sin(rad)*(-1);
   m[0][2]=((-1*10)*cos(rad))+(10*sin(rad))+(l);
   m[1][0]=sin(rad);
   m[1][1]=cos(rad);
   m[1][2]=((-1*10)*sin(rad))-(10*cos(rad))+(t);
   m[2][2]=1;

  for(i=0;i<3;i++)
  {
  for(j=0;j<2;j++)
   {
    g[i][j]=m[i][0]*k[0][j]+m[i][1]*k[1][j]+m[i][2]*k[2][j];
   }
  }

    p=g[0][0];
    q=g[1][0];
    r=g[0][1];
    s=g[1][1];


  for(i=0;i<3;i++)
  {
  for(j=0;j<2;j++)
   {
    g[i][j]=m[i][0]*e[0][j]+m[i][1]*e[1][j]+m[i][2]*e[2][j];
   }
  }

   n=g[0][0];
   u=g[1][0];
   o=g[0][1];
   v=g[1][1];

    theta=theta+5;


   setcolor(7);
   line(p,q,r,s);
   line(n,u,o,v);
   circle(l,t,10);
   delay(10);

  }
   ch=getch();
   ch=getch();
//   setfillstyle(SOLID_FILL,0);
//   floodfill(a+50,d-10,3);
   setcolor(0);
   rectangle(a,b,c,d);

   if(ch==75)
   {
    if(a>0){
    a=a-40;
    c=c-40;}
   }
   else if(ch==77)
   {
    if(c<getmaxx()){
    a=a+40;
    c=c+40;}
   }
   else
   {
    cleardevice();
    setcolor(7);
    settextstyle(8,HORIZ_DIR,1);
    outtextxy((getmaxx()/2)-75,200,"WRONG KEY PRESSED....");
    outtext("DISQUALIFIED");
    getch();
    goto end;
   }
   setcolor(3);
   rectangle(a,b,c,d);
 }
  end:
}










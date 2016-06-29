#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
int bon=0;
float score=800;
float t;
void main4()
{
time_t first,second;
first=time(NULL);
void winner();
void translate(int,int);
void blockdisplay();
void collision(int, int);
int move(int,int,char,int);
void crash();
char c=' ';
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");

 settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);

   /* output a message */


   outtextxy(20, 200,"REACH THE DESTINY GAME");

     settextstyle(2, HORIZ_DIR, 5);
	outtextxy(197, 320,"Press any KEY to start game");
    outtextxy(250, 340,"Press A FOR LEFT");
      outtextxy(250, 360,"Press S FOR BOTTOM");
      outtextxy(250, 380,"Press D FOR RIGHT");
	outtextxy(250, 400,"Press W FOR UP");

	getch();
	cleardevice();
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
int i,x=0,y=0,flag=3;
for(i=0;i<=10000;i++)
{
cleardevice();
blockdisplay();
translate(x,y);
flag=move(x,y,c,flag);
if(flag==0)
{
x--;
translate(x,y);
}
if(flag==1)
{
y++;
translate(x,y);
}
if(flag==-1)
{
y--;
translate(x,y);
}
if(flag==2)
{
x++;
translate(x,y);
}
second=time(NULL);
t=difftime(second,first);
if(x==-540 && y>=-60 && y<=-26)
winner();
}
}
void winner()
{
cleardevice();
score=score-(t*5);
settextstyle(0,0,2);
setcolor(11);
setfillstyle(SOLID_FILL,BLACK);
floodfill(0,0,BLACK);
cout<<endl<<endl<<"\t\t"<<t;
outtextxy(20,35,"U TOOK ");
outtextxy(155,35,"SECONDS TO GET TO FINISH LINE");
settextstyle(0,0,3);
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t\t\t\t\t\t\t"<<score;
outtextxy(135,140,"UR SCORE IS :");
setcolor(10);
outtextxy(10,200,"U R D WINNER OF THIS LEVEL");
getch();
delay(1000);
exit(1);
}
void blockdisplay()
{
rectangle(10,10,20,70);
rectangle(90,40,100,100);
rectangle(170,10,180,70);
rectangle(250,40,260,100);
rectangle(330,10,340,70);
rectangle(410,40,420,100);
rectangle(490,10,500,70);
rectangle(570,40,580,100);
rectangle(10,120,20,180);
rectangle(90,120,100,180);
rectangle(170,150,180,210);
rectangle(250,120,260,180);
rectangle(330,150,340,210);
rectangle(410,150,420,210);
rectangle(490,120,500,180);
rectangle(10,250,20,320);
rectangle(90,220,100,280);
rectangle(170,220,180,280);
rectangle(250,250,260,320);
rectangle(330,220,340,280);
rectangle(410,250,420,320);
rectangle(490,220,500,280);
rectangle(10,350,20,410);
rectangle(90,380,100,440);
rectangle(170,350,180,410);
rectangle(250,350,260,410);
rectangle(330,380,340,440);
rectangle(410,350,420,410);
rectangle(490,380,500,440);
rectangle(570,380,580,440);
setcolor(WHITE);
settextstyle(0,1,1);
outtextxy(25,190,"WINNER");
rectangle(0,190,10,240);
setfillstyle(SLASH_FILL,WHITE);
floodfill(5,200,WHITE);
setcolor(RED);
}
void translate(int x,int m)
{
setcolor(WHITE);
line((552+x),(250+m),(562+x),(250+m));
line((562+x),(250+m),(567+x),(235+m));
line((567+x),(235+m),(600+x),(235+m));
line((600+x),(235+m),(605+x),(250+m));
line((605+x),(250+m),(612+x),(250+m));
line((612+x),(250+m),(612+x),(270+m));
line((612+x),(270+m),(606+x),(270+m));
line((600+x),(270+m),(573+x),(270+m));
line((567+x),(270+m),(552+x),(270+m));
line((552+x),(270+m),(552+x),(250+m));
rectangle((570+x),(240+m),(580+x),(250+m));
rectangle((587+x),(240+m),(597+x),(250+m));
circle((603+x),(270+m),3);
circle((570+x),(270+m),3);
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
floodfill((570+x),(260+m),WHITE);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill((603+x),(270+m),WHITE);
floodfill((570+x),(270+m),WHITE);
setcolor(RED);
}
void crash()
{
cleardevice();
settextstyle(0,0,10);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,RED);
floodfill(0,0,RED);
outtextxy(250,200,"BOOM");
delay(500);
exit(1);
}
void collision(int x, int y)
{
if(x==30 && (y+250)>=40 && (y+250)<=100)
crash();
if(x==30 && (y+250)>=380 && (y+250)<=440)
crash();
if(x==-50 && (y+250)>=10 && (y+250)<=70)
crash();
if(x==-50 && (y+250)>=120 && (y+250)<=180)
crash();
if(x==-50 && (y+250)>=220 && (y+250)<=280)
crash();
if(x==-50 && (y+250)>=380 && (y+250)<=440)
crash();
if(x==-130 && (y+250)>=40 && (y+250)<=100)
crash();
if(x==-130 && (y+250)>=150 && (y+250)<=210)
crash();
if(x==-130 && (y+250)>=250 && (y+250)<=320)
crash();
if(x==-130 && (y+250)>=350 && (y+250)<=410)
crash();
if(x==-210 && (y+250)>=10 && (y+250)<=70)
crash();
if(x==-210 && (y+250)>=150 && (y+250)<=220)
crash();
if(x==-210 && (y+250)>=220 && (y+250)<=280)
crash();
if(x==-210 && (y+250)>=380 && (y+250)<=440)
crash();
if(x==-290 && (y+250)>=40 && (y+250)<=100)
crash();
if(x==-290 && (y+250)>=120 && (y+250)<=180)
crash();
if(x==-290 && (y+250)>=250 && (y+250)<=320)
crash();
if(x==-290 && (y+250)>=350 && (y+250)<=410)
crash();
if(x==-370 && (y+250)>=10 && (y+250)<=70)
crash();
if(x==-370 && (y+250)>=150 && (y+250)<=210)
crash();
if(x==-370 && (y+250)>=220 && (y+250)<=280)
crash();
if(x==-370 && (y+250)>=350 && (y+250)<=410)
crash();
if(x==-450 && (y+250)>=40 && (y+250)<=100)
crash();
if(x==-450 && (y+250)>=120 && (y+250)<=180)
crash();
if(x==-450 && (y+250)>=220 && (y+250)<=280)
crash();
if(x==-450 && (y+250)>=380 && (y+250)<=440)
crash();
if(x==-530 && (y+250)>=10 && (y+250)<=70)
crash();
if(x==-530 && (y+250)>=120 && (y+250)<=180)
crash();
if(x==-530 && (y+250)>=250 && (y+250)<=320)
crash();
if(x==-530 && (y+250)>=350 && (y+250)<=440)
crash();
if(x==-43 && (y+250)>=10 && (y+250)<=70)
crash();
if(x==-43 && (y+250)>=380 && (y+250)<=440)
crash();
if(x==-123 && (y+250)>=120 && (y+250)<=180)
crash();
if(x==-123 && (y+250)>=220 && (y+250)<=280)
crash();
if(x==-123 && (y+250)>=380 && (y+250)<=440)
crash();
if(x==-203 && (y+250)>=40 && (y+250)<=100)
crash();
if(x==-203 && (y+250)>=150 && (y+250)<=210)
crash();
if(x==-203 && (y+250)>=250 && (y+250)<=320)
crash();
if(x==-203 && (y+250)>=350 && (y+250)<=410)
crash();
if(x==-283 && (y+250)>=10 && (y+250)<=70)
crash();
if(x==-283 && (y+250)>=150 && (y+250)<=220)
crash();
if(x==-283 && (y+250)>=220 && (y+250)<=280)
crash();
if(x==-283 && (y+250)>=380 && (y+250)<=440)
crash();
if(x==-363 && (y+250)>=40 && (y+250)<=100)
crash();
if(x==-363 && (y+250)>=120 && (y+250)<=180)
crash();
if(x==-363 && (y+250)>=220 && (y+250)<=280)
crash();
if(x==-363 && (y+250)>=350 && (y+250)<=410)
crash();
if(x==-443 && (y+250)>=10 && (y+250)<=70)
crash();
if(x==-443 && (y+250)>=150 && (y+250)<=210)
crash();
if(x==-443 && (y+250)>=220 && (y+250)<=280)
crash();
if(x==-443 && (y+250)>=350 && (y+250)<=410)
crash();
if(x==-523 && (y+250)>=40 && (y+250)<=100)
crash();
if(x==-523 && (y+250)>=120 && (y+250)<=180)
crash();
if(x==-523 && (y+250)>=220 && (y+250)<=280)
crash();
if(x==-523 && (y+250)>=380 && (y+250)<=440)
crash();
if(x==-603 && (y+250)>=10 && (y+250)<=70)
crash();
if(x==-603 && (y+250)>=120 && (y+250)<=180)
crash();
if(x==-603 && (y+250)>=250 && (y+250)<=320)
crash();
if(x==-603 && (y+250)>=350 && (y+250)<=440)
crash();
if((x+552)>=570 && (x+552)<=580 && y==-148)
crash();
if(y==-134 && (((x+567)>=567 && (x+567)<=582) || ((x+583)>=565 && (x+583)<=597)))
crash();
if((x+605)>=564 && (x+605)<=571 && y==-148)
crash();
if((x+552)>=552 && (x+552)<=568 && y==107)
crash();
if((x+552)>=490 && (x+552)<=500 && y==-178)
crash();
if(y==-163 && (((x+567)>=489 && (x+567)<=501) || ((x+583)>=486 && (x+583)<=498)))
crash();
if((x+605)>=484 && (x+605)<=494 && y==-178)
crash();
if((x+552)>=430 && (x+552)<=488 && y==-153)
crash();
if((x+552)>=430 && (x+552)<=488 && y>=-57 && y<=-52)
crash();
if((x+552)>=430 && (x+552)<=488 && y==107)
crash();
if((x+552)>=478 && (x+552)<=500 && y==32)
crash();
if((x+607)>=487 && (x+607)<=497 && y==32)
crash();
if((x+567)>=458 && (x+567)<=490 && y==46)
crash();
if((x+552)>=401 && (x+552)<=420 && y==162)
crash();
if((x+607)>=406 && (x+607)<=416 && y==162)
crash();
if((x+567)>=379 && (x+567)<=416 && y==178)
crash();
if((x+552)>=408 && (x+552)<=421 && y==75)
crash();
if((x+552)>=410 && (x+552)<=423 && y==-25)
crash();
if((x+552)>=401 && (x+552)<=420 && y==-148)
crash();
if((x+607)>=406 && (x+607)<=416 && y==-148)
crash();
if((x+567)>=379 && (x+567)<=416 && y==-133)
crash();
if((x+552)>=320 && (x+552)<=330 && y==32)
crash();
if((x+607)>=326 && (x+607)<=335 && y==32)
crash();
if((x+567)>=297 && (x+567)<=340 && y==47)
crash();
if((x+567)==345 && y==200)
crash();
if((x+552)>=271 && (x+552)<=330 && y==107)
crash();
if((x+552)>=271 && (x+552)<=339 && y==-124)
crash();
if((x+552)>=320 && (x+552)<=330 && y==-177)
crash();
if((x+607)>=326 && (x+607)<=335 && y==-177)
crash();
if((x+567)>=297 && (x+567)<=340 && y==-163)
crash();
if((x+552)>=242 && (x+552)<=258 && y==163)
crash();
if((x+607)>=246 && (x+607)<=256 && y==163)
crash();
if((x+567)>=219 && (x+567)<=259 && y==179)
crash();
if((x+552)==257 && y>=69 && y<=78)
crash();
if((x+607)>=245 && (x+607)<=255 && y==-67)
crash();
if((x+552)>=240 && (x+552)<=259 && y==-67)
crash();
if((x+567)>=218 && (x+567)<=260 && y==-51)
crash();
if((x+552)>=160 && (x+552)<=180 && y==162)
crash();
if((x+607)>=165 && (x+607)<=175 && y==162)
crash();
if((x+567)>=137 && (x+567)<=180 && y==177)
crash();
if((x+552)>=160 && (x+552)<=180 && y==33)
crash();
if((x+607)>=165 && (x+607)<=175 && y==33)
crash();
if((x+567)>=137 && (x+567)<=180 && y==47)
crash();
if((x+552)>=110 && (x+552)<=180 && y==77)
crash();
if((x+552)>=160 && (x+552)<=180 && y==-178)
crash();
if((x+607)>=165 && (x+607)<=175 && y==-178)
crash();
if((x+567)>=137 && (x+567)<=180 && y==-163)
crash();
if((x+552)>=110 && (x+552)<=180 && y==-122)
crash();
if((x+552)>=79 && (x+552)<=99 && y==33)
crash();
if((x+607)>=86 && (x+607)<=96 && y==33)
crash();
if((x+567)>=98 && (x+567)<=57 && y==47)
crash();
if((x+552)==101 && y>=-170 && y<=-149)
crash();
if((x+552)>=30 && (x+552)<=100 && y>=-56 && y<=-54)
crash();
if((x+552)>=30 && (x+552)<=100 && y==107)
crash();
if((x+552)>=-1 && (x+552)<=20 && y==162)
crash();
if((x+607)>=5 && (x+607)<=15 && y==162)
crash();
if((x+567)>=-23 && (x+567)<=20 && y==177)
crash();
if((x+552)>=-1 && (x+552)<=20 && y==-66)
crash();
if((x+607)>=5 && (x+607)<=15 && y==-66)
crash();
if((x+567)>=-23 && (x+567)<=20 && y==-53)
crash();
if((x+552)>=-1 && (x+552)<=20 && y==-178)
crash();
if((x+607)>=5 && (x+607)<=15 && y==-178)
crash();
if((x+567)>=-23 && (x+567)<=20 && y==-143)
crash();
if((x+552)>=-50 && (x+552)<=20 && y==-22)
crash();
if((x+552)>=-50 && (x+552)<=20 && y==-153)
crash();
if((x+552)>=-50 && (x+552)<=20 && y>=50 && y<=80)
crash();
}
int move(int x,int y,char c,int flag)
{
collision(x,y);
flag=3;
int maxy = getmaxy();
c=getch();
if((int)c==27)
exit(1);
if(c=='w'|| c=='W')
{
if((y+200)>=-10)
{
y--;
translate(x,y);
flag=-1;
}
}
if(c=='s'|| c=='S')
{
if((y+280)<=maxy)
{
y++;
translate(x,y);
flag=1;
}
}
if(c=='a'|| c=='A')
{
x--;
translate(x,y);
flag=0;
}
if(c=='d'|| c=='D')
{
x++;
translate(x,y);
flag=2;
}
return flag;
}
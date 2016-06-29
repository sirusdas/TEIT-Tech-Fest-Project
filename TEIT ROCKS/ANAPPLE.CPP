#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>

void main()
{
int style,size=5,midx=100,midy=100,fname;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\bgi");


  settextstyle(GOTHIC_FONT, HORIZ_DIR, size+3);

   /* output a message */


   outtextxy(midx, midy+60,"AN APPLE");




    delay(200);
    getch();

  cleardevice();
   setcolor(BLUE);
   /* select the text style */
   settextstyle(GOTHIC_FONT, HORIZ_DIR, size);

   /* output a message */
   setbkcolor(WHITE);

   outtextxy(midx, midy,"Once upon a time,");
     outtextxy(midx, 150,"mr.issac newton was ");
   outtextxy(midx, midy+100,"sitting under the tree");
   outtextxy(midx, midy+150,"and then .");
   delay(700);
   outtextxy(midx, midy+150,"         .");
     delay(700);
   outtextxy(midx, midy+150,"          .");
     delay(700);
   outtextxy(midx, midy+150,"           .");
     delay(700);
   outtextxy(midx, midy+150,"            .");
     delay(700);
   outtextxy(midx, midy+150,"             .");
     delay(700);
   outtextxy(midx, midy+150,"              .");
     delay(700);
   outtextxy(midx, midy+150,"               .");
     delay(700);
   outtextxy(midx, midy+150,"                .");
//zzz
cleardevice();

line(0,450,640,450);  //ground
circle(180,180,100);  //tree circle
{

//setfillstyle(1,GREEN);
//floodfill(181,250,15);
}
line(150,275,140,450);
line(210,275,220,450); //tree base
{

//setfillstyle(1,BROWN);
//floodfill(200,300,15);
}
circle(230,380,10); //man face
line(230,390,260,450); //body
line(260,450,290,420);  //leg
line(290,420,310,450);  //leg
line(235,400,260,420);  //hand_1
line(235,400,233,430);  //hand_2
line(260,420,280,420);  //hand_1
line(233,430,241,450);  //hand_2

delay(1000);
settextstyle(1,HORIZ_DIR,1);
outtextxy(260,330,"z");
delay(1000);
settextstyle(1,HORIZ_DIR,2);
outtextxy(280,310,"z");
delay(1000);
settextstyle(1,HORIZ_DIR,3);
outtextxy(300,290,"z");
delay(1000);
settextstyle(1,HORIZ_DIR,4);
outtextxy(320,270,"z");
delay(1000);
settextstyle(1,HORIZ_DIR,5);
outtextxy(340,250,"z");

getch();
cleardevice();
//tree

clrscr();
int x=230,y=366;
int k=15,l=1;


for(int i=0;i<=200;i++)
{
cleardevice();


line(0,450,640,450);  //ground
circle(180,180,100);  //tree circle
{

//setfillstyle(1,GREEN);
//floodfill(181,250,15);
}
circle(230,166+i,4);  //apple
line(150,275,140,450);
line(210,275,220,450); //tree base
{

//setfillstyle(1,BROWN);
//floodfill(200,300,15);
}
circle(230,380,10); //man face
line(230,390,260,450); //body
line(260,450,290,420);  //leg
line(290,420,310,450);  //leg
line(235,400,260,420);  //hand_1
line(235,400,233,430);  //hand_2
line(260,420,280,420);  //hand_1
line(233,430,241,450);  //hand_2

 }
 delay(10);
 for(int j=0;j<=11;j++)
 {
 cleardevice();
 if((j==0) || (j==11))
{
 sound(1200);
 {
 delay(100);
 }}
 nosound();
 x=x+k;
 y=y+l;
 circle(x,y,4);//apple
 k=k-1;
 l=l+1;
line(0,450,640,450);  //ground
circle(180,180,100);  //tree circle
{

//setfillstyle(1,GREEN);
//floodfill(181,250,15);
}
line(150,275,140,450);
line(210,275,220,450); //tree base
{

//setfillstyle(1,BROWN);
//floodfill(200,300,15);
}
circle(230,380,10); //man face
line(230,390,260,450); //body
line(260,450,290,420);  //leg
line(290,420,310,450);  //leg
line(235,400,260,420);  //hand_1
line(235,400,233,430);  //hand_2
line(260,420,280,420);  //hand_1
line(233,430,241,450);  //hand_2
if(y==450)
{
break;
}
 delay(80);
 }
getch();
cleardevice();
//newvish
int x4=225,y4=185;

for(int p=0;p<=60;p++)
{

 cleardevice();
 j=j+1;
 circle(x4+25+p,y4-15+j,30);
line(0,440,640,440);//final line
line(x4+p,y4+j,150,310); //main body line
line(150,310,170,340);//right thighs
line(170,340,170,440);//right legs
line(150,310,130,440);//left leg
line(185+p,250+11,220+p,300+j);//elbow
line(220+p,300+j,260+p,320+j);//hand
circle(320,430,10);
delay(80);
}
getch();
cleardevice();
settextstyle(1, 0, 1);
//vishmod
circle(250,130,30);//face

line(250,160,250,310);
line(250,310,230,440);
line(250,310,280,440);
line(250,210,300,240);
line(300,240,335,230);
circle(335,220,10);//apple
//setfillstyle(SOLID_FILL, RED) ;
//floodfill(335,220, RED);
line(0,440,640,440);
delay(1000);
ellipse(450, 100, 205, 194, 120, 70);//thinking
line(332, 115, 290, 130);
line(343, 130, 290, 130);
delay(1500);
settextstyle(2, 0, 5);
outtextxy(350, 80, "Why this apple fall down??") ;
delay(1500);
outtextxy(350, 92, "Why it didnt went") ;
delay(1500);
outtextxy(350, 104, "up in the sky???") ;
delay(1500);
getch();
cleardevice();
//sitting
circle(200, 150, 30);//face
line(175, 165, 130, 270);  //body
line(130, 270, 200, 225);//thighs
line(200, 225, 200, 320);//legs
line(170, 175, 185, 230);//upper hand
line(185, 230, 210, 170);//lower hand
arc(140, 330, 0, 180, 60); //rock arc
line(80, 330, 80, 370);//rock left
line(200, 330,200, 370);//rock right
line(0, 370, 640, 370);//ground
delay(1800);
circle(240, 145, 2);//one
delay(1300);
circle(250, 140, 5);//two
delay(1300);
circle(270, 130, 10);//three
delay(1300);
ellipse(405, 80, 0, 360, 140, 75);//thinking
settextstyle(2, 0, 5);
outtextxy(290, 35, "The apple must have fallen") ;
delay(1500);
outtextxy(290, 50, "on the earth due to some") ;
delay(1500);
outtextxy(290, 65, "kind of force which") ;
delay(1500);
outtextxy(290, 80,"pulled it downward...") ;
delay(1500);
outtextxy(290, 95, "Lets name that mysterious");
delay(1500);
outtextxy(305, 110, "force as GRAVITY....");


getch();
cleardevice();
//public
circle(100, 140, 20);//face
line(100,160, 100, 270);//body
line(100, 270, 80, 340);//leg
line(100, 270,120, 340);//leg
line(100, 180, 130, 210);//hand
line(130, 210, 150, 180);//hand
circle(155,175, 5);//palm
line(157,170, 165, 162);//finger
line(100, 180, 80, 210);//back hand
line(80, 210, 95, 230);//back hand
line(10, 340, 10, 450);//stage
line(10, 340, 150, 340);//stage
line(150, 340, 150, 450);//stage
line(0, 450, 640, 450);//ground
// setfillstyle(SOLID_FILL, RED);
//floodfill(20, 350, RED);
//speech
ellipse(250, 70, 220, 210, 140, 66);
line(130, 102, 115, 120);
line(143, 112, 115, 120);
settextstyle(2, 0, 5);
outtextxy(145, 22, "THE ACCELARATION OF THE ");
outtextxy(135,40, "FALLING OBJECT IS DIRECTLY");
outtextxy(135, 58, "PROPORTIONAL TO THE HEIGHT OF");
outtextxy(135, 76, "THE OBJECT FROM THE");
outtextxy(138, 94, "CENTER OF THE EARTH...");
//publics   one
circle(250,270, 20);//face
line(250, 290, 250,380);//body
line(250, 380, 230, 450);//legs
line(250, 380, 270, 450);//legs
line(250, 300, 230, 340);//arms
line(250, 300, 270,340);//arms



//public 2
circle(300,270, 20);//face
line(300, 290, 300,380);//body
line(300, 380, 280, 450);//legs
line(300, 380, 320, 450);//legs
line(300, 300, 280, 340);//arms
line(300, 300, 320,340);//arms
//public 3
circle(350,270, 20);//face
line(350, 290, 350,380);//body
line(350, 380, 330, 450);//legs
line(350, 380, 370, 450);//legs
line(350, 300, 330, 340);//arms
line(350, 300, 370,340);//arms
//public 4
circle(400,270, 20);//face
line(400, 290, 400,380);//body
line(400, 380, 380, 450);//legs
line(400, 380, 420, 450);//legs
line(400, 300, 380, 340);//arms
line(400, 300, 420,340);//arms

//public 5
circle(450,270, 20);//face
line(450, 290, 450,380);//body
line(450, 380, 430, 450);//legs
line(450, 380, 470, 450);//legs
line(450, 300, 430, 340);//arms
line(450, 300, 470,340);//arms
getch();
cleardevice();
//helicopter
for(i=500;i>=-160;i--)
{
sound(300);
{
delay(10);
}
nosound();
arc(200+i, 250,90, 270, 40);//forward
line(200+i, 210, 250+i, 210);//top
line(200+i, 290, 250+i, 290);//down
arc(250+i, 250, 270, 90, 40);//back
line(220+i, 210, 225+i, 200);//fan
line(230+i, 210, 225+i, 200);//fan
ellipse(225+i,195, 0, 360, 60, 5);//fanmain
line(210+i, 290, 200+i, 310);//base
line(240+i, 290, 250+i, 310);//base
line(190+i, 310, 260+i, 310);//base
line(200+i,250, 200+i, 225);//window
line(200+i, 250, 175+i, 250);//window
arc(200+i, 250, 90, 180, 25);//window
line(370+i, 250,285+i,230);
line(370+i, 250, 285+i, 270);
circle(370+i, 250, 20);//fan
rectangle(420+i, 190, 770+i,310);//banner
line(420+i, 190, 370+i, 250);//rope1
line(420+i, 310, 370+i, 250);//rope2
setcolor(i);
textbackground(i);
settextstyle(1,0, 1);
outtextxy(270+160+i, 200,"The natural force of attraction");
outtextxy(270+160+i, 215,"exerted by, a celestial body");
outtextxy(270+160+i, 230,"such as Earth, upon objects at");
outtextxy(270+160+i, 245,"or near its surface ending to");
outtextxy(270+160+i, 260,"draw them toward the center of");
outtextxy(270+160+i, 275,"the body is called GRAVITY");
delay(7);
cleardevice();
}
setcolor(RED);
arc(200-160, 250,90, 270, 40);//forward
line(200-160, 210, 250-160, 210);//top
line(200-160, 290, 250-160, 290);//down
arc(250-160, 250, 270, 90, 40);//back
line(220-160, 210, 225-160, 200);//fan
line(230-160, 210, 225-160, 200);//fan
ellipse(225-160,195, 0, 360, 60, 5);//fanmain
line(210-160, 290, 200-160, 310);//base
line(240-160, 290, 250-160, 310);//base
line(190-160, 310, 260-160, 310);//base
line(200-160, 250, 200-160, 225);//window
line(200-160, 250, 175-160, 250);//window
arc(200-160, 250, 90, 180, 25);//window
line(370-160, 250, 285-160,230);
line(370-160, 250, 285-160, 270);
circle(370-160, 250, 20);//fan
rectangle(420-160, 190, 770-160,310);//banner
line(420-160, 190, 370-160, 250);//rope1
line(420-160, 310, 370-160, 250);//rope2
setcolor(MAGENTA);
settextstyle(1,0, 1);
outtextxy(270, 200,"The natural force of attraction");
outtextxy(270, 215,"exerted by, a celestial body");
outtextxy(270, 230,"such as Earth, upon objects at");
outtextxy(270, 245,"or near its surface ending to");
outtextxy(270, 260,"draw them toward the center of");
outtextxy(270, 275,"the body is called GRAVITY");

   /* CREDITS */

   getch();
    cleardevice();

   /* select the text style */


   /* output a message */
   settextstyle(GOTHIC_FONT, HORIZ_DIR, size+3);
   outtextxy(midx, midy-100,"Credits");
   settextstyle(GOTHIC_FONT, HORIZ_DIR, size-2);
    delay(700);
     outtextxy(midx, 150,"Niraj Chauhan ");
    delay(700);
   outtextxy(midx, midy+100,"Suresh Das");
    delay(700);
   outtextxy(midx, midy+150,"Pranav Purandare");

   delay(700);
   outtextxy(midx, midy+200,"Nikhil Ratate");
     delay(700);
   outtextxy(midx, midy+250,"Pankaj Suthar");
     delay(700);
   outtextxy(midx, midy+300,"Vishal Tandon");
     delay(700);
  getch();
closegraph();

}
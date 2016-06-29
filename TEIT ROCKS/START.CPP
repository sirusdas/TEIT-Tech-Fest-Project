
#include "ANAPPLE.CPP"
#include "ARC.CPP"
#include "BALL.CPP"
#include "RACE.CPP"
#include "VE.CPP"
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
clrscr();
int n=0;
 int gd,gm;
   detectgraph(&gd,&gm);
   initgraph(&gd,&gm,"c:\\tc\\bgi");
settextstyle(5,0,3);
cout<<endl<<endl<<endl<<endl<<"\n\n\n\n\nENTER"<<endl<<"1 : AN APPLE"<<endl<<"2 : ARCHERY GAME"<<endl;
cout<<"3 : BALL BOUNCING GAME"<<endl<<"4 : REACH THE DESTINY"<<endl<<"5 : VISUAL EFFECT"<<endl;
cin>>n;
if(n==1)
main1();
if(n==2)
main2();
if(n==3)
main3();
if(n==4)
main4();
if(n==5)
main5();
else
{
cout<<"enter a valid option";
delay(500);
main();
}
}

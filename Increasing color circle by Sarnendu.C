#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main(){
 int x,y,i, gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\turboc3\\bgi");
 x=getmaxx()/2;
 y=getmaxx()/3;
 setbkcolor(3);// 3 is color code of cyan
 setcolor(BLUE);
 for (i=0;i<=8;i++){
 setfillstyle(i,i);
 circle(x,y,i*20);
 floodfill(x-2+i*20,y,BLUE);
}
 gotoxy(30,25);
 printf("Increasing color circle by Sarnendu");
 getch();
 closegraph();
}

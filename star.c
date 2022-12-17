// Little Star In Sky With Name
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
void main()
{
	int gd=DETECT,gm,i,j,k,l,m,n;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	while(!kbhit())
	{
		cleardevice();
		for(i=1;i<=2000;i++)
		{
			m=0;;
			setbkcolor(3);
			putpixel(random(640),random(500),RED);
		}
		settextstyle(1,0,8);
		setcolor(8);
		outtextxy(14,200,"Nils Techsys");
		delay(1200);
	}
	getch();
	closegraph();
}

#include<stdio.h>
main()
{
	int x,y,t;
	printf("������x��\n");
	scanf("%d",&x);
	printf("������y��\n");
	scanf("%d",&y);
	t=x;
	x=y;
	y=t;
	printf("x=%d,y=%d",x,y);
 } 

#include<stdio.h> 
main()
{
	int a=0,b=0;
 	int  t=0;
	scanf("%d",&a);
 	for(t=0;a>0;t++)
 	{
 		b=(b*10)+a%10;
 		a/=10;
	}
 	printf("这个数是%d位的,逆序数=%d\n",t,b);
}

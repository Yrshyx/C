#include<stdio.h>
main()
{
	int x,y;
	int i,*p1,*p2;
	printf("请输入两个数字：");
	scanf("%d%d",&x,&y);
	p1=&x;
	p2=&y; 
	printf("交换前：x=%d,y=%d\n",x,y);
	{
		i=*p1;
		*p1=*p2;
		*p2=i;
    } 
    printf("交换后：x=%d,y=%d\n",x,y);
}

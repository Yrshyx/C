#include<stdio.h>
main()
{
	int i,j,a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int *p,**pp;
	pp=&p;
	printf("用二维数组指针变量的方式输出二维数组：\n");
	for(i=0;i<3;i++)
	{
		p=a[i];
		for(j=0;j<4;j++)
		    printf("%4d",*(*pp+j));
		printf("\n");
	}
	printf("用二级指针变量**pp输出二维数组：\n");
	for(i=0;i<3;i++)
	{
		p=a[i];
		for(j=0;j<4;j++,p++)
		    printf("%4d",**pp);
		printf("\n");
	}
}

#include<stdio.h>
main()
{
	int i,j,*pmax,*pmin,*pt;
	printf("请输入两个数字：");
	scanf("%d%d",&i,&j);
	pmax=&i;
	pmin=&j;
	if(*pmax<*pmin)
	{
		pt=pmax;
		pmax=pmin;
		pmin=pt;
	}
	printf("输入的值：i=%d,j=%d\n",i,j);
	printf("输出的最大值为：%d",*pmax);
}

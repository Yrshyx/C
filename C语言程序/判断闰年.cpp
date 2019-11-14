#include<stdio.h>
main()
{
	int year;
	printf("请输入年份：");
	scanf("%d",&year);
	if(year%4==0&year%100!=0||year%400==0)
	printf("这一年是闰年");
	else
	printf("这一年不是闰年");
	


 } 

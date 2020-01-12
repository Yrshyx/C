//求输入数字的平方，如果平方运算后小于 50 则退出。
#include<stdio.h>
main()
{
	int i,n;
	printf("请输入一个数：\n");
	scanf("%d",&i);
	n=i*i;
	if(n>50)
		printf("%d",n);
	
 } 

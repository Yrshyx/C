#include<stdio.h>
int fact(int n);
main()
{
	int i;
	i=5;
	printf("%d的阶乘结果为：%d",i,fact(i)); 
}
int fact(int n)
{
	if(n<=1)
		return 1;
	else
		return n*fact(n-1); 
	
}

#include<stdio.h>
int fact(int n);
main()
{
	int i;
	printf("������Ҫ��׳˵�һ��������");
	scanf("%d",&i);
	printf("%d�Ľ׳˽��Ϊ��%d",i,fact(i)); 
}
int fact(int n)
{
	if(n<=1)
		return 1;
	else
		return n*fact(n-1); 
	
}

#include<stdio.h>
int  fact(int n)
{
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	return fact(n-1)+fact(n-2);
}
int main(void)
{
	int n;
	printf("������̨������\n");
	scanf("%d",&n);
	printf("�����У�%d\n",fact(n));
	return 0;
}

#include<stdio.h> 
int Feibo(int n)    //递归
{
	if(n == 1||n ==2)
	{
		return 1;
	}
	else
	{
		return Feibo(n-1) + Feibo(n-2);
	}
}
 
int main()
{
	int i,n;
	printf("请输入要输出的项数："); 
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",Feibo(i));
	}
	printf("\n");
 
	return 0;
}


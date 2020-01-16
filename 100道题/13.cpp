#include<stdio.h> 
int tuzi(int n)   
{
	if(n == 1||n ==2)
	{
		return 1;
	}
	else
	{
		return tuzi(n-1) + tuzi(n-2);
	}
}
 
int main()
{
	int i,n;
	printf("请问你想知道那一月的兔子数量？："); 
	scanf("%d",&n);
	printf("%d对",tuzi(n));
 	return 0;
}


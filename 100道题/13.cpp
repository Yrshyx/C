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
	printf("��������֪����һ�µ�������������"); 
	scanf("%d",&n);
	printf("%d��",tuzi(n));
 	return 0;
}


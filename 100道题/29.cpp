#include<stdio.h>
int fact(int n);
main()
{
	int i,sum=0;
	for(i=1;i<=20;i++) 
	sum+=fact(i);
	printf("%d",sum); 
}
int fact(int n)
{
	if(n<=1)
		return 1;
	else
		return n*fact(n-1); 
	
}

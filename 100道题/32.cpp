#include<stdio.h>
void di(int n);
int main()
{
	
	int i=5;
	di(i);
	printf("\n");
	return 0;
}
void di(int n)
{
	char next;
	if(n<=1)
	{
		next=getchar();
		putchar(next);
	}
    else
	{
		next=getchar();
		di(n-1);
		putchar(next);
	}
}


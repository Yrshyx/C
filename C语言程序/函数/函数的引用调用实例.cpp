#include<stdio.h>
void swap(int *a,int *b);
int main()
{
	int i=1,j=2;
	printf("���ú���ǰ:i=%d,j=%d\n",i,j);
	swap(&i,&j);
	printf("���ú�����i=%d,j=%d\n",i,j);
	return 0;
	
}
void swap(int *a, int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

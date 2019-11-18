#include<stdio.h>
main()
{
	int i;
	int *pi;
	pi=&i;
	i=10;
	printf("i=%d\t*pi=%d\n",i,*pi);
	*pi=5;
	printf("i=%d\t*pi=%d\n",i,*pi);
	
	
}

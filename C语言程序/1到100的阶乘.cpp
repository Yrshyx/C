#include<stdio.h>
main()
{
	int i,j,k,sum=0;
	for(i=1;i<4;i++)
	{ 
		k=1;
	    for(j=1;j<=i;j++)
	    {
			k*=j;	
		}
	    sum+=k;
	} 
	printf("%d",sum);
}

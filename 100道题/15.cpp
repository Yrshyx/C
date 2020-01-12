#include<stdio.h>
main()
{
	int i,j,k,t;
	for(i=101;i<=200;i++)
	{
		j=i/100;
		k=(i-100*j)/10;
		t=i%10;
		if(j*j*j+k*k*k+t*t*t==i)
			printf("%d",i);
	}
 } 

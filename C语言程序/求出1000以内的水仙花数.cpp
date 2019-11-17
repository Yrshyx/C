#include<stdio.h>
main()
{
	int i,j,t,k;
	for(i=100;i<1000;i++)
	{
		j=i%10;
		t=(i/10)%10;
		k=i/100;
	if(i=j*j*j+t*t*t+k*k*k)
	printf("%d\n",i);
    }
	
}

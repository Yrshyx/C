#include<stdio.h>
main()
{
	int i=100,j,t,k;
	for(j=0;j<=100;j++)
	  for(t=0;t<=50;t++)
	    for(k=0;k<=20;k++)
	      if(j+k+t==50&j*1+t*2+k*5==100)
	    printf("%d*1+%d*2+%d*5=100\n",j,t,k);	
    
	
} 

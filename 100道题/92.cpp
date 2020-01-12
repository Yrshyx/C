//92.题目：如何组合1、2、5这三个数使其和为100.
#include<stdio.h>
main()
{
	int i,j,k;
	for(i=0;i<=100;i++)
	{
		for(j=0;j<=50;j++)
		{
			for(k=0;k<=20;k++)
			{
				if(i+2*j+5*k==100)
				printf("%d %d %d\n",i,j,k);
			}
		}
	}
	
}

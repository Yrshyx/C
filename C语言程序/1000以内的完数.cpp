#include<stdio.h>
main()
{
	int i,j,sum=0;
	for(i=6;i<1001;i++)
	{
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			sum+=j;
		}
	}
	if(sum==i)
	   printf("1000���ڵ���������Ϊ��%d",i); 
	
	
 } 

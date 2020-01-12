//3.题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
#include<stdio.h>
main()
{
	int i,j,k;
	for(i=0;i<1000;i++)
		for(j=10;j<100;j++)
			for(k=13;k<100;k++)
				if(i+100==j*j && i+268==k*k)
				{
					printf("%d\n",i);
					break;
				}
} 

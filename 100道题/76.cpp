//809*??=800*??+9*?? 
//其中??代表的两位数, 809*??为四位数，8*??的结果为两位数，
//9*??的结果为3位数。求??代表的两位数，及809*??后的结果。

#include<stdio.h>
main()
{
	int i=10,b,c;
	for(i=10;i<=100;i++)
	{
		b=i*809;
		c=i*8;
		if(b>=1000 && b<=9999)
		{
			if(c>=10 && c<=99)
			{
				printf("%d\n",i);
			}
		}
		
	}
	
 } 

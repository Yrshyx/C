#include<stdio.h>
main()
{
	int i=2,k=2;
	for(i=2;i<=100;i++)
	{
		for(k=2;k<i;k++)
		{
			if(i%k==0)
			break;
		}
		if(k==i)
		printf("%d ",i);
	}
}

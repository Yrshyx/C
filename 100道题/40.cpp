//统计所有小于非负整数n的质数的数量。
#include<stdio.h>
main()
{
	int n,k=2,i=2,t=0;
	printf("请输入n\n");
	scanf("%d",&n); 
	for(i=2;i<=n;i++)
	{
		for(k=2;k<i;k++)
		{
			if(i%k==0)
			break;
		}
		if(k==i)
		t++;
		
	}
	printf("共有%d个 ",t);
}

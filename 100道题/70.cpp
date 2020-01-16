//70.编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数1/1+1/3+...+1/n
#include<stdio.h>
main()
{
	float sum(int n,int m);
	int n;
	float s=0;
	printf("请输入n:\n");
	scanf("%d",&n);
	if(n%2==0)
   		s=sum(n,2);
	else
   		s=sum(n,1);
		printf("和为：%f.\n",s);
}

	float sum(int n,int m)
	{
		int i;
		float sum=0;
		float k=1;
		for(i=m;i<=n;i+=2)
   		sum=sum+k/i;
		return(sum);
	}

//70.��дһ������������nΪż��ʱ�����ú�����1/2+1/4+...+1/n,������nΪ����ʱ�����ú���1/1+1/3+...+1/n
#include<stdio.h>
main()
{
	float sum(int n,int m);
	int n;
	float s=0;
	printf("������n:\n");
	scanf("%d",&n);
	if(n%2==0)
   		s=sum(n,2);
	else
   		s=sum(n,1);
		printf("��Ϊ��%f.\n",s);
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

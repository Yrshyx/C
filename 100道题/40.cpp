//ͳ������С�ڷǸ�����n��������������
#include<stdio.h>
main()
{
	int n,k=2,i=2,t=0;
	printf("������n\n");
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
	printf("����%d�� ",t);
}

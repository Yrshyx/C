//��0��7������ɵ�����������
#include<stdio.h>
main()
{
	int sum=0,i=0,j=0;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			if((i+j)%2!=0)
			{
				sum=sum+1;
			}
		}
	}
	printf("һ���������%d������",sum);
}

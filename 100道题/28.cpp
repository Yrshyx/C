//��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮�͡�
#include<stdio.h>
int main()
{
	int i=0,n=20; 
	float sum=0,s,a=2.0,b=1.0,t;
	while(i<n)
	{
		sum=sum+a/b; 
		t=a;
		a=a+b;
		b=t;
		i++;
	}
	printf("ǰ��ʮ���Ϊ%.2f",sum);
}


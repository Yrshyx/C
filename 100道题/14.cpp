//�ж�101-200֮���ж��ٸ����������������������
#include<stdio.h>
main()
{
	int i=101,n,flag;
	for(i=101;i<=200;i++)
	{ 
		flag=0;
		for(n=2;n<i;n++)
			if(i%n==0)
				flag=1;

		else if(flag==0)
			printf("%d",i);
	}

}
 

#include<stdio.h>
main()
{
	int i,j,a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int *p,**pp;
	pp=&p;
	printf("�ö�ά����ָ������ķ�ʽ�����ά���飺\n");
	for(i=0;i<3;i++)
	{
		p=a[i];
		for(j=0;j<4;j++)
		    printf("%4d",*(*pp+j));
		printf("\n");
	}
	printf("�ö���ָ�����**pp�����ά���飺\n");
	for(i=0;i<3;i++)
	{
		p=a[i];
		for(j=0;j<4;j++,p++)
		    printf("%4d",**pp);
		printf("\n");
	}
}

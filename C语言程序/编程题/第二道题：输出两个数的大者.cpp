#include<stdio.h>
main()
{
	int i,j,*pmax,*pmin,*pt;
	printf("�������������֣�");
	scanf("%d%d",&i,&j);
	pmax=&i;
	pmin=&j;
	if(*pmax<*pmin)
	{
		pt=pmax;
		pmax=pmin;
		pmin=pt;
	}
	printf("�����ֵ��i=%d,j=%d\n",i,j);
	printf("��������ֵΪ��%d",*pmax);
}

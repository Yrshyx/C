#include<stdio.h>
main()
{
	int a[100],n,m;
	printf("������Ԫ�صĸ���:");
	scanf("%d",&n);
	printf("������%d����:",n);
	for(m=0;m<n;m++)
		scanf("%d",&a[m]);
		printf("���������Ϊ:");
	for(m=n-1;m>=0;m--)
		printf("%d ",a[m]);
}

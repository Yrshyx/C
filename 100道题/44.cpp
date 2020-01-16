#include<stdio.h>
main()
{
	int a[100],n,m;
	printf("请输入元素的个数:");
	scanf("%d",&n);
	printf("请输入%d个数:",n);
	for(m=0;m<n;m++)
		scanf("%d",&a[m]);
		printf("按逆序输出为:");
	for(m=n-1;m>=0;m--)
		printf("%d ",a[m]);
}

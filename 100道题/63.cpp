//63.有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数
#include<stdio.h>
#define N 80
int main()
{
	int a[N],b[N],i;
	int n,m;
    printf("请输入n和m:\n");
    scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	printf("请输入数组中的数："); 
	{
		scanf("%d",&a[i]);
	}	
    for(i=0;i<m;i++){
    	b[i]=a[n-m+i];//将最后m个数保存在数组b中
	}
	for(i=n-1;i>=m;i--){
		a[i]=a[i-m];//将n-m个数拉至数组a的尾部
	}
	for(i=0;i<m;i++){
		a[i]=b[i];//将保存在数组b中的最后m个数赋值回数组a的前m个位置
	}
	printf("现在的数组为:\n");
	for(i=0;i<n;i++){
		printf("% d",a[i]);
	}
	return 0;
}

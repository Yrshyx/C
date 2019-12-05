#include<stdio.h>
void hanoi(int n,char a,char b,char c);
long count;
int main()
{
	int h;
	printf("请输入汉诺塔圆盘的数量：");
	scanf("%d",&h);
	count=0;
	hanoi(h,'A','B','C');
	return 0; 
}
void hanoi(int n,char a,char b,char c)
{
	if(n==1)
	{
		printf("第%d次，%c棒-->%c棒\n",++count,a,c);
	}
	else
	{
		hanoi(n-1,a,c,b);
		printf("第%d次，%c棒-->%c棒\n",++count,a,c);
		hanoi(n-1,b,a,c);
	}
}

#include<stdio.h>
int footstep(int n);
int footstep(int n)
{
	if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 2;
    }
    else
    {
        return footstep(n - 1) + footstep(n - 2);
	}
}
main()
{
	int n,m;
	printf("请输入楼梯的阶数：");
	scanf("%d",&n);
	m=footstep(n);
	printf("共有%d种方法",m); 
	
}

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
	printf("������¥�ݵĽ�����");
	scanf("%d",&n);
	m=footstep(n);
	printf("����%d�ַ���",m); 
	
}

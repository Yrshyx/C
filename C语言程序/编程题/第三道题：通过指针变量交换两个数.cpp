#include<stdio.h>
main()
{
	int x,y;
	int i,*p1,*p2;
	printf("�������������֣�");
	scanf("%d%d",&x,&y);
	p1=&x;
	p2=&y; 
	printf("����ǰ��x=%d,y=%d\n",x,y);
	{
		i=*p1;
		*p1=*p2;
		*p2=i;
    } 
    printf("������x=%d,y=%d\n",x,y);
}

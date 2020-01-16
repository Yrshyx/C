#include<stdio.h>
#include<stdlib.h>
typedef struct lian 
{
	int a;
	struct lian *next;
}node,*Pnode;
Pnode create(void); 
int main()
{
	Pnode list=create();
	return 0;
}
Pnode create(void)
{
	int len;
	int a,i;
	
	Pnode Phead=(Pnode)malloc(sizeof(node));
	Phead->next=NULL;
	

	printf("请输入节点数：");
	scanf("%d",&len);
	
	for(i=1;i<=len;i++)
	{
		Pnode Pnew=(Pnode)malloc(sizeof(node));
		printf("请第%d个节点的数据：",i);
		scanf("%d",&Pnew->a);
		
		Pnew->next = Phead->next;
		Phead->next = Pnew;
		
	}
	
	return Phead;
}

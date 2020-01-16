//给定一个链表，删除链表的倒数第n个节点，并且返回链表的头结点。
#include<stdio.h>
#include<stdlib.h>
typedef struct ren
{
	int zhi;
	struct ren *next;
}node,*Pnode;
void del(Pnode list,int a); 
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
		scanf("%d",&Pnew->zhi);
		
		Pnew->next = Phead->next;
		Phead->next = Pnew; 
	}
	
	return Phead;
}
void del(Pnode list,int a)
{
	int b=0;
	Pnode P=list;
	while(P && b<a-1)
	{
		P=P->next;
		++b;
	}
	Pnode now=P->next;
	P->next=now->next;
	free(now);
	now=NULL; 
} 

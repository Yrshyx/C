//����һ������ɾ������ĵ�����n���ڵ㣬���ҷ��������ͷ��㡣
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

	printf("������ڵ�����");
	scanf("%d",&len);
	
	for(i=1;i<=len;i++)
	{
		Pnode Pnew=(Pnode)malloc(sizeof(node));
		printf("���%d���ڵ�����ݣ�",i);
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

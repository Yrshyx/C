#include<stdio.h>
#include<stdlib.h>
typedef struct lianbiao
{
	int m;
	struct lianbiao *next;
}node,*Pnode; 
Pnode create(void);
Pnode lianjie(Pnode list1,Pnode list2);  
int main()
{
	printf("第一个链表为：\n");
	Pnode list1=create();
	printf("第二个链表为：\n");
	Pnode list2=create();
	Pnode list3=lianjie(list1,list2);
	list3 = list3->next;
	while(list3!=NULL){
		printf("%d",list3->m);
		list3 = list3->next;
	}
	return 0;
}
Pnode create(void)
{
	int len;
	int a,i;
	
	Pnode Phead=(Pnode)malloc(sizeof(node));
	Phead->next=NULL;
	Pnode Ptail=Phead;

	printf("请输入节点数：");
	scanf("%d",&len);
	
	for(i=0;i<len;i++)
	{
		Pnode Pnew=(Pnode)malloc(sizeof(node));
		printf("请第输入第%d个节点的数据：",i+1);
		scanf("%d",&Pnew->m);
		
		Ptail->next=Pnew;
		Ptail=Pnew;
	}
	
	Ptail->next = NULL;
	return Phead;
}
Pnode lianjie(Pnode list1,Pnode list2)
{
	Pnode P1=list1->next;
	Pnode P2=list2->next;
	while(P1->next!=NULL)
	{
		P1=P1->next;
	}
	P1->next=P2;
	return list1;
}






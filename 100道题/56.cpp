#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i= 0;
	printf("�������ַ���\n");
	gets(a); 
	while(a[i] != '\0')
	{ 
		i++;
	} 
	printf("��������ַ����ĳ���Ϊ%d\n",i);
}

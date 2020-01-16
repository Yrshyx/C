#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i= 0;
	printf("请输入字符串\n");
	gets(a); 
	while(a[i] != '\0')
	{ 
		i++;
	} 
	printf("你输入的字符串的长度为%d\n",i);
}

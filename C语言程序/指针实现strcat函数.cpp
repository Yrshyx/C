#include<stdio.h>
#include<string.h>
main()
{
	char str1[30],str2[30],*p1,*p2;
	p1=str1;
	p2=str2;
	gets(str1);
	gets(str2);
	printf("原有的两个字符串为：\n");
	puts(str1);
	puts(str2);
	while(*p1!='\0')
	 ++p1;
	while(*p2!='\0')
	 *p1++=*p2++;
	printf("连接后的新字符串为：\n");
	puts(str1);
	
	
	
 } 

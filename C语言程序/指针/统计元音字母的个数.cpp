#include<stdio.h>
#include<string.h>
main()
{
	char str[30],*p;
	int num[5]={0};
	int i;
	printf("请输入一个字符串：\n");
	gets(str);
	p=str;
	while(*p!='\0')
	{
		i=-1;
		switch(*p)
		{
			case 'a': 
			case 'A':i=0;break;
			case 'e':
			case 'E':i=1;break;
			case 'i':
			case 'I':i=2;break;
			case 'o':
			case 'O':i=3;break;
			case 'u':
			case 'U':i=4;break;
		}		
		 num[i]++;
		p++;
	}
	printf("元音字符的个数分别是：\n");
	for(i=0;i<5;i++)
	    printf("%4d",num[i]);
				
	
	
 } 

#include<string.h> 
#include<stdio.h>
main()
{
	char str1[20],str2[20],*p1,*p2;
	int cnt=0;
	printf("请输入两个字符串:"); 
	scanf("%s%s",str1,str2);
	p1=str1;
	p2=str2;
	while(*p1!='\0')
	{
		if(*p1==*p2)
		{
			while(*p1==*p2&&*p2!='\0')
			{
				p1++;
				p2++;
			}
		}
		else
		   p1++;
		if(*p2=='\0')
		   cnt++;
		   p2=str2;
		
	}
	
	printf("字符串%s在字符串%s中出现的次数为：%d",str1,str2,cnt);
	
	
 } 

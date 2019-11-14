#include<stdio.h>
main()
{
	int i=0,j,t,m,n,w;
	char s[20];
	printf("请输入一串字符：");
	gets(s);
	while(s[i]!='\0')
	{
		if(s[i]==' ')
			j++;
		else if(s[i]<='9'&&s[i]>='0')
			w++;
		else if(s[i]<='z'&&s[i]>='a'||s[i]<='Z'&&s[i]>='A')
			t++; 
		else
			m++;
		i++;		
	}
	printf("英文字符个数%d",t);
	printf("空格个数%d",j);
	printf("数字个数%d",w);
	printf("其他个数%d",m);
	
	
}

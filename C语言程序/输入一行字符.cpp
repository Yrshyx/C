#include<stdio.h>
main()
{
	int i=0,j,t,m,n,w;
	char s[20];
	printf("������һ���ַ���");
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
	printf("Ӣ���ַ�����%d",t);
	printf("�ո����%d",j);
	printf("���ָ���%d",w);
	printf("��������%d",m);
	
	
}

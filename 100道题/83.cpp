#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *fp;
	char ch, filename[10];
	printf("�����ļ�����\n");
	scanf("%s", filename);
	
	if ((fp = fopen("E:/filename.txt", "w")) == NULL)
	{
		printf("���ļ�ʧ��\n");
		exit(0);
	}
	ch = getchar();
	printf("������һ��׼���洢�����̵��ַ� ��#�Ž���\n");
	ch = getchar(); 
	while (ch != '#')
	{
		fputc(ch, fp);
		putchar(ch);
		ch = getchar(); 
	}
	fclose(fp);
	putchar(10);
	system("pause");
	
}


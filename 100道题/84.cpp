#include<stdio.h>
#include<stdlib.h>
main() 
{
	FILE* fp;
	char ch;
	char filename[20];
	printf("��������Ҫ�������ļ���\n");
	scanf("%s", filename);
	if ((fp = fopen("E:/filename.txt", "w")) == NULL) 
	{
		printf("�޷��򿪴��ļ�\n");
		exit(0);
	}

	ch = getchar();
	printf("������һ���ַ���:\n");
	while (1) {
		ch = getchar();
		if (ch == '!') 
		{
			break;
		}
		if (ch > 96 && ch < 123) {
			ch = ch - 32;
		}
		fputc(ch, fp);
	}
		fclose(fp);
		printf("�ر��ļ�\n");
		system("pause");
}


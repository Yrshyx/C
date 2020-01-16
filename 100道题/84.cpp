#include<stdio.h>
#include<stdlib.h>
main() 
{
	FILE* fp;
	char ch;
	char filename[20];
	printf("请输入需要创建的文件名\n");
	scanf("%s", filename);
	if ((fp = fopen("E:/filename.txt", "w")) == NULL) 
	{
		printf("无法打开此文件\n");
		exit(0);
	}

	ch = getchar();
	printf("请输入一个字符串:\n");
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
		printf("关闭文件\n");
		system("pause");
}


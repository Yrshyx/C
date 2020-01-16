#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *fp;
	char ch, filename[10];
	printf("输入文件名：\n");
	scanf("%s", filename);
	
	if ((fp = fopen("E:/filename.txt", "w")) == NULL)
	{
		printf("打开文件失败\n");
		exit(0);
	}
	ch = getchar();
	printf("请输入一个准备存储到磁盘的字符 以#号结束\n");
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


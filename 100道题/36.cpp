#include <stdio.h>

int main()
{
	char a=0,b=0;
	printf("���������ڵ�����ĸ��");
	scanf("%s",&a);
  		if (a=='S'||a=='s')
  		{
  			printf("������ڶ�����ĸ");
   			scanf("%s",&b);
   			if (b=='a'||b=='A')
   			{
   				printf("\n������\n");
   			}else if (b=='u'||b=='U')
   			{
    			printf("\n������\n");
   			}else
   			{
    			printf("�޴�����!");
   			}
  			}else if (a=='m'||a=='M')
  			{
  				printf("\r\n����һ\r\n");
  			}else if (a=='t'||a=='T')
  			{
   				printf("������ڶ�����ĸ");
   				scanf("%s",&b);
  				if (b=='h'||b=='H')
   			{
    			printf("\r\n������\r\n");
   			}else if (b=='u'||b=='U')
   			{
    			printf("\r\n���ڶ�\r\n");
   			}else
   			{
    			printf("�޴�����!");
   			}
  			}else if (a=='w'||a=='W')
  			{
   				printf("\r\n������\r\n");
  			}else if (a=='f'||a=='F')
  			{
   				printf("\r\n������\r\n");
  			}else
  			{
   				printf("\r\nError input!\r\n");
  			}
  				
 			
 			return 0;
}

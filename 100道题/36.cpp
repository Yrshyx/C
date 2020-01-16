#include <stdio.h>

int main()
{
	char a=0,b=0;
	printf("请输入星期的首字母：");
	scanf("%s",&a);
  		if (a=='S'||a=='s')
  		{
  			printf("请输入第二个字母");
   			scanf("%s",&b);
   			if (b=='a'||b=='A')
   			{
   				printf("\n星期六\n");
   			}else if (b=='u'||b=='U')
   			{
    			printf("\n星期日\n");
   			}else
   			{
    			printf("无此星期!");
   			}
  			}else if (a=='m'||a=='M')
  			{
  				printf("\r\n星期一\r\n");
  			}else if (a=='t'||a=='T')
  			{
   				printf("请输入第二个字母");
   				scanf("%s",&b);
  				if (b=='h'||b=='H')
   			{
    			printf("\r\n星期四\r\n");
   			}else if (b=='u'||b=='U')
   			{
    			printf("\r\n星期二\r\n");
   			}else
   			{
    			printf("无此星期!");
   			}
  			}else if (a=='w'||a=='W')
  			{
   				printf("\r\n星期三\r\n");
  			}else if (a=='f'||a=='F')
  			{
   				printf("\r\n星期五\r\n");
  			}else
  			{
   				printf("\r\nError input!\r\n");
  			}
  				
 			
 			return 0;
}

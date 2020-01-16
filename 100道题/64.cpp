#include<stdio.h> 
main()
{
	int i = 0;
	int n = 0;
	int out = 0; 
	int num = 0; 
	int a[1024] = {0}; 

	printf("请输入人数:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
 	{
  		a[i] = 1;
 	}
	i = 0;
	while (out != n-1)
 	{
  		if (a[i] == 1)
  		{
   			num++;
  		}
  		if (num == 3)
  		{
   			a[i] = 0;
   			num = 0;
   			out++;
  		}
  		i++;
  		if (i == n)
  		{
   			i = 0;
  		}
 }

 	for (i = 0; i < n; i++)
 	{
  		if (a[i] == 1)
  		{
   			printf("最后留下的人是%d号.\n", i+1);
   			break;
  		}
 	}
}//不会 

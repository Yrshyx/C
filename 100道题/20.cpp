//20.写一个程序，输出从 1 到 n 数字的字符串表示。
//1. 如果 n 是3的倍数，输出“Fizz”；
//2. 如果 n 是5的倍数，输出“Buzz”；
//3.如果 n 同时是3和5的倍数，输出 “FizzBuzz”。
#include<stdio.h>
main()
{
	int n,i;
	printf("请输入一个数：\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
     	if (i%3==0 and i%5!=0)
        	printf("Fizz\n");
     	if (i%3!=0 and i%5==0)
          	printf("Buzz\n");
     	if (i%3==0 and i%5==0)
          	printf("FizzBuzz\n");
     	if (i%3!=0 and i%5!=0)
          	printf("%d\n",i);
    } 
 } 

//20.дһ����������� 1 �� n ���ֵ��ַ�����ʾ��
//1. ��� n ��3�ı����������Fizz����
//2. ��� n ��5�ı����������Buzz����
//3.��� n ͬʱ��3��5�ı�������� ��FizzBuzz����
#include<stdio.h>
main()
{
	int n,i;
	printf("������һ������\n");
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

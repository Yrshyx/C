#include<stdio.h>
main()
{
	int year,month,day,i,sum;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("请输入年月日："); 
	scanf("%d.%d.%d",&year,&month,&day);
	sum=0;
	  if(year%4==0&year%100!=0||year%400==0)
	     a[1]=29;
	for(i=0;i<=month-2;i++)
	{
		sum+=a[i];
    }
	sum+=day;
	printf("第%d天\n",sum);

	
}

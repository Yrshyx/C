//41.题目：对10个数进行排序。
#include<stdio.h>
main()
{
	int a[10],i,j,t;
	printf("请输入10个数字：");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	  for(i=0;i<9;i++)
	  {
	     for(j=0;j<9-i;j++)
		{
           if(a[j]>a[j+1])
		   {
		   	  t=a[j];
		   	  a[j]=a[j+1];
			  a[j+1]=t; 
		   	 
		   }		 	
		} 	
	  } 
	  for(i=0;i<10;i++)
	  printf("%d\n",a[i]);
}

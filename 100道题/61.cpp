#include<stdio.h>
main()
{
	int a[5],i,j,t;
	printf("ÇëÊäÈë3¸öÊı×Ö£º");
	for(i=0;i<3;i++)
	scanf("%d",&a[i]);
	  for(i=0;i<2;i++)
	  {
	     for(j=0;j<2-i;j++)
		{
           if(a[j]>a[j+1])
		   {
		   	  t=a[j];
		   	  a[j]=a[j+1];
			  a[j+1]=t; 
		   	 
		   }		 	
		} 	
	  } 
	  for(i=0;i<3;i++)
	  printf("%d\n",a[i]);
}


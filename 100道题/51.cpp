#include<stdio.h>
main()
{
	int a[100],i,j,t,n;
	printf("����Ƚϼ������֣�\n");
	scanf("%d",&n);
	printf("������%d������",n); 
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	  for(i=0;i<n-1;i++)
	  {
	     for(j=0;j<n-1-i;j++)
		{
           if(a[j]>a[j+1])
		   {
		   	  t=a[j];
		   	  a[j]=a[j+1];
			  a[j+1]=t; 
		   	 
		   }		 	
		} 	
	  } 
	  for(i=0;i<n;i++)
	  printf("%d\n",a[i]);
}

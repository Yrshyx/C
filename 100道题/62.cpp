#include<stdio.h>
main()
{
	int i,j,k,f[10],max,min,a,b;
	printf("ÇëÊäÈë10¸öÊı"); 
	for(i=0;i<10;i++)
 		scanf("%d",&f[i]);
		a=b=0;
 		max=min=f[0];
	for(j=1;j<10;j++)
	{
		if(f[j]>max)
 		{	max=f[j];
  			a=j;
		}
		if(f[j]<min) 
		{	min=f[j];
  			b=j;
		}
	}
	k=f[0];
	f[0]=f[b];
	f[b]=k;
	if(f[9]!=max)    
	{
		k=f[9];
		f[9]=f[a];
		f[a]=k;
	}
	for(k=0;k<10;k++)
 		printf("%d ",f[k]);
}

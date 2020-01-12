#include<stdio.h>
main()
{
	int i,j,t,count=0;
	for(i=1;i<=4;i++){
		for(j=1;j<=4;j++){
			for(t=1;t<=4;t++){
				if(i!=j&&j!=t&&i!=t)
					count+=1;
					printf("%d\t",i*100+j*10+t);}}}
	printf("\n共有%d种三位数\n",count);
	
	
} 

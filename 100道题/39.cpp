#include<stdio.h>
main()
{
	int i,flag=0,j;
	for(i=1;i<=100;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				flag=1;
			}
		}
	}if(flag==0)
	printf("%d",i); 
}

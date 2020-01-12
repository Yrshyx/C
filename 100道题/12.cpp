#include<stdio.h>
main()
{ 
	int n;
	scanf("%d",&n);
	if(n<=0)
        printf("不是"); 
    if(n==1)
        printf("是"); 
    while(n>1)
    {
        if(n%3!=0)
        	printf("不是"); 
        n=n/3;
    }
    printf("是");
}

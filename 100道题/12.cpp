#include<stdio.h>
main()
{ 
	int n;
	scanf("%d",&n);
	if(n<=0)
        printf("����"); 
    if(n==1)
        printf("��"); 
    while(n>1)
    {
        if(n%3!=0)
        	printf("����"); 
        n=n/3;
    }
    printf("��");
}

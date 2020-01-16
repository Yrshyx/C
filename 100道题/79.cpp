#include<stdio.h> 
int main()
{
	int i,j,n;
	for(i=1;i<=7;i++)
	{
		scanf("%d",&n);
		if(n>=1&&n<=50)
   			for(j=1;j<=n;j++)
	  			printf("*");
		printf("\n");
	}
		return 0;
}


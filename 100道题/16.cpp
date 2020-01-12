#include<stdio.h> 
main()
{
  int n,i;
  printf("\n输入一个数:\n");
  scanf("%d",&n);
  printf("%d=",n);
  for(i=2;i<=n;i++)
    while(n!=i)
    {
      if(n%i==0)
      {
        printf("%d*",i);
        n=n/i;
      }
      if(n%i!=0)
        break;
    }
  printf("%d",n);
}


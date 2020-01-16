#include <stdio.h>
main()
{
    int i, j, k, n=0, a[14][14];  
    while(n<=0||n>=13)
	{  
        printf("请输入要打印的行数：");
        scanf("%d",&n);
    }
    printf("%d行杨辉三角如下：\n",n);
    for(i=1;i<=n;i++)
        a[i][1] = a[i][i] = 1; 
    for(i=3;i<=n;i++)
        for(j=2;j<=i-1;j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];  
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++)
            printf("  ");  
        for(j=1;j<=i;j++)  
            printf("%6d",a[i][j]);
        
        printf("\n");  
    printf("\n");
}

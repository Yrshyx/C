#include <stdio.h>
 
int main()
{
    int r, c, a[2][2], b[2][2], sum[2][2], i, j;
    printf("\n输入第一维数组的元素:\n");
 	for(i=0; i<3; i++)
        for(j=0; j<3; j++)
        {
            printf("输入元素a[%d][%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
 	printf("输入第二维数组的元素:\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
        {
            printf("输入元素b[%d][%d]: ",i+1, j+1);
            scanf("%d", &b[i][j]);
        }
 
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    printf("\n二维数组相加结果: \n\n");
 
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
 
            printf("%d",sum[i][j]);
 
            if(j==2)
            {
                printf("\n\n");
            }
        }
    
    return 0;
}

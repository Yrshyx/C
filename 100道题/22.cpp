//求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
//例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加由键盘控制。
#include <stdio.h>
int main()

{

	int i,j,a,n,sum=0,term=0;
	printf("请输入底数");
	scanf("%d",&a);
	printf("请输入相加次数");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		term=term*10+a;
		sum=sum+term;
	}
	printf("和为%d",sum);
	return 0;

} 

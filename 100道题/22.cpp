//��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�
//����2+22+222+2222+22222(��ʱ����5�������)������������ɼ��̿��ơ�
#include <stdio.h>
int main()

{

	int i,j,a,n,sum=0,term=0;
	printf("���������");
	scanf("%d",&a);
	printf("��������Ӵ���");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		term=term*10+a;
		sum=sum+term;
	}
	printf("��Ϊ%d",sum);
	return 0;

} 

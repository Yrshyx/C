//63.��n��������ʹ��ǰ�����˳�������m��λ�ã����m���������ǰ���m����
#include<stdio.h>
#define N 80
int main()
{
	int a[N],b[N],i;
	int n,m;
    printf("������n��m:\n");
    scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	printf("�����������е�����"); 
	{
		scanf("%d",&a[i]);
	}	
    for(i=0;i<m;i++){
    	b[i]=a[n-m+i];//�����m��������������b��
	}
	for(i=n-1;i>=m;i--){
		a[i]=a[i-m];//��n-m������������a��β��
	}
	for(i=0;i<m;i++){
		a[i]=b[i];//������������b�е����m������ֵ������a��ǰm��λ��
	}
	printf("���ڵ�����Ϊ:\n");
	for(i=0;i<n;i++){
		printf("% d",a[i]);
	}
	return 0;
}

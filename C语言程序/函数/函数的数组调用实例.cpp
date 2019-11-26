#include<stdio.h>
#define M 10
void sort(int a[],int n);
int main()
{
	int i,arr[M]={3,22,11,45,23,67,54,90,39,55};
	for(i=0;i<M;i++)
	printf("%d\t",arr[i]);
	printf("\n");
	sort(arr,M);
	for(i=0;i<M;i++)
	printf("%d\t",arr[i]);
	printf("\n");
	return 0;
}
void sort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=i;j<n;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
			 
		}
	  
}

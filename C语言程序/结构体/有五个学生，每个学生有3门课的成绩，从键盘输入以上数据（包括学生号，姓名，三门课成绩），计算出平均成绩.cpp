#include<stdio.h>
typedef struct
{
	int ID;
	float math;
	float english;
	float chinese;
	float aver;
	char name[20];
}Stu;
int main()
{
	int i; 
	float all,allaver;
	Stu stu[5];
	float aver=0;
	printf("������5��ͬѧ����Ϣ��ѧ���ţ�������3�ųɼ�:\n");
	for(i=0;i<5;i++)
    {
        scanf("%d %s %f %f %f",&(stu[i].ID),stu[i].name,&(stu[i].math),&(stu[i].english),&(stu[i].chinese));
        stu[i].aver=(stu[i].math+stu[i].english+stu[i].chinese)/3;
        all+=stu[i].aver; 
	}
	allaver=all/5;
	for(i=0;i<5;i++)
        printf("��%d��ͬѧ��ƽ���ɼ�Ϊ%f\n��",i,stu[i].aver);
        printf("��ƽ���ɼ�Ϊ%f\n",allaver);
}

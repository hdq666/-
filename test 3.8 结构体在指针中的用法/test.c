#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

typedef struct stu
{
	char name[20];
	short age;
	char tele[12];
}stu;
void print1(stu tmp)
{
	printf("%s\n", tmp.name);
	printf("%d\n", tmp.age);
	printf("%s\n", tmp.tele);
	printf("\n");
}
void print2(stu* p)
{
	printf("%s\n", p->name);//ָ��ָ��...
	printf("%d\n", p->age);//������ -> ��ר������ָ���
	printf("%s\n", p->tele);
}
int main()
{
	stu a = {"����",20,"12345678912"};
	print1(a);//���ֻḴ��һ��stu�����Ի��ռ��һЩ�ڴ�
	print2(&a);//�������ַ������һЩ����Ϊ������õ�ַ�������ö���Ŀռ��ʱ��
	return 0;
}
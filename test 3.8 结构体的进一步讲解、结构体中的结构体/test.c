#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

/*struct stu//struct--�ṹ�����ͣ�����Ҳ�ǽṹ��
{
	char name[20];
	int age;
	char tele[12];
};//s1,s2,s3����������ȫ�ֱ���������ʹ�ã�����������ȫ�ֱ���
int main()
{
	struct stu a;//�����ṹ���������ھֲ�����
	return 0;
}*/
//struct stu�൱��int ,a�൱��int����ı���a

/*typedef struct stu//typedef�������ǰ�������������������
{
	char name[20];
	int age;
	char tele[12];
}stu;//���stu�������������
int main()
{
	stu a1 = {"����",20,"123456789123"};//����Ϳ���ֱ������stu
	struct stu a2 = {"����",21,"123456789123"};//��typedefҲ��������struct
	return 0;
}*/


struct s
{
	int a;
	char b;
	char arr[20];
	double c;
};
struct t
{
	char ch[10];
	struct s s;
	char* pc;
};
int main()
{
	char arr[20] = "hello world";
	struct t a = { "hehe",{100,'h',"hello world",3.14},arr };
	printf("%s\n", a.ch);
	printf("%s\n", a.s.arr);
	printf("%lf\n", a.s.c);
	printf("%s\n", a.pc);
	return 0;
}
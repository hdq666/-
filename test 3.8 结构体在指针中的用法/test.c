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
	printf("%s\n", p->name);//指针指向...
	printf("%d\n", p->age);//操作符 -> 是专门用于指针的
	printf("%s\n", p->tele);
}
int main()
{
	stu a = {"张三",20,"12345678912"};
	print1(a);//这种会复制一份stu，所以会多占用一些内存
	print2(&a);//采用这种方法会好一些，因为这个自用地址，不会用多余的空间和时间
	return 0;
}
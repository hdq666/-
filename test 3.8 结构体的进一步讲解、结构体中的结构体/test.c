#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

/*struct stu//struct--结构体类型，翻译也是结构体
{
	char name[20];
	int age;
	char tele[12];
};//s1,s2,s3这三个属于全局变量，可以使用，但尽量少用全局变量
int main()
{
	struct stu a;//创建结构变量，属于局部变量
	return 0;
}*/
//struct stu相当于int ,a相当于int后面的变量a

/*typedef struct stu//typedef的作用是把这个类型重新起个名字
{
	char name[20];
	int age;
	char tele[12];
}stu;//这个stu就是新起的名字
int main()
{
	stu a1 = {"张三",20,"123456789123"};//这里就可以直接引用stu
	struct stu a2 = {"李四",21,"123456789123"};//用typedef也可以用上struct
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
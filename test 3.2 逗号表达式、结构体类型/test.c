#include<stdio.h>

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式：从左到右计算，直到最后，返回最后得到的数
//	printf("%d ", c);
//}
//
///*if (a = b + 1, c = a / 2, d > 0)*/

//创建一个结构体类型：struct stu
struct stu//struct是类型的一种，用于描述（结构体）
{
	char name[20];
	int age;
	char id[20];
};//这里要用（;）
int main()
{
	struct stu s1 = { "张三",21,"20210302" };//使用struct stu这个类型创建了一个学生对象：s1，并初始化
	//printf("%s\n", s1.name);//%s是打印字符串//结构体变量.成员名
	//printf("%d\n", s1.age);
	//printf("%s\n", s1.id);//要用s1.

	struct stu* ps = &s1;//指针
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%s\n", ps->id);
	//结构体指针->成员名
	return 0;
}
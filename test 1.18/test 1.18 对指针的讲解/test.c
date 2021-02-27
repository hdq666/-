#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()//指针的用法
{
	int a = 10;
	int* p = &a;//	p是一个变量--指针变量	&是取地址符号
	printf("%p\n", p);//这一步是查看a的地址
	*p = 20;
	printf("%d\n", a);
	return 0;
}
//*解引用操作符/间接访问操作符

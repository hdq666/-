#include<stdio.h>

int add(int x, int y);//这里是声明，这里要用;号

int main()
{
	int a = 10;
	int b = 20;
	int c=add(a, b);//这里是函数调用
	printf("%d\n", c);
	return 0;
}

int add(int x, int y)//这里是函数定义
{
	int z = x + y;
	return z;
}
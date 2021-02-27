#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int MAX(int x, int y)//这里是自定义的函数 -- MAX函数
{
	if (x > y)
		return x;//x始终小于y，所以这一部会循环，不能往下走
	else
		return y;
}

int main()
{
	int num1 = 100;
	int num2 = 200;
	int max = 0;
	max = MAX(num1, num2);//这里需要自定义一个函数
	printf("%d\n", max);
	return 0;
}
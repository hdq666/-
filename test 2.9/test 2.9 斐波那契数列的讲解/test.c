#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//教程在课程的p14 11.的38分左右
int d = 0;
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;//如果没有n--，就会一直循环下去，一直计算到n<=2
		d++;//这里是计算数列中计算的次数
	}
	return c;
}

int main()
{
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d\n", ret);
	printf("%d\n", d);
	return 0;
}

/*int a = 0;
int fib(int n)//用递归的方法计算太慢，太复杂，他计算的次数是2^n(2的n次方)
{
	if (n == 3)
	{
		a++;//这里是计算数列计算的次数
	}
	if (n <= 2)
		return 1;//这是数列中的前两个数
	else
		return fib(n - 1) + fib(n - 2);//这是数列的公式
}

int main()
{
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	ret = fib(n);
	printf("ret=%d\n", ret);
	printf("a=%d\n", a);
	return 0;
}*/

//斐波那契数列：前两个数等于第三个数
// 1 1 2 3 5 8 13 21 34......

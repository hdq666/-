#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	while (a % b)//%求出来的时余数
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}
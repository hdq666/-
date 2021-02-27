#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		i = a;
		a = b;
		b = i;
	}
	else if (a < c)
	{
		i = a;
		a = c;
		c = i;
	}
	else if (b < c)
	{
		i = b;
		b = c;
		c = i;

	}
	printf("%d %d %d\n", a, b, c);
}
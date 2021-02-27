#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b = 0;
	while (b < 10)
	{
		printf("%d ", a[b]);
		b++;
	}
	return 0;
}
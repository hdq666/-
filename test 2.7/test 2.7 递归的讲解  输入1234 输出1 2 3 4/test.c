#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n%10);
}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}

//这题的讲解在P13 10函数和递归的44分左右
//这里要看视频才能完全明白
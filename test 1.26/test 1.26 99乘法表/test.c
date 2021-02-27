#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	for (a = 1; a < 9; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%-2d ", a, b, a * b);//%-2d中的2是%d要占两个位置，正数表示右标齐，负数表示左标齐
		}
		printf("\n");
	}
	return 0;
}
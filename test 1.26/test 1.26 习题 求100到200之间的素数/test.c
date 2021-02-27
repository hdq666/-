#include<stdio.h>

int main()
{
	int a = 0;
	int c = 0;
	for (a = 100; a <= 200; a++)
	{
		int b = 0;
		for (b = 2; b < a; b++)
		{
			if (a % b == 0)
			{
				break;
			}
		}
		if (a == b)
		{
			printf("%d ", a);
			c++;
			printf("%d\n", c);
		}
	}
	return 0;
}
//求100~200之间的素数
//只能把1和自身整除的数称为素数
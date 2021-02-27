#include<stdio.h>

int main()
{
	int a = 0;
	for (a = 1; a <= 100; a++)//%与/不同，%要保留余数，
	{
		if (a % 3 == 0)//这里的余数要等于0才是真
			printf("%d ", a);
	}
	return 0;
}
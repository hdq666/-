#include<stdio.h>

int is_prime(int n)
{
	int b = 0;
	for (b = 2; b < n; b++)
	{
		if (n % b == 0)
		{
			return 0;
		}
	}//下一步的if可以省略
	if (n == b)
	{
		return 1;//要return 1，不要return n;
	}

}

int main()
{
	int a = 0;
	for (a = 100; a <= 200; a++)
	{
		if (is_prime(a) == 1)
			printf("%d\n", a);
	}
	return 0;
}
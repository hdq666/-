#include<stdio.h>
#include<math.h>//数学的源文件--sqrt

int main()
{
	int a = 0;
	int c = 0;
	for (a = 100; a <= 200; a++)
	{
		int b = 0;
		for (b = 2; b < sqrt(a); b++)
		{
			if (a % b == 0)
			{
				break;
			}
		}
		if (b > sqrt(a))//sqrt--开平方，sqrt(a)--a的开平方
		{
			printf("%d ", a);
			c++;
		}
	}
	printf("\n%d\n", c);
	return 0;
}

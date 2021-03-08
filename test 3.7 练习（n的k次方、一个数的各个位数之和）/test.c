#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


/*int digitsum(int num)//求一个数上的各个位数之和
{
	if (num > 9)
	{
		return digitsum(num / 10) + num % 10;
	}
	else
	{
		return num;
	}
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	int ret = digitsum(num);
	printf("%d\n", ret);
	return 0;
}
//教程在视频的p26  22.  98分左右*/


double abc(int n, int k)//这一步要把数代进去才容易明白
{
	if (k < 0)
	{
		return (1.0 / (abc(n, -k)));//这一步会有小数，所以要注意用浮点型的类型
	}
	else if (n == 0)
	{
		return 0;
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return n * abc(n, k - 1);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = abc(n, k);
	printf("%lf\n", ret);
	return 0;
}
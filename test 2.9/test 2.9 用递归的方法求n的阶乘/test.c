#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int fac1(int n)
{
	int i = 0;
	int b = 1;
	for (i = 1; i <= n; i++)
	{
		b = b * i;//�����õ���1*2*3*...*n�ķ���
	}
	return b;
}


int main()
{
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	ret = fac1(n);
	printf("%d\n", ret);

	return 0;
}


//����ʱ�򻯵ķ���
/*int fac2(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * fac2(n - 1);//�����õ���n*(n-1)�ķ���
	}
}*/


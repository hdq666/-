#include<stdio.h>

/*int is_prime(int n)
{
	if (n % 4 == 0 && n % 100 != 0)
	{
		return 1;//��Ϊ����ķ���ֵΪ1�����������ifҪ==1
	}
	if (n % 400 == 0)
	{
		return 1;
	}
}

int main()
{
	int a = 0;
	for (a = 1000; a <= 2000; a++)
	{
		if ((is_prime(a)) == 1)
		{
			printf("%d ", a);
		}
	}
	return 0;
}*/

//��������ʦ������

int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if ((is_leap_year(year)) == 1)
		{
			printf("%d ", year);
		}
	}
}
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


/*int digitsum(int num)//��һ�����ϵĸ���λ��֮��
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
//�̳�����Ƶ��p26  22.  98������*/


double abc(int n, int k)//��һ��Ҫ��������ȥ����������
{
	if (k < 0)
	{
		return (1.0 / (abc(n, -k)));//��һ������С��������Ҫע���ø����͵�����
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
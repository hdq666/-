#include<stdio.h>

int main()
{
	int a = 0;
	for (a = 1; a <= 100; a++)//%��/��ͬ��%Ҫ����������
	{
		if (a % 3 == 0)//���������Ҫ����0������
			printf("%d ", a);
	}
	return 0;
}
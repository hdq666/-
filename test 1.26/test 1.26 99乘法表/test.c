#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	for (a = 1; a < 9; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%-2d ", a, b, a * b);//%-2d�е�2��%dҪռ����λ�ã�������ʾ�ұ��룬������ʾ�����
		}
		printf("\n");
	}
	return 0;
}
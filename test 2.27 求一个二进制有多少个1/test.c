#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num = 0;
	int i = 0;
	scanf("%d", &num);
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((num >> i)&1)==1)
		{
			count++;
		}
	}
	printf("%d ", count);
	return 0;
}
//�ؼ�00000000000000000000000000000111 & 00000000000000000000000000000001 = 00000000000000000000000000000001
//��������Ƶ��P21  70������
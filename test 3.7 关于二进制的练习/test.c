#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int count_bit_one(unsigned int n)//unsigned���԰�����Ϊ�޷����������Ը������������Ҳû����
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("%d\n", count);
//	return 0;
//}
//��һ�����������ж��ٸ�1���ڶ���������

//int count_bit_one(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);//��һ���ǹؼ�
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("%d\n", count);
//	return 0;
//}
//�ڶ��ַ���������Ƶ��p26 22.   27������

//int count_dif_bit(int a, int b)
//{
//	int c = a ^ b;
//	int count = 0;
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int count = count_dif_bit(a, b);
//	printf("%d\n", count);
//	return 0;
//}//�������������ж��ٸ���ͬλ����


void print(int a)
{
	int i = 0;
	printf("����λ��");
	for (i = 30; i >=0; i -= 2)
	{
		printf("%d ", (a >> i) & 1);
	}
	printf("\n");
	printf("ż��λ��");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (a >> i) & 1);
	}
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	print(a);
	return 0;
}
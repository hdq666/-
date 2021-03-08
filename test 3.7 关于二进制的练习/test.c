#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int count_bit_one(unsigned int n)//unsigned可以把数变为无符号数，所以负数在这个代码也没问题
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
//求一个二进制中有多少个1（第二种做法）

//int count_bit_one(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);//这一步是关键
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
//第二种方法，在视频的p26 22.   27分左右

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
//}//求两个二进制有多少个不同位的数


void print(int a)
{
	int i = 0;
	printf("奇数位：");
	for (i = 30; i >=0; i -= 2)
	{
		printf("%d ", (a >> i) & 1);
	}
	printf("\n");
	printf("偶数位：");
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
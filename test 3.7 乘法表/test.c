#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*p = *(p + i);
//		printf("%d ", *p);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof arr / sizeof arr[0];
//	print(arr, sz);
//	return 0;
//}

void print_table(int n)
{
	int x = 0;
	for (x = 1; x <= n; x++)
	{
		int y = 0;
		for (y = 1; y <= x; y++)
		{
			printf("%d*%d=%d ", x, y, x * y);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);
	return 0;
}
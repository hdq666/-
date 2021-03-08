#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);//这取的是首元素的地址
//	printf("%p\n", arr+1);//+4
//	printf("%p\n", &arr[0]);//这取的是首元素的地址
//	printf("%p\n", &arr[0]+1);//+4
//	printf("%p\n", &arr);//这取的是数组名（整个数组）的地址
//	printf("%p\n", &arr+1);//+40,这加了整个数组
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int* p = &arr;
	for (i = 0; i < 10; i++)
	{
		printf("%p=====%p\n", p + i, &arr[i]);//可以得出可以用指针的形式求数组
	}
}
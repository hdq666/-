#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i+1;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void ex_print(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int ex = 0;
//	int i = 0;
//	while (left < right)
//	{
//		ex = arr[left];
//		arr[left] = arr[right];
//		arr[right] = ex;
//		left++;
//		right--;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof arr / sizeof arr[0];
//	init(arr, sz);
//	print(arr, sz);
//	ex_print(arr, sz);
//}
//一个数组内部调换顺序



void ex_arr(int arr1[], int arr2[], int sz)
{
	int ex = 0;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		ex = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = ex;
		
	}
	printf("arr1=");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("arr2=");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
	
}
int main()
{
	int arr1[] = { 1,2,3,4 };
	int arr2[] = { 5,6,7,8 };
	int sz = sizeof arr1 / sizeof arr1[0];
	ex_arr(arr1, arr2, sz);
	return 0;
}
//两个数组里的元素调换
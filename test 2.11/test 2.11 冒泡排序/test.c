#include<stdio.h>

void bubble_sort(int arr[], int sz)//数组传递的是首元素的地址，所以不能只int arr[]
{
	int a = 0;
	for (a = 0; a < sz - 1; a++)//这里是确定趟数
	{
		int b = 0;
		for (b = 0; b < sz - 1 - a; b++)//这是每一趟的冒泡排序
		{
			if (arr[b] > arr[b + 1])//这是把两个数互换
			{
				int c = arr[b];
				arr[b] = arr[b + 1];
				arr[b + 1] = c;
			}
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)//这一步不太明白
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//教程在视频的p16 13.的8分左右
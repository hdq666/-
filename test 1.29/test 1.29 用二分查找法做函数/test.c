#include<stdio.h>

/*int binary_search(int arr[], int k,int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid]<k)
		{
			left=mid+1;
		}
		else if(arr[mid]>k)
		{
			right=mid-1;
		}
		else
		{
		return mid;
		}
		return -1;
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr,k,sz);
	if (ret == -1)
	{
		printf("没有找到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}*/
//二分法查找
//在一个有序数组中查找具体的某个数
//如果找到了就返回这个数的下表，没找到则返回-1
//在视频的第9集，176分左右
//没做出来


int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;//这里一定要放在while里面，不然只会循环一次
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}
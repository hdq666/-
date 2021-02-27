#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int a = 0;
	int max = arr[0];
	for (a = 0; a < sz; a++)
	{
		if (arr[a] > max)
		{
			max = arr[a];
			printf("%d\n", max);
		}
	}
	return 0;
}
//找数组里最大的数
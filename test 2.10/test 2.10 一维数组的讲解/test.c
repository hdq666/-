#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		printf("sizeof[%d]=%p\n", i, &(arr[i]));
	}
	return 0;
}
//教程在视频的p15 12.的41分左右
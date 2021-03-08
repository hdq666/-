#include<stdio.h>
//教程在视频的p24 20.  35分左右
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof arr / sizeof arr[0];
	int i = 0;
	int* p = arr;
	for (i = 0;i < sz; i++)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d ", &arr[9] - &arr[0]);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = &str;
//	char* end = &str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d ", len);
//}
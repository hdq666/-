#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6, };
	printf("%d\n", sizeof arr);//求的是整个arr[]的大小，单位为字符
	printf("%d\n", sizeof arr/sizeof arr[0]);//求的是arr里有多少个字符/元素
	return 0;
}
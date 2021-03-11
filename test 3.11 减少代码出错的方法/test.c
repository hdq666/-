#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>


int my_strlen(const char* arr)//const让*arr不会被改变
{
	int count = 0;
	assert(arr != NULL);//这一步确保指针的有效性
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}
int main()
{
	char arr[] = "hello";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
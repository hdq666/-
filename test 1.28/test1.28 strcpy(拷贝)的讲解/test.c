#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "hello";
	char arr2[20] = { 0 };
	strcpy(arr2, arr1);//strcpy--���� ��( 0 , 1 )�У���1������0��
	printf("%s\n", arr2);
	return 0;
}
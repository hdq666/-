#include<stdio.h>
#include<windows.h>

int main()
{
	char arr[20] = "hello world";
	memset(arr, '+', 5);//memset--�ڴ����ã�0��1��2��,1�ı�0������ַ���2��Ҫ�ĵĸ�������windows.h�ļ�
	printf("%s\n", arr);

	return 0;
}
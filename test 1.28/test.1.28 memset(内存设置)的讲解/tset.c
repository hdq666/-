#include<stdio.h>
#include<windows.h>

int main()
{
	char arr[20] = "hello world";
	memset(arr, '+', 5);//memset--内存设置（0，1，2）,1改变0里面的字符，2是要改的个数，用windows.h文件
	printf("%s\n", arr);

	return 0;
}
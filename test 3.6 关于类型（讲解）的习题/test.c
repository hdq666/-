#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };//int是4个字节
//	short* p = (short*)arr;//short是两个字节
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p+i) = 0;//每次只能改变两个字节，arr里面一个元素4个字节，所以只能改变前两个元素
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

int main()
{
	int a = 0x11223344;//在监控里面这个十六进制是反的  44332211
	char* p = (char*)&a;//char是一个字节，所以只能改变一个字节，所以只能把44改为00
	*p = 0;
	printf("%x ", a);
}
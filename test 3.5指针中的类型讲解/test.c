#include<stdio.h>

//int main()
//{
//	int a = 0x11223344;
//	int* p = &a;
//	printf("%d ", *p);
//	return 0;
//	/*int a = 0x11223344;
//	char* p = &a;//因为char类型个限制，只改变了a的前两个16进制（前一个字节）
//	printf("%d ", *p);
//	return 0;*/
//}
//int* p；*p可以访问4个字节
//char* p;*p可以访问1个字节
//double* p;*p可以访问8个字节

int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pb = &a;
	printf("%p\n", pa);
	printf("%p\n", pa+1);//走4个字节
	printf("%p\n", pb);
	printf("%p\n", pb+1);//走1个字节
	return 0;
}
//指针类型决定了指针一步走多远
//int* p;p+1->4
//char* p;p+1->1
//double* p;p+1->8
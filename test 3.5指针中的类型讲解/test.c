#include<stdio.h>

//int main()
//{
//	int a = 0x11223344;
//	int* p = &a;
//	printf("%d ", *p);
//	return 0;
//	/*int a = 0x11223344;
//	char* p = &a;//��Ϊchar���͸����ƣ�ֻ�ı���a��ǰ����16���ƣ�ǰһ���ֽڣ�
//	printf("%d ", *p);
//	return 0;*/
//}
//int* p��*p���Է���4���ֽ�
//char* p;*p���Է���1���ֽ�
//double* p;*p���Է���8���ֽ�

int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pb = &a;
	printf("%p\n", pa);
	printf("%p\n", pa+1);//��4���ֽ�
	printf("%p\n", pb);
	printf("%p\n", pb+1);//��1���ֽ�
	return 0;
}
//ָ�����;�����ָ��һ���߶�Զ
//int* p;p+1->4
//char* p;p+1->1
//double* p;p+1->8
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()//ָ����÷�
{
	int a = 10;
	int* p = &a;//	p��һ������--ָ�����	&��ȡ��ַ����
	printf("%p\n", p);//��һ���ǲ鿴a�ĵ�ַ
	*p = 20;
	printf("%d\n", a);
	return 0;
}
//*�����ò�����/��ӷ��ʲ�����

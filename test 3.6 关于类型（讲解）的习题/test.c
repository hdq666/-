#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };//int��4���ֽ�
//	short* p = (short*)arr;//short�������ֽ�
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p+i) = 0;//ÿ��ֻ�ܸı������ֽڣ�arr����һ��Ԫ��4���ֽڣ�����ֻ�ܸı�ǰ����Ԫ��
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

int main()
{
	int a = 0x11223344;//�ڼ���������ʮ�������Ƿ���  44332211
	char* p = (char*)&a;//char��һ���ֽڣ�����ֻ�ܸı�һ���ֽڣ�����ֻ�ܰ�44��Ϊ00
	*p = 0;
	printf("%x ", a);
}
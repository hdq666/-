#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//����Ƕ���ָ��
//	//int*** pppa = &ppa;//����ָ��
//	printf("%d\n", pa);//����*����ȡ��ַ
//	printf("%d\n", *pa);
//	printf("%d\n", **ppa);
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", *pa);
//	printf("%d\n", pa);
//	return 0;
//}
//�������������Σ�{1��2��3��4}
//�ַ��������ַ���{'a','b','c','d'}
//ָ��������ָ��:{&a,&b,&c,&d}


int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a,&b,&c };//ָ������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *arr[i]);
	}
}
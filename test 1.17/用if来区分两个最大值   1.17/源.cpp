#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int MAX(int x, int y)//�������Զ���ĺ��� -- MAX����
{
	if (x > y)
		return x;//xʼ��С��y��������һ����ѭ��������������
	else
		return y;
}

int main()
{
	int num1 = 100;
	int num2 = 200;
	int max = 0;
	max = MAX(num1, num2);//������Ҫ�Զ���һ������
	printf("%d\n", max);
	return 0;
}
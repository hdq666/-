#include<stdio.h>

int add(int x, int y);//����������������Ҫ��;��

int main()
{
	int a = 10;
	int b = 20;
	int c=add(a, b);//�����Ǻ�������
	printf("%d\n", c);
	return 0;
}

int add(int x, int y)//�����Ǻ�������
{
	int z = x + y;
	return z;
}
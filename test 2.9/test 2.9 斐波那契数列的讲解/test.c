#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//�̳��ڿγ̵�p14 11.��38������
int d = 0;
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;//���û��n--���ͻ�һֱѭ����ȥ��һֱ���㵽n<=2
		d++;//�����Ǽ��������м���Ĵ���
	}
	return c;
}

int main()
{
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d\n", ret);
	printf("%d\n", d);
	return 0;
}

/*int a = 0;
int fib(int n)//�õݹ�ķ�������̫����̫���ӣ�������Ĵ�����2^n(2��n�η�)
{
	if (n == 3)
	{
		a++;//�����Ǽ������м���Ĵ���
	}
	if (n <= 2)
		return 1;//���������е�ǰ������
	else
		return fib(n - 1) + fib(n - 2);//�������еĹ�ʽ
}

int main()
{
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	ret = fib(n);
	printf("ret=%d\n", ret);
	printf("a=%d\n", a);
	return 0;
}*/

//쳲��������У�ǰ���������ڵ�������
// 1 1 2 3 5 8 13 21 34......

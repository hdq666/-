#define _CRT_SECURE_NO_WARNINGS 1

#include<limits.h>
#include<stdio.h>

int main()
{
	int a = 3;
	int b = 5;
	printf("����ǰ��a=%d b=%d\n", a, b);//a=011,b=101
	a = a ^ b;//�ұ�a=011��b=101    ���a=110
	b = a ^ b;//�ұ�a=110,b=101     ���b=011
	a = a ^ b;//�ұ�a=110,b=011     ���a=101
	printf("������a=%d b=%d\n", a, b);//a=101,b=011
	return 0;
}

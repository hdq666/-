#define _CRT_SECURE_NO_WARNINGS 1

#include<limits.h>
#include<stdio.h>

int main()
{
	int a = 3;
	int b = 5;
	printf("½»»»Ç°£ºa=%d b=%d\n", a, b);//a=011,b=101
	a = a ^ b;//ÓÒ±ßa=011£¬b=101    ×ó±ßa=110
	b = a ^ b;//ÓÒ±ßa=110,b=101     ×ó±ßb=011
	a = a ^ b;//ÓÒ±ßa=110,b=011     ×ó±ßa=101
	printf("½»»»ºó£ºa=%d b=%d\n", a, b);//a=101,b=011
	return 0;
}

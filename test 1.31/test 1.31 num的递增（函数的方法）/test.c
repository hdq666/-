#include<stdio.h>

void add(int* p)
{
	(*p)++;//�����*pҪ��()����Ȼֻ��p++
}

int main()
{
	int num = 0;
	add(&num);
	printf("%d\n", num);
	add(&num);
	printf("%d\n", num);
	add(&num);
	printf("%d\n", num);
	return 0;
}
#include<stdio.h>

void add(int* p)
{
	(*p)++;//这里的*p要用()，不然只是p++
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
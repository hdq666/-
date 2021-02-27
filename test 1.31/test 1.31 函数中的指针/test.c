#include<stdio.h>

void Add (int *p)
{
	(*p)++;//如果是*p++，那么加的是P	(*p)++,num才++
}

int main()
{
	int num = 0;
	Add(& num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);
	return 0;
}
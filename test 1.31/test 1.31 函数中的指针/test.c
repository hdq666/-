#include<stdio.h>

void Add (int *p)
{
	(*p)++;//�����*p++����ô�ӵ���P	(*p)++,num��++
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
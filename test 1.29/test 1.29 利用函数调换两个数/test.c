#include<stdio.h>

void Swap(int * pa,int *pb)//void�ǿա��޵���˼������Ҫ����ֵ
{
	int c = 0;
	c = *pa;
	*pa = *pb;
	*pb = c;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	Swap(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}
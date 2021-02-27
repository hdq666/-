#include<stdio.h>

int main()

{
	int a = 0;//0为假
	int b = 3;//非0全为真
	int c = a && b;//&& - 逻辑与，要两个真才是真			
	int d = a || b;//|| - 逻辑或，有一个真就是真
	printf("%d\n",c);
	printf("%d\n", d);
	return 0; 
}
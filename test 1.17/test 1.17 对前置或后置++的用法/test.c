#include<stdio.h>

int main()
{
	int a = 10;
	int b = ++a;//因为--/++的原因，a的值也会发生变化
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}
//前置++是直接+1就是b=a+1，后置++是先用a再++，就是b=a，a=a+1
//++和--也是一样的用法
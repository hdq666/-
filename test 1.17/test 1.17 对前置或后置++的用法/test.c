#include<stdio.h>

int main()
{
	int a = 10;
	int b = ++a;//��Ϊ--/++��ԭ��a��ֵҲ�ᷢ���仯
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}
//ǰ��++��ֱ��+1����b=a+1������++������a��++������b=a��a=a+1
//++��--Ҳ��һ�����÷�
#include<stdio.h>

/*int main()
{
	int a = 0;
	int b = 0;
	b = (a > 5 ?  3 :  -3);//���ͣ����a>5,��b=3,����b=-3
	printf("%d ", b);
}*/

int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	max = (a > b ? a : b);
	printf("%d ", max);
}
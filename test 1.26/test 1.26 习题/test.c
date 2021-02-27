#include<stdio.h>

int main()
{
	int a = 0;
	double sum = 0.0;
	int b = 1;
	for (a = 1; a <= 100; a++)
	{
		sum += b*1.0 / a;
		b = -b;//每一次进来都会变成上一次的负数
	}
	printf("%lf\n", sum);//double要用%lf
	return 0;
}
//这道题求1/1-1/2+1/3......1/100
#include<stdio.h>

int main()
{
	int a = 0;
	double sum = 0.0;
	int b = 1;
	for (a = 1; a <= 100; a++)
	{
		sum += b*1.0 / a;
		b = -b;//ÿһ�ν�����������һ�εĸ���
	}
	printf("%lf\n", sum);//doubleҪ��%lf
	return 0;
}
//�������1/1-1/2+1/3......1/100
#include<stdio.h>
/*int main()
{
	int year = 1000;
	int b = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
			b++;
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
			b++;
		}
	}
	printf("\n��%d������\n", b);
	return 0;
}*/
//����Ϊ�򻯰汾
int main()
{
	int year = 0;
	int b = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			printf("%d ", year);
			b++;
		}
	}
	printf("\n��%d������\n", b);

	return 0;
}
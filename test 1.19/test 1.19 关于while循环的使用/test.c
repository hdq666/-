#include<stdio.h>

int main()
{
	int a = 1;
	while (a <= 10)
	{
		if (a == 5)
			continue;//当a=5时，continue的作用是停止下一步，重新循环
		printf("%d\n", a);
		a++;
	}
	return 0;
}

/*int main()
{
	int a = 1;
	while (a <= 10)
	{
		if (a == 5)
			break;
		printf("%d\n", a);
		a++;
	}
	return 0;
}*/


/*int main()
{
	int a = 1;
	while (a <= 10)
	{
		printf("%d\n", a);
		a++;
	}
	return 0;
}*/

/*int main()
{
	int a = 1;
	while (a <= 10)
	{
		a++;
		if (a == 5)
			continue;
		printf("%d\n", a);
	}
	return 0;
}*/
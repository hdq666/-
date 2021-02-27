#include<stdio.h>

void new_line()
{
	printf("hehe\n");
}

void three_line()
{
	int a = 0;
	for (a = 0; a < 3; a++)
	{
		new_line();
	}
}

int main()
{
	three_line();
	return 0;
}
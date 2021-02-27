#include<stdio.h>

/*int main()
{
	for (; ; )
	{
		printf("hehe\n");
	}
	return 0;
}*/
//for循环的初始化、调整、判断都可以省略，但是for循环的判断部分如果被省略，那判断条件就是：恒为正



/*int main()
{
	int a = 0;
	int b = 0;
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			printf("hehe\n");
		}
	}
	return 0;
}*/

int main()
{
	int a = 0;
	int b = 0;
	for (; a < 10; a++)
	{
		for (; b < 10; b++)//这里的初始化省略了，所以里面的for的b=10不会再变回0，而外面for的a会继续工作
		{
			printf("hehe\n");
		}
	}
	return 0;
}
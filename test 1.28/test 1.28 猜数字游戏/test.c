#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("                     \n");
	printf("      1.开始游戏     \n");
	printf("      0.退出游戏     \n");
	printf("                     \n");
}

void game()
{
	int num = 0;
	num = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("请输入猜的数字\n");
		scanf("%d", &input);
		if (input > num)
		{
			printf("猜大了\n");
		}
		else if (input < num)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}	
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择（1/0）\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	}while (input);
	return 0;
}
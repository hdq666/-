#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	initboard(board, ROW, COL);//初始化棋盘
	displayboard(board, ROW, COL);//打印棋盘
	while (1)
	{
		playermove(board, ROW, COL);//玩家下棋
		displayboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		computermove(board, ROW, COL);//电脑下棋
		displayboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if(ret =='Q')
	{
		printf("平局\n");
	}
}
void menu()
{
	printf("***********************\n");
	printf("****1.play   0.exit****\n");
	printf("***********************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1://因为这是1，前提是下面while判断的是input，所以这里是真才可以循环
			game();
			break;
		case 0://同理，这里是0为假所以不能循环
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
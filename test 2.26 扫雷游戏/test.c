#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void game()
{
	char mine[ROWS][COLS] = { 0 };//布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//排查出来雷的信息
	//下面是初始化
	//棋盘是以‘0’‘1’ ‘*’的形式存在，而不是0 1
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');
	displayboard(show,ROW,COL);//打印棋盘
	//displayboard(mine, ROW, COL);//这个棋盘是放置雷的棋盘
	setmine(mine, ROW, COL);//布置雷
	//displayboard(mine, ROW, COL);//这一步可以打印出显示雷的棋盘
	findmine(mine, show, ROW, COL);//这一步是玩家扫雷的过程
}
void menu()
{
	printf("**********************\n");
	printf("****1.play  0.exit****\n");
	printf("**********************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//菜单
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);//input用0/1的原因是：0为假可以实现程序结束，1或其他数就可以实现循环
}

int main()
{
	test();
	return 0;
}
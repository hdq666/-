#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void initboard(char board[ROWS][COLS], int rows, int cols, char set)//这一步是初始化棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void displayboard(char board[ROWS][COLS], int row, int col)//打印棋盘
{
	int i = 0;
	int j = 0;
	printf("\n");
	printf("  ");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void setmine(char board[ROWS][COLS], int row, int col)//布置雷的过程
{
	int count=EASY_COUNT;//这里是雷的数量
	while (count)
	{	//这是随机出现在棋盘上的雷
		int x = rand() % row + 1;//%row可以求出1~(row-1)之间的数，+1就是棋盘的大小
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
//  '1'-'0'=1 ，用到表格,可以看102.30分鹏哥的视频
//  '3'-'0'=3  ,0应该不可以换其他数字
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] +
		mine[x + 1][y] +
		mine[x + 1][y - 1] +
		mine[x][y - 1] - 8 * '0';
}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)//这一步是玩家扫雷的过程
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入坐标:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')//踩雷的情况
			{
				printf("很遗憾，你踩雷了\n");
				displayboard(mine, row, col);
				break;
			}
			else//没踩雷的情况，要计算周围有几个雷
			{
				int count = get_mine_count(mine, x, y);//这一步就是计算雷的个数
				show[x][y] = count+ '0';
				displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标错误，请重新输入\n");
		}
		if (win == row * col - EASY_COUNT)
		{
			printf("恭喜你，排雷成功\n");
			printf("\n");
			printf("这是雷区图");
			displayboard(mine, ROW, COL);
		}
	}
}
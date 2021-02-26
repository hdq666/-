#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10//简单模式雷的数量

void initboard(char board[ROWS][COLS], int rows, int cols, char set);//这是雷的信息

void displayboard(char board[ROWS][COLS], int row, int col);//打印棋盘
void setmine(char board[ROWS][COLS], int row, int col);//布置雷,因为这是布置雷，所以用9*9
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//这一步是玩家扫雷的过程
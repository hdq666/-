#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void initboard(char board[ROW][COL],int row,int col);//初始化棋盘
void displayboard(char board[ROW][COL], int row, int col);//打印棋盘
void playermove(char board[ROW][COL], int row, int col);//玩家下棋
void computermove(char board[ROW][COL], int row, int col);//电脑下棋

char iswin(char board[ROW][COL], int row, int col);

//'*'表示玩家赢
//'#'表示电脑赢
//'Q'表示平局
//'C'表示继续
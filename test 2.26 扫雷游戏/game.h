#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10//��ģʽ�׵�����

void initboard(char board[ROWS][COLS], int rows, int cols, char set);//�����׵���Ϣ

void displayboard(char board[ROWS][COLS], int row, int col);//��ӡ����
void setmine(char board[ROWS][COLS], int row, int col);//������,��Ϊ���ǲ����ף�������9*9
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//��һ�������ɨ�׵Ĺ���
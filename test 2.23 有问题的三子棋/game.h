#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void initboard(char board[ROW][COL],int row,int col);//��ʼ������
void displayboard(char board[ROW][COL], int row, int col);//��ӡ����
void playermove(char board[ROW][COL], int row, int col);//�������
void computermove(char board[ROW][COL], int row, int col);//��������

char iswin(char board[ROW][COL], int row, int col);

//'*'��ʾ���Ӯ
//'#'��ʾ����Ӯ
//'Q'��ʾƽ��
//'C'��ʾ����
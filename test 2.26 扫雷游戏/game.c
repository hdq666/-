#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void initboard(char board[ROWS][COLS], int rows, int cols, char set)//��һ���ǳ�ʼ������
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
void displayboard(char board[ROWS][COLS], int row, int col)//��ӡ����
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
void setmine(char board[ROWS][COLS], int row, int col)//�����׵Ĺ���
{
	int count=EASY_COUNT;//�������׵�����
	while (count)
	{	//������������������ϵ���
		int x = rand() % row + 1;//%row�������1~(row-1)֮�������+1�������̵Ĵ�С
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
//  '1'-'0'=1 ���õ����,���Կ�102.30���������Ƶ
//  '3'-'0'=3  ,0Ӧ�ò����Ի���������
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

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)//��һ�������ɨ�׵Ĺ���
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("����������:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')//���׵����
			{
				printf("���ź����������\n");
				displayboard(mine, row, col);
				break;
			}
			else//û���׵������Ҫ������Χ�м�����
			{
				int count = get_mine_count(mine, x, y);//��һ�����Ǽ����׵ĸ���
				show[x][y] = count+ '0';
				displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("�����������������\n");
		}
		if (win == row * col - EASY_COUNT)
		{
			printf("��ϲ�㣬���׳ɹ�\n");
			printf("\n");
			printf("��������ͼ");
			displayboard(mine, ROW, COL);
		}
	}
}
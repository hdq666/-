#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	initboard(board, ROW, COL);//��ʼ������
	displayboard(board, ROW, COL);//��ӡ����
	while (1)
	{
		playermove(board, ROW, COL);//�������
		displayboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		computermove(board, ROW, COL);//��������
		displayboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if(ret =='Q')
	{
		printf("ƽ��\n");
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
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1://��Ϊ����1��ǰ��������while�жϵ���input��������������ſ���ѭ��
			game();
			break;
		case 0://ͬ��������0Ϊ�����Բ���ѭ��
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
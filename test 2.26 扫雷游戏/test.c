#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void game()
{
	char mine[ROWS][COLS] = { 0 };//���úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//�Ų�����׵���Ϣ
	//�����ǳ�ʼ��
	//�������ԡ�0����1�� ��*������ʽ���ڣ�������0 1
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');
	displayboard(show,ROW,COL);//��ӡ����
	//displayboard(mine, ROW, COL);//��������Ƿ����׵�����
	setmine(mine, ROW, COL);//������
	//displayboard(mine, ROW, COL);//��һ�����Դ�ӡ����ʾ�׵�����
	findmine(mine, show, ROW, COL);//��һ�������ɨ�׵Ĺ���
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
		menu();//�˵�
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);//input��0/1��ԭ���ǣ�0Ϊ�ٿ���ʵ�ֳ��������1���������Ϳ���ʵ��ѭ��
}

int main()
{
	test();
	return 0;
}
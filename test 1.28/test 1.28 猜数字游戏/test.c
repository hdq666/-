#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("                     \n");
	printf("      1.��ʼ��Ϸ     \n");
	printf("      0.�˳���Ϸ     \n");
	printf("                     \n");
}

void game()
{
	int num = 0;
	num = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("������µ�����\n");
		scanf("%d", &input);
		if (input > num)
		{
			printf("�´���\n");
		}
		else if (input < num)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}	
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��1/0��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	}while (input);
	return 0;
}
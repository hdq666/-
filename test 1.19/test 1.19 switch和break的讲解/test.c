#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

/*int main()
{
	int day = 0;
	scanf("%d",&day);
	switch (day)  //switch���ר�����ڶ��֧�����
	{
	case 1://case������ڣ�break�ǳ���
		printf("��һ\n");
		break;//�����жϣ�ֱ�ӽ���
	case 2:
		printf("�ܶ�\n");
		break;
	case 3:
		printf("����\n");
		break;
	case 4:
		printf("����\n");
		break;
	case 5:
		printf("����\n");
		break;
	case 6:
		printf("����\n");
		break;
	case 7:
		printf("��ĩ\n");
		break;
	befalut:
		printf("�������\n");
		break;
	}
	return 0;
}*/


int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�������\n");
		break;
	}
	return 0;
}
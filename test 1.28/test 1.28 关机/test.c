#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ĵ�����60���ػ���������ʾ�����롰�������ɽ����γ���\n");
	printf("�����룺\n");
	scanf("%s", &input);
	if (strcmp(input, "������") == 0)//strcmp--�Ƚ������ַ���
	{
		system("shutdown -a");//��ͷ�ļ�<windows.h>
	}
	else
	{
		goto again;//goto--ֱ����ת��again��λ��
	}
	return 0;
}
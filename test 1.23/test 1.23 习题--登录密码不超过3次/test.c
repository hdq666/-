#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("�������룺");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//������(password==123456),��Ϊ���������ַ���
		{									//��strcmp���Ƚ�password�롰123456��,������������==0
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
		printf("������󳬹�3�Σ��˳�����\n");
	return 0;
}
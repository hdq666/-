#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int input = 0;
	printf("��������\n");
	printf("��Ҫ�ú�ѧϰ(��:1/��:0)");
	scanf("%d", &input);		//��scanf�ǵô���&
	if (input == 1)				//Ҫ��==�������ſ���ѡ��
	{
		printf("���ɹ�\n");
	}
	else
	{
		printf("���ʧ��\n");
	}
	return 0;
	//�����棩��δ�ҵ�����
	
}


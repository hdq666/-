#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = {0};
	printf("�����������");
	scanf("%s\n", password);//�������벢�����password�У���ȡ������ʱ������\n
	while ((ch = getchar()) != '\n')//\n���ַ��������һ���ַ���ֻҪȡ��\n����������û���κ��ַ�
	{
		;
	}
	printf("��ȷ�ϣ�Y/N��");
	ret = getchar();
	if (ret == 'Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("ȷ��ʧ��\n");
	return 0;
}
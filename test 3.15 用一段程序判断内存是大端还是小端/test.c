#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

/*int check_sys()//��������Ƶ��p31 27.   10������
{
	int a = 1;
	char* p = (char*)&a;//��һ����ǿ������ת��   ��һ������a���ڴ��е�һ���ֽ�
	if (*p == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��");
	}
	else
	{
		printf("���");
	}
	return 0;
}*/
//С�Σ��͵�ַ�д�ŵ��������ݵĵ��ֽ�,�ߵ�ַ��ŵ��������ݵĸ��ֽ�
//��ˣ����ֽڴ洢�ڵ͵�ַ��,�������ݵĵ��ֽ������ڸߵ�ַ��
//�ڴ�洢�ķ�ʽ�����������ɵ͵��ߣ��ֽڣ�����


//�����Ǽ򻯰�
int check_sys()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��");
	}
	else
	{
		printf("���");
	}
	return 0;
}
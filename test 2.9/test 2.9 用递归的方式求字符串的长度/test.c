#include<stdio.h>

/*int my_strlen(char* str)//����ȡ���ַ�ÿ��ֻ��ȡһ��
{
	int a = 0;
	while (*str != '\0')
	{
		a++;//�����Ǽ����ַ��ĸ���
		str++;//����ʵ�ְ��ַ���һ��һ����ȡ
	}
	return a;
}

int main()
{
	char arr[] = "hello";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}*/

//�̳��ڿγ̵�p13 10.��58������
//�����ǲ����Զ������ķ���
int my_strlen(char* str)
{
	if (*str != '\0')//����㵽��\0ʱ���Ϳ���ֱ�ӵ�return 0
	{
		return 1 + my_strlen(str + 1);//1+,�ʹ���������һ���ַ����ܼ����������ַ�����Ҫ�����������˵ݹ飬������ѭ��
	}									//��Ϊ����������my_strlen ���Բ����˵ݹ�
	else
	{
		return 0;//��Ϊ���ﷵ�ص�ʱ0�����Ծ�1+1+1+1+1+0
	}
}

int main()
{
	char arr[] = "hello";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
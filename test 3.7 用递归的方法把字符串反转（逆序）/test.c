#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int my_strlen(char* str)//���������
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
/*int my_strlen(char* arr)//�ҵ�����
{
	int count = 0;
	int i = 0;
	while (arr[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}
void change(char arr[])
{
	int sz = my_strlen(arr);
	int left = 0;
	int right = sz - 1;//��Ϊ�±��0��ʼ
	while (left < right)
	{
		int change = arr[left];
		arr[left] = arr[right];
		arr[right] = change;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "abcdefg";
	change(arr);
	printf("%s ", arr);
	return 0;
}*/



//�������õݹ�ķ���//�����ڽ̵̳�p26 22.    81��������

int my_strlen(char arr[])
{
	int i = 0;
	int count = 0;
	while (arr[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}
void change(char arr[])
{
	int sz = my_strlen(arr);
	int tmp = arr[0];
	arr[0] = arr[sz - 1];
	arr[sz - 1] = '\0';
	if (sz >= 2)
	{
		change(arr + 1);
	}
	arr[sz - 1] = tmp;
}
int main()
{
	char arr[] = "abcdefg";
	change(arr);
	printf("%s ", arr);
	return 0;
}
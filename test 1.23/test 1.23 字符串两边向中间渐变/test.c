#include<stdio.h>
#include<string.h>
#include<windows.h>//Sleep��ͷ�ļ�
#include<stdlib.h>//system��ͷ�ļ�

int main()
{
	char arr1[] = "welcome to here!!!";
	char arr2[] = "                  ";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);//���0.5�룬500ms//Sleep��SҪ��д
		system("cls");//system--ִ��ϵͳ�����һ��������cls--�����Ļ
		left++;
		right--; 
	}
	printf("%s\n", arr2);
	return 0;
}
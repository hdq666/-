#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6, };
	printf("%d\n", sizeof arr);//���������arr[]�Ĵ�С����λΪ�ַ�
	printf("%d\n", sizeof arr/sizeof arr[0]);//�����arr���ж��ٸ��ַ�/Ԫ��
	return 0;
}
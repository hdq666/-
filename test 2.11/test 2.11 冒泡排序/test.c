#include<stdio.h>

void bubble_sort(int arr[], int sz)//���鴫�ݵ�����Ԫ�صĵ�ַ�����Բ���ֻint arr[]
{
	int a = 0;
	for (a = 0; a < sz - 1; a++)//������ȷ������
	{
		int b = 0;
		for (b = 0; b < sz - 1 - a; b++)//����ÿһ�˵�ð������
		{
			if (arr[b] > arr[b + 1])//���ǰ�����������
			{
				int c = arr[b];
				arr[b] = arr[b + 1];
				arr[b + 1] = c;
			}
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)//��һ����̫����
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//�̳�����Ƶ��p16 13.��8������
#include<stdio.h>

int main()
{
	int arr[3][4] = { 1,2,3,4,5,6 };
	int x = 0;
	for (x = 0; x < 3; x++)//��Ϊ�����Ǵ�0��ʼ�ģ����Բ���=3
	{
		int y = 0;
		for (y = 0; y < 4; y++)
		{
			printf("%d ", arr[x][y]);
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>

/*int main()
{
	for (; ; )
	{
		printf("hehe\n");
	}
	return 0;
}*/
//forѭ���ĳ�ʼ�����������ж϶�����ʡ�ԣ�����forѭ�����жϲ��������ʡ�ԣ����ж��������ǣ���Ϊ��



/*int main()
{
	int a = 0;
	int b = 0;
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			printf("hehe\n");
		}
	}
	return 0;
}*/

int main()
{
	int a = 0;
	int b = 0;
	for (; a < 10; a++)
	{
		for (; b < 10; b++)//����ĳ�ʼ��ʡ���ˣ����������for��b=10�����ٱ��0��������for��a���������
		{
			printf("hehe\n");
		}
	}
	return 0;
}
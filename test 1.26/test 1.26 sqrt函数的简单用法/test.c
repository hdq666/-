#include<stdio.h>
#include<math.h>//��ѧ��Դ�ļ�--sqrt

int main()
{
	int a = 0;
	int c = 0;
	for (a = 100; a <= 200; a++)
	{
		int b = 0;
		for (b = 2; b < sqrt(a); b++)
		{
			if (a % b == 0)
			{
				break;
			}
		}
		if (b > sqrt(a))//sqrt--��ƽ����sqrt(a)--a�Ŀ�ƽ��
		{
			printf("%d ", a);
			c++;
		}
	}
	printf("\n%d\n", c);
	return 0;
}

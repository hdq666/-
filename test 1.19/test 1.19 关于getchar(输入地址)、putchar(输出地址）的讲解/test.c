#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*int main()
{
	int ch = getchar();//getchar�������ַ���
		putchar(ch);//putchar������ַ���
		printf("%c\n",ch);
	return 0;
}*/

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//!=EOF���ڼ����ϰ� ctrl+z �ͻ�ֹͣ
	{
		printf("%c", ch);
	}
	return 0;
}
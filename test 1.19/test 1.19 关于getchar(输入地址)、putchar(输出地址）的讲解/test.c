#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*int main()
{
	int ch = getchar();//getchar是输入字符串
		putchar(ch);//putchar是输出字符串
		printf("%c\n",ch);
	return 0;
}*/

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//!=EOF是在键盘上按 ctrl+z 就会停止
	{
		printf("%c", ch);
	}
	return 0;
}
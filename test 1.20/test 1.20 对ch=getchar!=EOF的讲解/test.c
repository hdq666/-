#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = {0};
	printf("输入你的密码");
	scanf("%s\n", password);//输入密码并存放在password中，在取走密码时还存留\n
	while ((ch = getchar()) != '\n')//\n是字符串的最后一个字符，只要取走\n，缓冲区就没有任何字符
	{
		;
	}
	printf("请确认（Y/N）");
	ret = getchar();
	if (ret == 'Y')
		printf("确认成功\n");
	else
		printf("确认失败\n");
	return 0;
}
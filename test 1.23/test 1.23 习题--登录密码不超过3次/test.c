#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("输入密码：");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//不能用(password==123456),因为这是两个字符串
		{									//用strcmp来比较password与“123456”,如果两个相等则==0
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
		printf("输入错误超过3次，退出程序\n");
	return 0;
}
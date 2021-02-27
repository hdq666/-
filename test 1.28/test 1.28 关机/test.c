#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("你的电脑于60秒后关机，友情提示：输入“我是猪”可结束次程序\n");
	printf("请输入：\n");
	scanf("%s", &input);
	if (strcmp(input, "我是猪") == 0)//strcmp--比较两个字符串
	{
		system("shutdown -a");//用头文件<windows.h>
	}
	else
	{
		goto again;//goto--直接跳转到again的位置
	}
	return 0;
}
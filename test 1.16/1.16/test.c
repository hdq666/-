#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int input = 0;
	printf("加入我们\n");
	printf("你要好好学习(是:1/否:0)");
	scanf("%d", &input);		//用scanf记得搭配&
	if (input == 1)				//要用==，这样才可以选择
	{
		printf("你会成功\n");
	}
	else
	{
		printf("你会失败\n");
	}
	return 0;
	//（警告）还未找到问题
	
}


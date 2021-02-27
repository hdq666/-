#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

/*int main()
{
	int day = 0;
	scanf("%d",&day);
	switch (day)  //switch语句专门用于多分支的语句
	{
	case 1://case决定入口，break是出口
		printf("周一\n");
		break;//用于中断，直接结束
	case 2:
		printf("周二\n");
		break;
	case 3:
		printf("周三\n");
		break;
	case 4:
		printf("周四\n");
		break;
	case 5:
		printf("周五\n");
		break;
	case 6:
		printf("周六\n");
		break;
	case 7:
		printf("周末\n");
		break;
	befalut:
		printf("输入错误\n");
		break;
	}
	return 0;
}*/


int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

/*int check_sys()//讲解在视频的p31 27.   10分左右
{
	int a = 1;
	char* p = (char*)&a;//这一步是强制类型转换   这一步是求a的内存中第一个字节
	if (*p == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端");
	}
	else
	{
		printf("大端");
	}
	return 0;
}*/
//小段：低地址中存放的是字数据的低字节,高地址存放的是字数据的高字节
//大端：高字节存储在低地址中,而字数据的低字节则存放在高地址中
//内存存储的方式：从左到右是由低到高（字节）排序


//下面是简化版
int check_sys()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端");
	}
	else
	{
		printf("大端");
	}
	return 0;
}
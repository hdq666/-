#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>//讲解在视频的p25 21.    52分左右
int i;//全局变量，不初始化，默认值为0
int main()
{
	i--;
	if (i > sizeof(i))//sizeof计算变量（类型）所占内存的大小，无符号数
	{					//因为sizeof无符号数，所以把i也变为无符号数，所以i变成一个非常大的数
		printf(">");
	}
	else
	{
		printf("<");
	}
	return 0;
}

//int main()
//{
//	int a,b,c;
//	a = 5;
//	c = ++a;//a=c=6
//	b = ++c, c++, ++a, a++;//c=8,a=8,b=7,要注意操作符的优先级，a++是先用a再++
//	b += a++ + c;//a=8,c=8,b=23
//	printf("a=%d b=%d c=%d ", a, b, c);
//	return 0;
//}
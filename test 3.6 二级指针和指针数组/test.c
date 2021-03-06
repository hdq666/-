#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//这就是二级指针
//	//int*** pppa = &ppa;//三级指针
//	printf("%d\n", pa);//不加*就是取地址
//	printf("%d\n", *pa);
//	printf("%d\n", **ppa);
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", *pa);
//	printf("%d\n", pa);
//	return 0;
//}
//整形数组存放整形：{1，2，3，4}
//字符数组存放字符：{'a','b','c','d'}
//指针数组存放指针:{&a,&b,&c,&d}


int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a,&b,&c };//指针数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *arr[i]);
	}
}
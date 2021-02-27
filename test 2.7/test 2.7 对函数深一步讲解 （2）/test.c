#include<stdio.h>//这是库函数里的头文件，所以用<>
#include"add.h"  //这是自己声明的头文件，所以用""

int main()
{
	int a = 10;
	int b = 20;
	int sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}
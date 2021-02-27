#include<stdio.h>

/*struct book
{
	char name[20];
	short price;
};

int main()
{
	struct book b1 = { "C语言教程",55 };
	struct book* pa = &b1;
	printf("%s\n", (*pa).name);
	printf("%d\n", (*pa).price);
	return 0;
}*/

struct book
{
	char name[20];
	short price;
};

int main()
{
	//利用结构体类型-创建一个该类型的结构体变量
	struct book b1 = { "C语言教程",55 };
	struct book* pa = &b1;
	printf("%s\n", pa->name);
	printf("%d\n", pa->price);
	return 0;
}
//两种方法都可以用，但第二种会方便一些
//.结构体变量.成员
//->结构体指针->成员
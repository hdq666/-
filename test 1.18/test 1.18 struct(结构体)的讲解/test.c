#include<stdio.h>
#include<string.h>
struct book//struct--结构体关键字
{
	char name[20];//20个字符数组
	short price;//					price是价格的意思（英语翻译）
};//这个;一定要存在，用于结束这个类型定义

int main()
{
	struct book b1 = { "C语言教程",55 };//b1=上边的{ char name , short price }
	printf("书名:%s\n", b1.name);//因为上边的是char/[20],所以这里用%s,字符串就用%s
	printf("价格:%d\n", b1.price);
	b1.price = 15;
	printf("折后:%d\n", b1.price);
	return 0;
}
//改书名的方法
/*int main()
{
	struct book b1 = { "c语言教程"，55 }；
		strcpy(b1.name, "c++语言教程");//strcpy--字符串拷贝  要用库函数string.h		把c++语言教程换到name里
	printf("%s\n", b1.name);
	return 0;
}*/
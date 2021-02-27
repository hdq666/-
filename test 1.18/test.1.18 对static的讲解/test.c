#include<stdio.h>

int c()
{
	static int b = 1;//加了 static后b是一个静态的局部变量
	           b++;			//此时b不再=1，而是逐次增加
	printf("%d\n", b);//没加 static，b会一直=1
}

int main()
{
	int a = 0;
 	while (a < 5)
	{
		c();
		a++;
	}
	return 0;

}
//static--修饰局部变量，使局部的生命周期变长
//static--修饰全局变量,改变变量的作用域
//在另一个源文件的 static int g(全局变量)，在这个源文件无法用
//让静态的全局变量只能在内部使用，在外部的源文件无法使用
//static可以修饰函数，用法和修饰全局变量相同
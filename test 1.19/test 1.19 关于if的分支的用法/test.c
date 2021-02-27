#include<stdio.h>

/*int main()
{
	int age = 500;
	if (age < 18)					//用if一定要加（），（）里面是表达式
		printf("未成年\n");
	else if (age >= 18 && age < 28)//(18=<age<28)这个方法是不行的，&&--两个真才是真
		printf("青年\n");
	else if (age >= 28 && age < 50)
		printf("壮年\n");
	else if (age >= 50 && age < 90)
		printf("老年\n");
	else							//else是最后，后面什么都不用加
		printf("升仙\n");
	return 0;
}*/

/*int main()
{
	int age = 10;
	if (age < 18)
		printf("未成年\n");
	else
		printf("成年\n");
	return 0;
}*/


int main()		//单用if的方法
{
	int age = 10;
	if (age < 18)
	{
		printf("未成年\n");
		printf("不能谈恋爱\n");//如果要输入两个printf,要用{}
	}
	return 0;
}
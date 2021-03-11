#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()//讲解在视频的p29 25. 182分左右
{
	int num = 10;
	const int* p = &num;
	//const放在指针变量*的左边时，修饰的是*p，也就是说：不能通过改变p来改变*p(num)的值：const int* p=20是不成立
	//const放在指针变量*的右边时，修饰的是指针变量p本身，p不能被改变：int* const p,*p可以=20，但p不能=&n,只能=&num
	//*p = 20;
	printf("%d\n", *p);
	return 0;
}
#include<stdio.h>

/*int my_strlen(char* str)//这里取的字符每次只能取一个
{
	int a = 0;
	while (*str != '\0')
	{
		a++;//这里是计算字符的个数
		str++;//这里实现把字符串一个一个的取
	}
	return a;
}

int main()
{
	char arr[] = "hello";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}*/

//教程在课程的p13 10.的58分左右
//下面是不用自定变量的方法
int my_strlen(char* str)
{
	if (*str != '\0')//最后算到了\0时，就可以直接到return 0
	{
		return 1 + my_strlen(str + 1);//1+,就代表着最少一个字符，能计算出后面的字符数主要是这里用上了递归，类似与循环
	}									//因为这里用上了my_strlen 所以产生了递归
	else
	{
		return 0;//因为这里返回的时0，所以就1+1+1+1+1+0
	}
}

int main()
{
	char arr[] = "hello";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
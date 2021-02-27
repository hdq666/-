#include<stdio.h>
#include<string.h>

int main()
{
	printf("%d\n", strlen("abc"));//这是链式访问
	return 0;
}

/*
int main()
{
	int len=0;
	len=strlen("abc");
	printf("%d\n",len);
	return 0;
}				//这里是以前的方式，和上面的结果一样，只是过程不同
*/
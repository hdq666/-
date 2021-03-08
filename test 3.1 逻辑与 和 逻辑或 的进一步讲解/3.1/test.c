#include<stdio.h>

/*int main()
{
	int i = 0;
	int a = 0;
	int b = 2;
	int c = 3;
	int d = 4;
	i = a++ && ++b && d++;//因为是先++再使用，所以a=0,而i判断a是假，所以没有后续，i=0
	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
}*/

/*int main()
{
	int i = 0;
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	i = a++ && ++b && d++;
	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
}*/

int main()
{
	int i = 0;
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	i = a++ || ++b || d++;//因为是逻辑或（||），这里的a=1,为真，所以这里有一个真，就没有往下走
	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
}

/*int main()
{
	int i = 0;
	int a = 0;
	int b = 2;
	int c = 3;
	int d = 4;
	i = a++ && ++b && d++;//a为假，b为真，b后面就不算，打印出的a=1
	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
}*/
#include<stdio.h>

/*int main()
{
	int i = 0;
	int a = 0;
	int b = 2;
	int c = 3;
	int d = 4;
	i = a++ && ++b && d++;//��Ϊ����++��ʹ�ã�����a=0,��i�ж�a�Ǽ٣�����û�к�����i=0
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
	i = a++ || ++b || d++;//��Ϊ���߼���||���������a=1,Ϊ�棬����������һ���棬��û��������
	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
}

/*int main()
{
	int i = 0;
	int a = 0;
	int b = 2;
	int c = 3;
	int d = 4;
	i = a++ && ++b && d++;//aΪ�٣�bΪ�棬b����Ͳ��㣬��ӡ����a=1
	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
}*/
#include<stdio.h>

int main()

{
	int a = 0;//0Ϊ��
	int b = 3;//��0ȫΪ��
	int c = a && b;//&& - �߼��룬Ҫ�����������			
	int d = a || b;//|| - �߼�����һ���������
	printf("%d\n",c);
	printf("%d\n", d);
	return 0; 
}
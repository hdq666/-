#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()//��������Ƶ��p29 25. 182������
{
	int num = 10;
	const int* p = &num;
	//const����ָ�����*�����ʱ�����ε���*p��Ҳ����˵������ͨ���ı�p���ı�*p(num)��ֵ��const int* p=20�ǲ�����
	//const����ָ�����*���ұ�ʱ�����ε���ָ�����p����p���ܱ��ı䣺int* const p,*p����=20����p����=&n,ֻ��=&num
	//*p = 20;
	printf("%d\n", *p);
	return 0;
}
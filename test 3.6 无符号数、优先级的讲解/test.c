#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>//��������Ƶ��p25 21.    52������
int i;//ȫ�ֱ���������ʼ����Ĭ��ֵΪ0
int main()
{
	i--;
	if (i > sizeof(i))//sizeof������������ͣ���ռ�ڴ�Ĵ�С���޷�����
	{					//��Ϊsizeof�޷����������԰�iҲ��Ϊ�޷�����������i���һ���ǳ������
		printf(">");
	}
	else
	{
		printf("<");
	}
	return 0;
}

//int main()
//{
//	int a,b,c;
//	a = 5;
//	c = ++a;//a=c=6
//	b = ++c, c++, ++a, a++;//c=8,a=8,b=7,Ҫע������������ȼ���a++������a��++
//	b += a++ + c;//a=8,c=8,b=23
//	printf("a=%d b=%d c=%d ", a, b, c);
//	return 0;
//}
#include<stdio.h>

/*struct book
{
	char name[20];
	short price;
};

int main()
{
	struct book b1 = { "C���Խ̳�",55 };
	struct book* pa = &b1;
	printf("%s\n", (*pa).name);
	printf("%d\n", (*pa).price);
	return 0;
}*/

struct book
{
	char name[20];
	short price;
};

int main()
{
	//���ýṹ������-����һ�������͵Ľṹ�����
	struct book b1 = { "C���Խ̳�",55 };
	struct book* pa = &b1;
	printf("%s\n", pa->name);
	printf("%d\n", pa->price);
	return 0;
}
//���ַ����������ã����ڶ��ֻ᷽��һЩ
//.�ṹ�����.��Ա
//->�ṹ��ָ��->��Ա
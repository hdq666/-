#include<stdio.h>
#include<string.h>
struct book//struct--�ṹ��ؼ���
{
	char name[20];//20���ַ�����
	short price;//					price�Ǽ۸����˼��Ӣ�﷭�룩
};//���;һ��Ҫ���ڣ����ڽ���������Ͷ���

int main()
{
	struct book b1 = { "C���Խ̳�",55 };//b1=�ϱߵ�{ char name , short price }
	printf("����:%s\n", b1.name);//��Ϊ�ϱߵ���char/[20],����������%s,�ַ�������%s
	printf("�۸�:%d\n", b1.price);
	b1.price = 15;
	printf("�ۺ�:%d\n", b1.price);
	return 0;
}
//�������ķ���
/*int main()
{
	struct book b1 = { "c���Խ̳�"��55 }��
		strcpy(b1.name, "c++���Խ̳�");//strcpy--�ַ�������  Ҫ�ÿ⺯��string.h		��c++���Խ̳̻���name��
	printf("%s\n", b1.name);
	return 0;
}*/
#include<stdio.h>

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//���ű��ʽ�������Ҽ��㣬ֱ����󣬷������õ�����
//	printf("%d ", c);
//}
//
///*if (a = b + 1, c = a / 2, d > 0)*/

//����һ���ṹ�����ͣ�struct stu
struct stu//struct�����͵�һ�֣������������ṹ�壩
{
	char name[20];
	int age;
	char id[20];
};//����Ҫ�ã�;��
int main()
{
	struct stu s1 = { "����",21,"20210302" };//ʹ��struct stu������ʹ�����һ��ѧ������s1������ʼ��
	//printf("%s\n", s1.name);//%s�Ǵ�ӡ�ַ���//�ṹ�����.��Ա��
	//printf("%d\n", s1.age);
	//printf("%s\n", s1.id);//Ҫ��s1.

	struct stu* ps = &s1;//ָ��
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%s\n", ps->id);
	//�ṹ��ָ��->��Ա��
	return 0;
}
#include<stdio.h>

/*int main()
{
	int age = 500;
	if (age < 18)					//��ifһ��Ҫ�ӣ��������������Ǳ��ʽ
		printf("δ����\n");
	else if (age >= 18 && age < 28)//(18=<age<28)��������ǲ��еģ�&&--�����������
		printf("����\n");
	else if (age >= 28 && age < 50)
		printf("׳��\n");
	else if (age >= 50 && age < 90)
		printf("����\n");
	else							//else����󣬺���ʲô�����ü�
		printf("����\n");
	return 0;
}*/

/*int main()
{
	int age = 10;
	if (age < 18)
		printf("δ����\n");
	else
		printf("����\n");
	return 0;
}*/


int main()		//����if�ķ���
{
	int age = 10;
	if (age < 18)
	{
		printf("δ����\n");
		printf("����̸����\n");//���Ҫ��������printf,Ҫ��{}
	}
	return 0;
}
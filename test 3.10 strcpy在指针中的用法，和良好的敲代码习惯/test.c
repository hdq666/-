#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

/*int main()
{
	char arr1[] = "**************";
	char arr2[] = "hello";
	strcpy(arr1, arr2);//���ź���ĸ��Ƶ�����ǰ��ģ�arr2���Ƶ�arr1
	printf("%s\n", arr1);//���ڴ����滹�к����***...������arr2�����\0Ҳ���ƽ�ȥ�ˣ�����\0����ľ�û�д�ӡ
	printf("%s\n", arr2);
	return 0;
}*/


/*void my_strcpy(char* dest, char* src)//�ú�����ʵ��strcpy
{
	while (*src!='\0')
	{
		*dest = *src;//ȡ�ö����������Ԫ��
		dest++;//���ǵ�ַ++
		src++;
	}
	*dest = *src;//��Ϊsrc++������һ��*src='\0'
}
int main()
{
	char arr1[] = "**************";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}*/

//����ķ�������Ƶ��p29 25.  135������
char* my_strcpy(char* dest, const char* src)//������������벻���ķ���
{							//����const�Ͳ��õ���*dest��src��λ�ô���*src=*dest��
	char* ret = dest;
	assert(dest != NULL);//���ԣ�Ҫ����#include<assert.h>
	assert(src != NULL);//������ʽΪ����û�£�Ϊ���򱨴�
	while (*dest++ = *src++)//��Ϊ�Ǻ���++��������*dest=*src,��++
	{						//Ҳ��Ϊ*dest=*src,������������
		;					//whileѭ������ʲô������Ҳ�ǿ��Ե�
	}						//arr2�����'\0'Ҳ������ȥ�ˣ���whileѭ���ж�'\0'Ϊ�٣�Ҳ�˳�ȥ��
	return ret;
}							//�������������
int main()
{
	char arr1[] = "**************";
	char arr2[] = "hello";
	printf("%s\n", my_strcpy(arr1, arr2));
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}
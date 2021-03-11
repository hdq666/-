#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

/*int main()
{
	char arr1[] = "**************";
	char arr2[] = "hello";
	strcpy(arr1, arr2);//逗号后面的复制到逗号前面的，arr2复制到arr1
	printf("%s\n", arr1);//在内存里面还有后面的***...，但是arr2里面的\0也复制进去了，所以\0后面的就没有打印
	printf("%s\n", arr2);
	return 0;
}*/


/*void my_strcpy(char* dest, char* src)//用函数来实现strcpy
{
	while (*src!='\0')
	{
		*dest = *src;//取得都是数组的首元素
		dest++;//这是地址++
		src++;
	}
	*dest = *src;//因为src++，到这一步*src='\0'
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

//下面的方法在视频的p29 25.  135分左右
char* my_strcpy(char* dest, const char* src)//是我这个脑子想不到的方法
{							//加上const就不用担心*dest和src的位置错误（*src=*dest）
	char* ret = dest;
	assert(dest != NULL);//断言，要引用#include<assert.h>
	assert(src != NULL);//如果表达式为真则没事，为假则报错
	while (*dest++ = *src++)//因为是后置++，所以先*dest=*src,在++
	{						//也因为*dest=*src,所以条件成立
		;					//while循环里面什么都不放也是可以的
	}						//arr2里面的'\0'也拷贝进去了，而while循环判断'\0'为假，也退出去了
	return ret;
}							//这个方法的神奇
int main()
{
	char arr1[] = "**************";
	char arr2[] = "hello";
	printf("%s\n", my_strcpy(arr1, arr2));
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}
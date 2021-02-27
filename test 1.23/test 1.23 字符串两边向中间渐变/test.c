#include<stdio.h>
#include<string.h>
#include<windows.h>//Sleep的头文件
#include<stdlib.h>//system的头文件

int main()
{
	char arr1[] = "welcome to here!!!";
	char arr2[] = "                  ";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);//间隔0.5秒，500ms//Sleep的S要大写
		system("cls");//system--执行系统命令的一个函数，cls--清空屏幕
		left++;
		right--; 
	}
	printf("%s\n", arr2);
	return 0;
}
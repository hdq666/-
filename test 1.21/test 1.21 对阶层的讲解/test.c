#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//n!=1*2*3*4*5*...*n���ߣ�n-��*n
int main()
{
	int n = 0;
	int a = 1;
	int b = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		b = b * n;
		sum = sum + b;
	}
	printf("%d\n", sum);
	return 0;
}//����ļ�



/*int main()
{
	int n = 0;
	int a = 1;
	int b = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		b = 1;//��ÿ������ѭ��ʱb=1������1!+2!+3! 
		for (a = 1; a <= n; a++) 
		{						
			b = b * a;			
		}
		sum = sum + b;			
	}							
	printf("%d\n", sum);			
	return 0;					
}*/



/*int main()
{
	int n = 0;
	int a = 1;
	int b = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		for (a =1; a <= n; a++) //n=1ʱ��b=1*1=1
		{						//n=2ʱ��b=1*1*2=2
			b = b * a;			//n=3ʱ��b=2*1*2*3=12
		}						
		sum = sum + b;			//n=1,sum=1
	}							//n=2,sum=1+2=3
	printf("%d\n",sum);			//n=3,sum=3+12=15
	return 0;					//�ⲻ��1!+2!+3!
}	*/							//!�ǽײ����˼

/*int main()
{
	int a = 1;
	int n = 0;
	int b = 1;
	scanf("%d", &n);
	for (a = 1; a <= n; a++)
	{
		b = a * b;
	}
	printf("%d\n", b);
	return 0;
}*///n�Ľײ�
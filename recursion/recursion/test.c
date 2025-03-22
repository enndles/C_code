#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//递归
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//不满足条件的数就重复调用函数，但这个数每次都会更接近条件的极限，最终突破条件。
//	}				//第一次：1234 第二次：123 第三次：12 第四次：1 不满足条件，进行下一步
//	printf("%d ",n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u",&num);//输入一个整型值（无符号），按顺序打印它的每一位
//	print(num);
//
//	return 0;
//}


//编写函数不允许创建临时变量，求字符串的长度。
//模拟strlen

//int my_strlen(char* arr)
//{
//	int count = 0;//该方法创建了临时变量
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);//递归调用
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = {"hello world!"};
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}


////求n!
//int fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//
//}
//int main()
//{
//	int i = 0;
//	scanf("%d",&i);
//	int ret = fac(i);
//	printf("%d\n",ret);
//	return 0;
//}



//求第n个斐波那契数列的值
//int Fib(int n)
//{	
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);//递归的方法太繁重
//
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 5;
//	int ret = Fib(n);
//	printf("%d\n",ret);
//	return 0;
//}

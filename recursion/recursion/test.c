#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//�ݹ�
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//�����������������ظ����ú������������ÿ�ζ�����ӽ������ļ��ޣ�����ͻ��������
//	}				//��һ�Σ�1234 �ڶ��Σ�123 �����Σ�12 ���ĴΣ�1 ������������������һ��
//	printf("%d ",n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u",&num);//����һ������ֵ���޷��ţ�����˳���ӡ����ÿһλ
//	print(num);
//
//	return 0;
//}


//��д��������������ʱ���������ַ����ĳ��ȡ�
//ģ��strlen

//int my_strlen(char* arr)
//{
//	int count = 0;//�÷�����������ʱ����
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
//		return 1 + my_strlen(str + 1);//�ݹ����
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


////��n!
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



//���n��쳲��������е�ֵ
//int Fib(int n)
//{	
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);//�ݹ�ķ���̫����
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

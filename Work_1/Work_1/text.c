#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

////输入三个数，按降序输出
//
//void swap(int* x, int* y)
//{
//	int tem = *x;
//	*x = *y;
//	*y = tem;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d",&a,&b,&c);
//	if (a < b)
//	{
//		swap(&a,&b);
//	}
//	if (a < c)
//		swap(&a,&c);
//	if (b < c)
//		swap(&b,&c);
//
//	printf("%d %d %d",a,b,c);
//	return 0;
//}


////打印1-100之间3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ",i);
//	}
//
//	return 0;
//}


//给定两个数，求最大公约数(即能整除两数的最大数)
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	int min = a < b ? a : b;
//	while (1)
//	{
//		if (a % min == 0 && b % min == 0)
//			break;
//		min--;
//	}
//	printf("%d",min);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	while (a % b)
//	{
//		int c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d",b);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n",count);
//	return 0;
//}

//计算1/1-1/2+1/3-1/4......-1/100的值
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf",sum);
//	return 0;
//}

//打印九九乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


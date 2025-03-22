#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	printf("交换前:a:%d b:%d\n",a,b);
//	swap(&a,&b);
//	printf("交换后:a:%d b:%d\n",a,b);
//	return 0;
//}


//函数练习一：判断素数
//#include <math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//素数是只能被1和它自己整除的数，有两种方法。
//	// 1、判断从2 --> i-1之间是否有数能整除i
//	//2、只需判断从1->sqrt(i)(平方)之间是否有数能整除i。2*8=16、4*4=16、8*2=16
//	//for (i = 100; i <= 200; i++)
//	//{
//	//	int flag = 1;
//	//	for (j = 2; j <= i - 1; j++)
//	//	{
//	//		if (i % j == 0)
//	//		{
//	//			flag = 0;			//说明不是素数
//	//			break;				//跳出内循环
//	//		}
//	//	}
//	//	if (flag == 1)
//	//	{
//	//		printf("%d ",i);
//	//		count++;
//	//	}
//	//}
//	//printf("\n%d", count);
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\n%d",count);
//	return 0;
//}



//函数练习二：判断闰年

//int is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	//int year = 0;
//	//for (year = 1000; year <= 2000; year++)
//	//{
//	//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	//	{
//	//		printf("%d ",year);
//	//	}
//	//}
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//			printf("%d ",year);
//	}
//	return 0;
//}


//
////二分查找函数实现
//int binary_search(int arr1[], int x, int len)
//{
//	int min = 0;
//	int max = len - 1;
//	while (min <= max)
//	{
//		int mid =min + (max - min) / 2;
//		if (arr1[mid] < x)
//		{
//			min = mid + 1;
//		}
//		else if (arr1[mid] > x)
//		{
//			max = mid - 1;
//		}
//		else
//		{
//			return mid;//找到了，返回下标
//		}
//	}
//	return -1;//没找到
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("没找到");
//	}
//	else
//	{
//		printf("找到了,下标为%d\n",ret);
//	}
//	return 0;
//}

//
////函数嵌套调用（但不能嵌套定义）
//void pin()
//{
//	printf("hehe\n");
//}
//void thr_pin()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		pin();
//	}
//}
//int main()
//{
//	thr_pin();
//	return 0;
//}


////函数链接访问
//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));//链接访问，函数必须有返回值
//	//4321  	43是两个字符				  //对printf函数来说，返回的是字符打印的个数
//	return 0;
//}

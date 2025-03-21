#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	//计算n的阶乘
//	int n = 3;
//	int i = 0;
//	int tem = 1;
//	for (i = 1; i <= n; i++)
//	{
//		if (n == 0)
//		{
//			printf("%d\n", 1);
//		}
//		tem = i * tem;
//	}
//	printf("%d\n",tem);
//	return 0;
//
// }
//int main()
//{
//	//int n = 0;
//	//int i = 1;
//	//int j = 1;
//	//int tem = 0;
//	//scanf("%d",&n);
//	//for (i = 1; i <= n; i++)
//	//{
//	//	int num = 1;
//	//	for (j = 1; j <= i; j++)
//	//	{
//	//		num = num * j;
//	//	}
//	//	tem = tem + num;
//	//}
//	int n = 1;
//	int sum = 0;
//	int ret = 1;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;//简化：让上一次的结果重复利用，然后乘上n，每次的结果相加
//	}
//
//	printf("%d\n",sum);
//	return 0;
//}
//int main()
//{
//	//在有序表里查找某一个数的位置
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(int);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}
//#include <windows.h>
//int main()
//{
//	char arr1[] = {"welcome to hpu!!!"};
//	char arr2[] = {"*****************"};
//	int left = 0;
//	int sz = strlen(arr1);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(1000);
//		//库函数，清空屏幕
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n",arr2);
//	return 0;
//}
//int main()
//{
//	//模拟登录，用户只允许登录三次
//	int i = 0;
//	char arr[10] = {0};
//	printf("请输入密码：");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s",arr);
//		if (strcmp(arr, "abcde") == 0)//strcmp函数用于比较两个字符串是否相等，相等返回0}
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请在次输入：");
//		}
//	}
//	if (i == 3)
//	{
//		printf("登录失败");
//	}
//	return 0;
//}
#include <stdlib.h>
#include<time.h>
void menu()
{
	printf("------    1. play    ------\n");
	printf("------    0. exit    ------\n");
}
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d",&guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束");
			break;
		default:
			printf("输入错误");
			break;
		}
	} while (input);
	return 0;
}
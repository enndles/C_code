#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	//����n�Ľ׳�
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
//		sum = sum + ret;//�򻯣�����һ�εĽ���ظ����ã�Ȼ�����n��ÿ�εĽ�����
//	}
//
//	printf("%d\n",sum);
//	return 0;
//}
//int main()
//{
//	//������������ĳһ������λ��
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
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
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
//		//�⺯���������Ļ
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n",arr2);
//	return 0;
//}
//int main()
//{
//	//ģ���¼���û�ֻ�����¼����
//	int i = 0;
//	char arr[10] = {0};
//	printf("���������룺");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s",arr);
//		if (strcmp(arr, "abcde") == 0)//strcmp�������ڱȽ������ַ����Ƿ���ȣ���ȷ���0}
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("����������ڴ����룺");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��¼ʧ��");
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
		printf("�������:>");
		scanf("%d",&guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���\n");
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
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����");
			break;
		default:
			printf("�������");
			break;
		}
	} while (input);
	return 0;
}
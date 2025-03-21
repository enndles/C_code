#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char arr[20] = {0};
	system("shutdown -s -t 60");
//again:
//	printf("你的电脑将于60秒后关机，可以输入“取消关机”来取消关机\n");
//	scanf("%s",arr);
//	if (strcmp(arr, "取消关机") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
	while (1)
	{
		printf("你的电脑将于60秒后关机，可以输入“取消关机”来取消关机\n");
		scanf("%s", arr);
		if (strcmp(arr, "取消关机") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
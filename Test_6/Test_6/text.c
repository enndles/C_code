#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char arr[20] = {0};
	system("shutdown -s -t 60");
//again:
//	printf("��ĵ��Խ���60���ػ����������롰ȡ���ػ�����ȡ���ػ�\n");
//	scanf("%s",arr);
//	if (strcmp(arr, "ȡ���ػ�") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
	while (1)
	{
		printf("��ĵ��Խ���60���ػ����������롰ȡ���ػ�����ȡ���ػ�\n");
		scanf("%s", arr);
		if (strcmp(arr, "ȡ���ػ�") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
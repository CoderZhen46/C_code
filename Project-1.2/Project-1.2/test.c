#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char name[20] = { 0 };
//	char password[20] = { 0 };
//	while (~scanf("%s %s", name, password))
//	{
//		//�ַ����Ƚ�-����ʹ��==�Ƚ�
//		//Ӧ��ʹ��strcmp-
//		if ((strcmp(name, "admin") == 0) && (strcmp(password, "admin") == 0))
//		{
//			printf("Login Success!\n");
//		}
//		else
//			printf("Login Fail!\n");
//	}
//	return 0;
//}

//#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		if (i % 10 == 9 || i / 10 % 10 == 9 || i / 100 % 10 == 9 || i / 1000 % 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		int n = i;
//		while (n)
//		{
//			if (n % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			n /= 10;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int N = 0;
	int odd = 0;
	int even = 0;
	int i = 0;
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		if (i % 2 == 0)
			even++;
		else
			odd++;
	}
	printf("%d %d", odd, even);
	return 0;
}

//�⺯����ģ��ʵ��
//strlen - �ݹ�д���ͷǵݹ�д��
//strcpy
//strcat
//strcmp
//memcpy
//memmove
//strstr
//atoi - ���ַ���ת��������
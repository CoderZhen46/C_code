#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char name[20] = { 0 };
//	char password[20] = { 0 };
//	while (~scanf("%s %s", name, password))
//	{
//		//字符串比较-不能使用==比较
//		//应该使用strcmp-
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

//库函数的模拟实现
//strlen - 递归写法和非递归写法
//strcpy
//strcat
//strcmp
//memcpy
//memmove
//strstr
//atoi - 把字符串转换成整型
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//int a = 10;
//	//printf("hehe\n");
//	//2 + 3;
//	//;//空语句
//	//if语句也是语句
//
//	//int age = 20;
//	//if (age >= 18)
//	//	printf("成年\n");
//
//	int age = 20;
//
//	if (age >= 18)
//	{
//		printf("成年\n");
//		printf("谈恋爱\n");
//	}
//	else
//	{
//		printf("未成年\n");
//	}
//
//	return 0;
//}

//if实现多分支

//int main()
//{
//	int age = 0;
//	//if (age < 18)
//	//	printf("未成年\n");
//	//else if (age >= 18 && age < 30)
//	//	printf("青年\n");
//	//else if (age >= 30 && age < 50)
//	//	printf("中年\n");
//	//else if (age >= 50 && age <= 100)
//	//	printf("老年\n");
//	//else
//	//	printf("老寿星\n");
//
//	if (age < 18)
//		printf("未成年\n");
//	else
//	{
//		if (age >= 18 && age < 30)
//			printf("青年\n");
//		else if (age >= 30 && age < 50)
//			printf("中年\n");
//		else if (age >= 50 && age <= 100)
//			printf("老年\n");
//		else
//			printf("老寿星\n");
//	}
//
//
//	return 0;
//}


//悬空else  -  else与最近的if匹配
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	return 0;
//}

//代码风格很重要

//if书写形式的对比

//int test()
//{
//	int x = 10;
//	int y = 20;
//	if (1)
//		return x;//条件满足返回x,不满足返回y
//	return y;
//}
//
//int main()
//{
//	printf("%d\n", test());
//
//	return 0;
//}

//int main()
//{
//	int num = 1;
//	if (num == 5)
//		printf("hehe\n");
//
//	return 0;
//}

//int main()
//{
//	int num = 1;
//	if (5 == num)
//		printf("hehe\n");
//
//	return 0;
//}

//判断一个数是否为奇数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}

//输出1-100之间的奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		//判断i是否为奇数
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//判断i是否为奇数
//		if (i % 2 != 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i+=2)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//switch语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (1 == day)
//		printf("星期1\n");
//	else if (2 == day)
//		printf("星期2\n");
//	else if (3 == day)
//		printf("星期3\n");
//	//...
//
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//-整型表达式
//	{
//	case 1+0://-整型常量表达式
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//-整型表达式
//	{
//	case 1 + 0://-整型常量表达式
//		printf("工作日\n");
//		break;
//	case 2:
//		printf("工作日\n");
//		break;
//	case 3:
//		printf("工作日\n");
//		break;
//	case 4:
//		printf("工作日\n");
//		break;
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//		printf("休息日\n");
//		break;
//	case 7:
//		printf("休息日\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//-整型表达式
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default://也可放在最前面
//		printf("选择错误\n");
//		break;
//	}
//	return 0;
//}

//练习

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}

//循环语句
//int main()
//{
//	while (1)
//		printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	//1-10
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//continue是跳过每次循环，continue后面的代码，直接到循环的判断部分，进行下一次循环的入口判断
//			//break;//终止循环
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	//getchar - 从标准输入（键盘）读取一个字符
//	ch = getchar();
//	//打印一个字符到标准输出（屏幕）
//	putchar(ch);
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//读取失败的时候，getchar返回EOF
//	//EOF - end of file  -1
//	//ctrl+z
//
//	while ((ch = getchar()) != EOF);
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}

//int main()
//{
//	char password[10] = {0};
//	printf("请输入密码:>");
//
//	return 0;
//}

//for循环
//int main()
//{
//	int i = 0;//初始化-1
//
//
//	while (i < 100)//判断部分-2
//	{
//		//......
//
//
//
//		i += 2;//调整部分-3
//	}
//
//	return 0;
//}

//int main()
//{
//	//1-10
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//			//break;//终止循环
//
//		printf("%d ", i);
//	}
//	return 0;
//}

#include <windows.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//		Sleep(1000);
//		i = 5;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	//0-9
//	int i = 0;
//	//[0,10)
//	//[0,9]
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	//for循环的3个部分都可以省略
//	//判断部分如果省略了-表示恒为真
//
//	//for (;;)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	//打印几个？
//	//10个
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//一次也不循环-k=0为赋值，不是判断，0为假，因此不循环
//		k++;
//	return 0;
//}

//do-while

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	//1 2 3 4
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	//1 2 3 4_ _ _死循环
//	return 0;
//}

//练习
//1.计算n的阶乘
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	//n不要太大-ret为整型
//	return 0;
//}

//2.计算 1!+2!+3!+……+10!
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//
//	int ret2 = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int ret1 = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret1 *= j;
//		}
//		ret2 += ret1;
//	}
//	printf("%d\n", ret2);
//	return 0;
//}

//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	//在有序的数组中查找具体的某个数
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; )
//	return 0;
//}


//作业
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//		case 1: b = 30;
//		case 2: b = 20;
//		case 3: b = 16;
//		default: b = 0;
//	}
//	return b;
//}
//int main()
//{
//	int ret = func(1);
//	printf("%d\n", ret);
//
//	return 0;
//}

//6.
//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//8.
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++) //b=1 a=1  
//	{								  //b=4 a=2
//		if (b >= 20) break;           //b=7 a=3
//		if (b % 3 == 1)               //10 4  13 5  16 6  19 7 22 8
//		{
//			b = b + 3;//b=4 b=7
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//9.
//写代码将三个整数数按从大到小输出。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d %d %d", &a, &b, &c);//2 3 1
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;   //第一个数比第二个数大
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;   //第一个数比第三个数大
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;   //第二个数比第三个数大
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//10.
//写一个代码打印1 - 100之间所有3的倍数的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//11.
//给定两个数，求这两个数的最大公约数
//int MIN(int x, int y)
//{
//	return x < y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = MIN(a, b);
//
//	int i = 0;
//	for (i = min; i >= 1; i--)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			printf("最大公约数为：%d\n", i);
//			break;
//		}
//	}
//
//	return 0;
//}

//12.
//打印1000年到2000年之间的闰年
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}

//13.
//写一个代码：打印100~200之间的素数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				说明不是素数，不需要打印
//				goto flag;
//			}
//
//		}
//		printf("%d ", i);
//flag:
//		;
//	}
//	return 0;
//}

//14.
//编写程序数一下 1到100的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 % 10 == 9)
//		{
//			sum++;
//			if (i % 10 == 9 && i / 10 % 10 == 9)
//			{
//				sum++;
//			}
//		}
//	}
//
//	printf("出现%d个数字9\n", sum);
//	//9 19 29 39 49 59 69 79 89 90 91 92 93 94 95 96 97 98 99
//	return 0;
//}

//15.
//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
//int main()
//{
//
//	return 0;
//}

//17.
//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int a = 0;
//	int b = 1;
//	while (b <= 9)
//	{
//		for (a = 1; a <= b; a++)
//		{
//			printf("%d*%d=%d  ", a, b, a*b);
//
//		}
//		printf("\n");
//		b++;
//	}
//	return 0;
//}

//18. 二分查找
//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	             // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	int k = 3;//假设要找3
	int sz = sizeof(arr) / sizeof(arr[0]);//10
	int left = 0;
	int right = sz - 1;//9

	while (left <= right)
	{
		int mid = (left + right) / 2;//4

		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了：下标为%d\n", mid);
			break;
		}

	}
	if (left > right)
		printf("找不到\n");

	return 0;
}

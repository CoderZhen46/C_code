#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//int main()
//{
//	int n = 9;
//	
//	0 00000000 00000000000000000001001
//	(-1)^0 * 0.
//	float *pFloat = (float *)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}


//9.5
//1001.1
//1.0011*2^3
//(-1)^0 * 1.0011 * 2^3
//S=0
//M=1.0011
//E=3
//

//0.5
//0.1 - 二进制
//1.0 * 2^-1
//(-1)^0 * 1.0 * 2^-1
//S=0
//M=1.0
//E=-1
//


//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	return 0;
//}

//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//
//	char* p = "abcdef";//这里的"abcdef"是一个常量字符串
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	return 0;
//}

//指针数组 - 数组
//存放指针的数组，就是指针数组
//

//int main()
//{
//	int* arr[10];
//	char** ch[20];//二级
//
//	return 0;
//}
//


//数组指针 - 指针
//好孩子 - 孩子

//

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int (*p)[10] = &arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", (*p)[i]);
	}
	/*printf("%d\n", *(*p));*/
	return 0;
}
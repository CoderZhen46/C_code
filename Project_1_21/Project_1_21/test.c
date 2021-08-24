#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>

//函数
//库函数-引头文件
//strcpy函数
#include <string.h>
//int main()
//{
//	char arr1[] = "bit";//数据源
//	char arr2[20] = "xxxxxxxx";//目的地
//
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//memset函数
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	//xxxxx bit
//	return 0;
//}

//自定义函数

//写一个函数可以找出两个整数中的最大值
//int get_max(int x, int y)
////ret_type fun_name(para1, *)
//{
//	int z = (x > y) ? (x) : (y);//函数体-函数的实现
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = get_max(a, b);//找出两个整数的较大值
//	
//	printf("max = %d\n", max);
//
//	return 0;
//}

//写一个函数可以交换两个整形变量的内容

//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写个函数交换a和b的值
//
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap1(a, b);//传值调用
    //
    //函数传参的时候
    //实参传递给形参，形参是实参的一份临时拷贝
    //对形参的修改，不会影响实参
    //
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//void Swap2(int* px, int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写个函数交换a和b的值
//
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap2(&a, &b);//传地址
//  //传址调用
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//函数的参数
//实际参数（实参）
//形式参数（形参）-形式上的参数

//函数的调用

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int *pa = 
//	return 0;
//}


//is_prime(i)
//返回1-是素数
//返回0-不是素数
#include <math.h>
//int is_prime(int i)
//{
//	//判断i是否为素数
//	int m = 0;
//	for (m = 2; m < sqrt(i); m++)
//	{
//		if (i%m == 0)
//		{
//			return 0;
//		}
//	}
//
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

// 写一个函数，实现一个整形有序数组的二分查找

int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
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
			return mid;
		}
	}
	return -1;

}
int main()
{
	//有序的
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	//二分查找
	//找到了，返回下标
	//找不到，返回-1
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}

	return 0;
}
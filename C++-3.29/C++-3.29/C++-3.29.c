#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int j = 0;
	for (; j < 32; ++j)
	{
		if (ret & (1 << j))//if(ret>>j & 1)
			break;
	}
	//将原数组分为两组，第j位为1的为a组，第j位为0的为b组
	//x和y一定会分别进入a、b组，其他出现两次的数，要么进a组，要么进b组
	//a组和b组的数据就变成其他数出现2次，只有一个数出现1次
	//再对a、b组进行异或，就可以找出x和y
	int x = 0, y = 0;
	for (int k = 0; k < numsSize; ++k)
	{
		if (nums[k] & (1 << j))//a组
		{
			x ^= nums[k];
		}
		else                   //b组
		{
			y ^= nums[k];
		}
	}

	int* arr = (int*)malloc(sizeof(int)* 2);
	arr[0] = x;
	arr[1] = y;

	*returnSize = 2;
	return arr;
	return 0;
} 


//计算阶乘递归的空间复杂度
//递归算法的空间复杂度通常是递归的深度（递归多少层）

//计算BubbleSort的空间复杂度？
//时间是累积的
//空间是不累积可以复用的
void BubbleSort(int* a, int n)
{
	assert(a);
	for (size_t end = n; end > 0; --end)
	{
		int exchange = 0;
		for (size_t i = 1; i < end; ++i)
		{

		}
	}
}
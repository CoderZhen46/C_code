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
	//��ԭ�����Ϊ���飬��jλΪ1��Ϊa�飬��jλΪ0��Ϊb��
	//x��yһ����ֱ����a��b�飬�����������ε�����Ҫô��a�飬Ҫô��b��
	//a���b������ݾͱ������������2�Σ�ֻ��һ��������1��
	//�ٶ�a��b�������򣬾Ϳ����ҳ�x��y
	int x = 0, y = 0;
	for (int k = 0; k < numsSize; ++k)
	{
		if (nums[k] & (1 << j))//a��
		{
			x ^= nums[k];
		}
		else                   //b��
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


//����׳˵ݹ�Ŀռ临�Ӷ�
//�ݹ��㷨�Ŀռ临�Ӷ�ͨ���ǵݹ����ȣ��ݹ���ٲ㣩

//����BubbleSort�Ŀռ临�Ӷȣ�
//ʱ�����ۻ���
//�ռ��ǲ��ۻ����Ը��õ�
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
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>

//����
//�⺯��-��ͷ�ļ�
//strcpy����
#include <string.h>
//int main()
//{
//	char arr1[] = "bit";//����Դ
//	char arr2[20] = "xxxxxxxx";//Ŀ�ĵ�
//
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//memset����
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	//xxxxx bit
//	return 0;
//}

//�Զ��庯��

//дһ�����������ҳ����������е����ֵ
//int get_max(int x, int y)
////ret_type fun_name(para1, *)
//{
//	int z = (x > y) ? (x) : (y);//������-������ʵ��
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = get_max(a, b);//�ҳ����������Ľϴ�ֵ
//	
//	printf("max = %d\n", max);
//
//	return 0;
//}

//дһ���������Խ����������α���������

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
//	//д����������a��b��ֵ
//
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap1(a, b);//��ֵ����
    //
    //�������ε�ʱ��
    //ʵ�δ��ݸ��βΣ��β���ʵ�ε�һ����ʱ����
    //���βε��޸ģ�����Ӱ��ʵ��
    //
//	printf("������a=%d b=%d\n", a, b);
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
//	//д����������a��b��ֵ
//
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap2(&a, &b);//����ַ
//  //��ַ����
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}

//�����Ĳ���
//ʵ�ʲ�����ʵ�Σ�
//��ʽ�������βΣ�-��ʽ�ϵĲ���

//�����ĵ���

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int *pa = 
//	return 0;
//}


//is_prime(i)
//����1-������
//����0-��������
#include <math.h>
//int is_prime(int i)
//{
//	//�ж�i�Ƿ�Ϊ����
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

// дһ��������ʵ��һ��������������Ķ��ֲ���

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
	//�����
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	//���ֲ���
	//�ҵ��ˣ������±�
	//�Ҳ���������-1
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//int main()
//{
//	int n = 9;
//	
//	0 00000000 00000000000000000001001
//	(-1)^0 * 0.
//	float *pFloat = (float *)&n;
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
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
//0.1 - ������
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
//	char* p = "abcdef";//�����"abcdef"��һ�������ַ���
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	return 0;
//}

//ָ������ - ����
//���ָ������飬����ָ������
//

//int main()
//{
//	int* arr[10];
//	char** ch[20];//����
//
//	return 0;
//}
//


//����ָ�� - ָ��
//�ú��� - ����

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
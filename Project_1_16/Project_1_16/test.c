#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//int a = 10;
//	//printf("hehe\n");
//	//2 + 3;
//	//;//�����
//	//if���Ҳ�����
//
//	//int age = 20;
//	//if (age >= 18)
//	//	printf("����\n");
//
//	int age = 20;
//
//	if (age >= 18)
//	{
//		printf("����\n");
//		printf("̸����\n");
//	}
//	else
//	{
//		printf("δ����\n");
//	}
//
//	return 0;
//}

//ifʵ�ֶ��֧

//int main()
//{
//	int age = 0;
//	//if (age < 18)
//	//	printf("δ����\n");
//	//else if (age >= 18 && age < 30)
//	//	printf("����\n");
//	//else if (age >= 30 && age < 50)
//	//	printf("����\n");
//	//else if (age >= 50 && age <= 100)
//	//	printf("����\n");
//	//else
//	//	printf("������\n");
//
//	if (age < 18)
//		printf("δ����\n");
//	else
//	{
//		if (age >= 18 && age < 30)
//			printf("����\n");
//		else if (age >= 30 && age < 50)
//			printf("����\n");
//		else if (age >= 50 && age <= 100)
//			printf("����\n");
//		else
//			printf("������\n");
//	}
//
//
//	return 0;
//}


//����else  -  else�������ifƥ��
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

//���������Ҫ

//if��д��ʽ�ĶԱ�

//int test()
//{
//	int x = 10;
//	int y = 20;
//	if (1)
//		return x;//�������㷵��x,�����㷵��y
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

//�ж�һ�����Ƿ�Ϊ����
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

//���1-100֮�������
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		//�ж�i�Ƿ�Ϊ����
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
//		//�ж�i�Ƿ�Ϊ����
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

//switch���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (1 == day)
//		printf("����1\n");
//	else if (2 == day)
//		printf("����2\n");
//	else if (3 == day)
//		printf("����3\n");
//	//...
//
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//-���ͱ��ʽ
//	{
//	case 1+0://-���ͳ������ʽ
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//-���ͱ��ʽ
//	{
//	case 1 + 0://-���ͳ������ʽ
//		printf("������\n");
//		break;
//	case 2:
//		printf("������\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("��Ϣ��\n");
//		break;
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//-���ͱ��ʽ
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default://Ҳ�ɷ�����ǰ��
//		printf("ѡ�����\n");
//		break;
//	}
//	return 0;
//}

//��ϰ

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
//		{//switch����Ƕ��ʹ��
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

//ѭ�����
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
//			continue;//continue������ÿ��ѭ����continue����Ĵ��룬ֱ�ӵ�ѭ�����жϲ��֣�������һ��ѭ��������ж�
//			//break;//��ֹѭ��
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
//	//getchar - �ӱ�׼���루���̣���ȡһ���ַ�
//	ch = getchar();
//	//��ӡһ���ַ�����׼�������Ļ��
//	putchar(ch);
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//��ȡʧ�ܵ�ʱ��getchar����EOF
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
//	printf("����������:>");
//
//	return 0;
//}

//forѭ��
//int main()
//{
//	int i = 0;//��ʼ��-1
//
//
//	while (i < 100)//�жϲ���-2
//	{
//		//......
//
//
//
//		i += 2;//��������-3
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
//			//break;//��ֹѭ��
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
//	//forѭ����3�����ֶ�����ʡ��
//	//�жϲ������ʡ����-��ʾ��Ϊ��
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
//	//��ӡ������
//	//10��
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//һ��Ҳ��ѭ��-k=0Ϊ��ֵ�������жϣ�0Ϊ�٣���˲�ѭ��
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
//	//1 2 3 4_ _ _��ѭ��
//	return 0;
//}

//��ϰ
//1.����n�Ľ׳�
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
//	//n��Ҫ̫��-retΪ����
//	return 0;
//}

//2.���� 1!+2!+3!+����+10!
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
//	//������������в��Ҿ����ĳ����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; )
//	return 0;
//}


//��ҵ
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
//д���뽫�������������Ӵ�С�����
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
//		b = tmp;   //��һ�����ȵڶ�������
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;   //��һ�����ȵ���������
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;   //�ڶ������ȵ���������
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//10.
//дһ�������ӡ1 - 100֮������3�ı���������
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
//���������������������������Լ��
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
//			printf("���Լ��Ϊ��%d\n", i);
//			break;
//		}
//	}
//
//	return 0;
//}

//12.
//��ӡ1000�굽2000��֮�������
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
//дһ�����룺��ӡ100~200֮�������
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
//				˵����������������Ҫ��ӡ
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
//��д������һ�� 1��100�����������г��ֶ��ٸ�����9
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
//	printf("����%d������9\n", sum);
//	//9 19 29 39 49 59 69 79 89 90 91 92 93 94 95 96 97 98 99
//	return 0;
//}

//15.
//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����
//int main()
//{
//
//	return 0;
//}

//17.
//����Ļ�����9*9�˷��ھ���
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

//18. ���ֲ���
//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	             // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	int k = 3;//����Ҫ��3
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
			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
			break;
		}

	}
	if (left > right)
		printf("�Ҳ���\n");

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ӡ�žų˷���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int s = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <=i; j++) 
//		{
//			s = i * j;
//			printf("%d*%d=%d\t", j, i, s);
//			if (i == j)
//			{
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}

//��10�������е����ֵ
//int main()
//{
//	int ar[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &ar[i]);
//	}
//	max = ar[0];
//	for (j = 1; j < 10; j++)
//	{
//		if (max<ar[j])
//		{
//			max = ar[j];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//�������
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	return 0;
//}

//��һ��1-100�����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int cnt = 0;
//	for(i=1;i<=100;i++)
//	{
//		if (i % 10 == 9)
//		{
//			cnt++;
//		}
//		if (i / 10 == 9)
//		{
//			cnt++;
//		}
//	}
//	printf("\ncnt=%d\n", cnt);
//	return 0;
//}

//��ӡ100-200֮�������
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int isprime = 1;
//		for (j = 2; j <=sqrt(i); j++) 
//		{
//			if (i % j == 0)
//			{
//				isprime = 0;
//				break;
//			}
//		}
//		if (isprime)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//��1000-2000�������
//1.�ܱ�4�����Ҳ��ܱ�100����������
//2.�ܱ�400����������
//int main()
//{
//	int year = 0;
//	int cnt= 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			cnt++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			cnt++;
//		}*/
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("%d ", year);
//			cnt++;
//		}
//	}
//	printf("\ncnt=%d\n", cnt);
//	return 0;
//}

//�����������Լ��
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int t = 0;
//	scanf("%d%d", &x, &y);
//	while (t = x % y)
//	{
//		x = y;
//		y = t;
//	}
//	printf("%d\n", y);
//	return 0;
//}

//1-100��3�ı���
//int main()
//{
//	int i = 0;
//	int cnt = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\t", i);
//			cnt++;
//			if (cnt % 5 == 0)
//			{
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}

//��������Ϸ
//#include<stdlib.h>
//#include<math.h>
//void mian()
//{
//	printf("*************************************\n");
//	printf("*************************************\n");
//	printf("****** 1:��ʼ��Ϸ  0:�˳���Ϸ *******\n");
//	printf("*************************************\n");
//	printf("*************************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int c = 0;
//	ret = rand()%100;
//	while (c != ret)
//	{
//		printf("������֣�");
//		scanf("%d", &c);
//		if (c < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (c > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//			printf("�¶���\n");
//	}
//}
//int main()
//{
//	int x = 0;
//	srand((unsigned int)time(0));
//	mian();
//	do
//	{
//		printf("������(1/0)>:");
//		scanf("%d", &x);
//		switch (x)
//		{
//		case 1:
//			printf("�����������Ϸ\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (x);
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	int s = 0;
//	int num[20] =  {"e"};
//	s=strcmp(num, "b");
//	printf("%d\n", s);
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char ar[] = "bit";
//	memset(ar, '*', 6);
//	printf("%s\n", ar);
//	strcpy(ar, "hello");
//	printf("%s\n", ar);
//	return 0;
//}

//дһ����������������
//void swap(int* x, int* y)
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	swap(&a,&b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//дһ�������ж�һ�����ǲ�������
//#include<math.h>
//void judge(int x)
//{
//	int i = 0;
//	int j = sqrt(x);
//	for (i = 2; i <=j ; i++)
//	{
//		if (x % i == 0)
//		{
//			printf("%d��������\n", x);
//			break;
//		}
//	}
//	if (i == j+1)
//	{
//		printf("%d������\n", x);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	judge(a);//�ж�����
//	return 0;
//}

//��һ�������������100-200
//#include<math.h>
//int isprime(int x)
//{
//	int isprime = 1;
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//		{
//			isprime = 0;
//		}
//	}
//	return isprime;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (isprime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//дһ��������ʵ��һ��������������Ķ��ֲ���
//int seek(int ar[],int y,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (ar[mid] > y)
//			right = mid - 1;
//		else if (ar[mid] < y)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int x = 12;
//	int s = 0;
//	int ar[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(ar) / sizeof(ar[0]);
//	s=seek(ar, x,sz);
//	if (s!=-1)
//		printf("�ҵ��ˣ��±�Ϊ%d\n", s);
//	else
//		printf("û�ҵ�\n");
//	return 0;
//}

//дһ��������ÿ����һ�κ������ͻὫnum��1
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

//printf ����ֵΪ����ַ�����������ת���ַ���
//int main()
//{
//	printf("%d\n",printf("%d",printf("%d",43)));
//	int a=printf("%d\n", 43);
//	printf("%d\n", a);
//	return 0;
//}

//�����������붨��
//��������.h�ļ����������.c�ļ�
//����ʱ����ͷ�ļ�#include "xxx.h"
//#include "Add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int x=Add(a, b);
//	printf("%d\n", x);
//	return 0;
//}

//�ݹ���� ��ӡ����
//void print(int x)
//{
//	if (x > 9)
//	{		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	unsigned int s = 0;
//	scanf("%d", &s);
//	print(s);
//	return 0;
//}

//�ݹ� ���ַ�������
//1.������ʱ����count��������
// int my_strlen(char* p)
//{
//	int count = 0;
//	while(*p!='\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//2.���õݹ�ķ�ʽ����������
int my_strlen(char* p)
{
	if (*p != '\0')
		return 1 + my_strlen(p + 1);
	else
		return 0;
}
int main()
{
	char ar[] = "bit";
	int len=my_strlen(ar);
	printf("len=%d\n", len);
	return 0;
}

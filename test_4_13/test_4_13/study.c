#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//打印九九乘法表
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

//求10个整数中的最大值
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

//分数求和
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

//数一下1-100的所有整数中出现多少个数字9
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

//打印100-200之间的素数
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

//求1000-2000间的闰年
//1.能被4整除且不能被100整除是闰年
//2.能被400整除是闰年
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

//求两数的最大公约数
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

//1-100内3的倍数
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

//猜数字游戏
//#include<stdlib.h>
//#include<math.h>
//void mian()
//{
//	printf("*************************************\n");
//	printf("*************************************\n");
//	printf("****** 1:开始游戏  0:退出游戏 *******\n");
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
//		printf("请猜数字：");
//		scanf("%d", &c);
//		if (c < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (c > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//			printf("猜对了\n");
//	}
//}
//int main()
//{
//	int x = 0;
//	srand((unsigned int)time(0));
//	mian();
//	do
//	{
//		printf("请输入(1/0)>:");
//		scanf("%d", &x);
//		switch (x)
//		{
//		case 1:
//			printf("进入猜数字游戏\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
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

//写一个函数交换两个数
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

//写一个函数判断一个数是不是素数
//#include<math.h>
//void judge(int x)
//{
//	int i = 0;
//	int j = sqrt(x);
//	for (i = 2; i <=j ; i++)
//	{
//		if (x % i == 0)
//		{
//			printf("%d不是素数\n", x);
//			break;
//		}
//	}
//	if (i == j+1)
//	{
//		printf("%d是素数\n", x);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	judge(a);//判断素数
//	return 0;
//}

//用一个函数输出素数100-200
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

//写一个函数，实现一个整形有序数组的二分查找
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
//		printf("找到了，下标为%d\n", s);
//	else
//		printf("没找到\n");
//	return 0;
//}

//写一个函数，每调用一次函数，就会将num加1
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

//printf 返回值为输出字符总数（包括转义字符）
//int main()
//{
//	printf("%d\n",printf("%d",printf("%d",43)));
//	int a=printf("%d\n", 43);
//	printf("%d\n", a);
//	return 0;
//}

//函数的声明与定义
//声明放在.h文件，定义放在.c文件
//调用时加上头文件#include "xxx.h"
//#include "Add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int x=Add(a, b);
//	printf("%d\n", x);
//	return 0;
//}

//递归输出 打印数字
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

//递归 求字符串长度
//1.采用临时变量count创建函数
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
//2.采用递归的方式来创建函数
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

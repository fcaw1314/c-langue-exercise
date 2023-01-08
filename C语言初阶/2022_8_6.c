z`z`#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include <ctype.h>

//字母大小写转换
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isupper(ch))//isupper判断大写字母
//		{
//			printf("%c\n", tolower(ch));//tolower是转小写字母
//		}
//		else if (islower(ch))//判断小写
//		{
//			printf("%c\n", toupper(ch));//toupper是转大写字母
//		}
//	}
//	return 0;
//}

////写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整形一维数组。
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ",*(arr+i));
//		printf("%d ", *arr);
//		arr++;
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = (sizeof(arr) / sizeof(arr[0]));
//	print(arr, sz);
//	return 0;
//}

//用C语言在屏幕上输出以下图案：菱形图案
//int main()
//{
//	//上
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//先打印空格
//		//打印*
//		int j = 0;
//		for (j = 0; j < line - 1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//



//打印水仙花数
//求出0～100000之间的所有“水仙花数”并输出。
//
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include<math.h>
////引用pow函数
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//判断i是否为自幂数
//		//计算i的位数n
//		int n = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2、得到的i的每一位；求出一位的n次方和；
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow((tmp%10), n);
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//
//例如：2 + 22 + 222 + 2222 + 22222

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int i = 0;
	int k = 0;
	int sum = 0;
	for (i = 0; i < b; i++)
	{
		k = k * 10 + a;
		sum += k;
	}
	printf("%d\n", sum);
	return 0;
}














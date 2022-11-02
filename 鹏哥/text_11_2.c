#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main()
//{
//	int i;
//	double max = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if(i%2==0)
//		max -= (1.0 / i);
//		if (i % 2 != 0)
//			max += (1.0 / i);
//	}
//	printf("%lf",max);
//	return 0;
//}
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i == 9 || i % 9 == 0 || i / 9 == 0)
//			count++;
//	}
//	printf("1-100的所有整数中出现了   %d    个数字9",count);
//	return 0;
//}
//完成上课的猜数字游戏





//1.生成随机数
//2.猜数字
//#include <stdlib.h>
//#include <time.h>
//void menu1()
//{
//	printf("**************************************\n");
//	printf("*************   1.play   *************\n");
//	printf("*************   0.exit   *************\n");
//	printf("**************************************\n");
//}
//void game1()
//{
//	printf("开始游戏\n");
//	//1.生成随机数
//	int temp = rand()%100+1;
////	printf("%d\n",temp);
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字；");
//		scanf("%d", &guess);
//		if (guess > temp)
//			printf("猜大了\n");
//		else if (guess < temp)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	 srand((unsigned int)time(NULL));
//	do
//	{
//		menu1();
//		printf("请选择->");
//		scanf("%d", &input);
//		
//		if (input == 1)
//			game1();
//		else if(input == 0)
//			break;
//		else
//		printf("输入错误，请重新选择\n");
//	} while (input);
//	return 0;
//}
//二分查找
//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int left = 0;
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	while(left<=right)
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
			printf("找到了，下标是   %d  \n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到了\n");
	}
	return 0;
}
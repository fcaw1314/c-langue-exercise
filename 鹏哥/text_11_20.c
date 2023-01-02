#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//打印整数二进制的奇数位和偶数位
//	int num = 0;
//	printf("请输入一个数:");
//	scanf("%d", &num);
//	printf("奇数位：");
//	for (int i = 31; i >= 1; i -= 2) 
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//
//	return 0;
//}
//不允许创建临时变量，交换两个整数的内容
//int main()
//{
//    int a = 10;
//    int b = 20;
//    printf("交换前:a = %d b = %d\n", a, b);
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//    printf("交换后:a = %d b = %d\n", a, b);
//    return 0;
//}


//写一个函数返回参数二进制中 1 的个数
//int count_bit(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
int count_bit(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int num = count_bit(n);
	printf("%d\n", num);
	return 0;
}


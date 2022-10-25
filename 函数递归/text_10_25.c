#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void print(unsigned int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	unsigned int sum = 0;
//	scanf("%u", &sum);//无符号整形的标志%d
//	print(sum);//利用递归
//	return 0;
//}
//int my_strlen(char *str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
////编写函数不允许创建临时变量，求字符串的长度
//int main()
//{
//	char arr[] = { "dongjiaxinzuibiaoliang" };
//	//模拟strlen（）函数
//	printf("%d ",my_strlen(arr));
//	return 0;
//}
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int sum = 0;
//	scanf("%d",&sum);
//	int ret = Fac(sum);
//	printf("%d\n",ret);
//	return 0;
//}
//打印九九乘法表
int main()
{
	int i = 1;
	int j = 1;
	//打印行
	for (i=1;i<=9;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}

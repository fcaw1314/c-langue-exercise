#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//编写一个函数实现n的k次方，使用递归实现。
double Power(int n,int k)
{
	if (k == 0)
		return 1;
	if (k > 0)
		return n * Power(n, k - 1);
	/*if (k < 0)
		return 1.0 / n * Power(n, k - 1);*/
}


//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入两个数字，实现n的k次方；\n");
//	scanf("%d%d", &n,&k);
//	double ret = Power(n,k);
//	printf("他的答案是；%lf", ret);
//	return 0;
//}
////* 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//输入：1729，输出：19*/
int DigitSum(int a)
{
	if (a < 10)
		return a % 10;
	else
		return a %10 + DigitSum(a / 10);
}
//int main()
//{
//	int a = 0;
//	printf("请输入一个非负整数，返回组成他的数字之和；");
//	scanf("%d", &a);
//	int ret = DigitSum(a);
//	printf("答案是；%d", ret);
//	return 0;
//}
//字符串逆序（递归实现）
//编写一个函数 reverse_string(char * string)（递归实现）
//void reverse_string(char* string)
//{
//	if (string != '\0')
//	{
//		return reverse_string(string+1);
//	}
//	else
//		printf("%s", string);
//}
//
void reverse_string(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);

	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr + 1);

	*(arr + len - 1) = tmp;
}
int main()
{
	char arr[] = "abcdefghijklmn";
	printf("逆序的字符串；");
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}
//递归和非递归分别实现求第n个斐波那契数
//int Fac(int a)
//{
//	if (a <= 2)
//		return 1;
//	else
//		return Fac(a - 1) + Fac(a - 2);
//}
//int main()
//{
//	int a = 0;
//	printf("请输入你想输入的斐波那契数；\n");
//	scanf("%d", &a);
//	int ret = Fac(a);
//	printf("答案是；%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("请输入你想输入的斐波那契数；\n");
//	scanf("%d", &a);
//	int b = 1;
//	int c = 1;
//	int ret = 0;
//	while (a)
//	{
//		b = c;
//		c = ret;
//		ret = b + c;
//		a--;
//	}
//	printf("答案是；%d", ret);
//	return 0;
//}
//递归和非递归分别实现strlen
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;
}
//int main()
//{
//	char a[] = "abcd";
//	int ret = my_strlen(a);
//	printf("%d", ret);
//	return 0;
//}

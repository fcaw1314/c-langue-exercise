#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int my_strlen(char *str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//reverse_string(char* str)
//{
//	char tmp = *str;//   1
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//   2
//	*(str + len - 1) = '\0';//   3
//	//判断条件
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);//  4
//	}
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n ",arr);
//	return 0;
//}
int Digitsum(int n)
{
	if (n > 9)
	{
		return Digitsum(n / 10) + n % 10;
	}
	else
	{
		return n;
	}
}
int main01()
{
	int num = 1729;
	int sum = Digitsum(num);
	printf("%d\n", sum);
	return 0;
}
//编写一个n的k次方，用递归实现
double Pow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else
	{
		return 1.0 / (Pow(n, -k));
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d",&n,&k);
	double sum = Pow(n,k);
	printf("%lf\n",sum);
	return 0;
}
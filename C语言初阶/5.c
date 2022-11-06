#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i;
//	for (i=1;i<100;i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n",i);
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d",&a,&b,&c);
//	int temp = 0;
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//打印100-200之间的素数
int main()
{
	int i, j;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)break;//被整除，不是素数。 

			if (j >= i)

				printf("%d \n", i);
		}
	}

	return 0;
}
	
//
//打印1000--2000之间的闰年
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 1000; i < 2001; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n",count);
//	return 0;
//}
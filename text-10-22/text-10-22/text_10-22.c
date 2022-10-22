#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//打印1000年-2000年之间的闰年
//能够被4整除并且不能被100整除
//能够被400整除
int main01()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//判断year是不是闰年
		if (year % 4 == 0 )
		{
			if (year % 100 != 0)
			{
				printf("%d ",year);
				count++;
			}
		}
		if (year % 400 == 0 )
		{
			printf("%d ",year);
			count++;
		}
	} 	
	printf("\n count = %d\n",count);
	return 0;
}
int main02()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		{
			printf( " %d ",year);
			count++;
		}
	}
	printf("\ncount= %d\n",count);
	return 0;
}
//打印出100-200的素数
//素数=质数
//素数是=只能被1和本身整除
int main()
{
	int i=0;
	int j;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		//判断2---i-1之间的数字去除i，看能不能整除
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			count++;
			printf("%d ",i);//素数
		}
	}	
		printf("\ncount=  %d\n",count);
	return 0;
}
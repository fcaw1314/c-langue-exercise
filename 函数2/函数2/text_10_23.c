#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <math.h>
//sqrt�����ǿ�ƽ����������Ҫ����#include<math.c>����
//int is_prime_number(int n)
//{
//	int i;
//	for (i = 2; i <= sqrt(n) ; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//��ӡ/100-200֮�������
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{ //�ж��Ƿ�Ϊ����
//		if ((is_prime_number(i)) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount= %d\n",count);
//	return 0;
//int is_leap_year(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0)
//		return 1;
//	else if (n % 400 == 0)
//		return 1;
//	else
////		return 0;
////}
//int is_leap_year(int n)
//{
//	//	if (n % 4 == 0 && n / 100 != 0)
//	//		return 1;
//	//	else if (n % 400 == 0)
//	//		return 1;
//	//	else
//	//		return 0;	
//	return ((n%4==0&&n%100!=0)||n%400==0);
//}
//
//int main()
//{
//	int j=0;
//	int count = 0;
//	for (j = 1000; j <= 2000; j++)
//	{
//		if ((is_leap_year(j)) == 1)
//		{
//			count++;
//			printf("%d ",j);
//		}
//	}
//	printf("\ncount = %d\n",count);
//}
#include<stdlib.h>
int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s-1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;

		}
	}
	return -1;
}
int main01()
{
//���ַ����������±�
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int key = 8;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//�ҵ��˾ͷ��������±�
	//�Ҳ����ͷ���-1
	int ret = binary_search(arr, key, sz);
	if ( ret  == -1)
	{
		printf("�Ҳ�����\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d \n",ret);
	}
}
int main02()
{
	//printf�������ص��Ǵ�ӡ����Ļ�ϵ��ַ��ĸ���
	printf("%d",printf("%d",printf("%d",43)));
}
#include "add.h"
#include "sub.h"
int main()
{
	int a = 10;
	int b = 20;
	//int c = Add(a, b);
	int c = Sub(a, b);
	printf("%d ",c);
	return 0;
}
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
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
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
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i == 9 || i % 9 == 0 || i / 9 == 0)
//			count++;
//	}
//	printf("1-100�����������г�����   %d    ������9",count);
//	return 0;
//}
//����ϿεĲ�������Ϸ





//1.���������
//2.������
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
//	printf("��ʼ��Ϸ\n");
//	//1.���������
//	int temp = rand()%100+1;
////	printf("%d\n",temp);
//	int guess = 0;
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess > temp)
//			printf("�´���\n");
//		else if (guess < temp)
//			printf("��С��\n");
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��->");
//		scanf("%d", &input);
//		
//		if (input == 1)
//			game1();
//		else if(input == 0)
//			break;
//		else
//		printf("�������������ѡ��\n");
//	} while (input);
//	return 0;
//}
//���ֲ���
//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
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
			printf("�ҵ��ˣ��±���   %d  \n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ�����\n");
	}
	return 0;
}
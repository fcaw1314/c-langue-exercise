#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//��ӡ���������Ƶ�����λ��ż��λ
//	int num = 0;
//	printf("������һ����:");
//	scanf("%d", &num);
//	printf("����λ��");
//	for (int i = 31; i >= 1; i -= 2) 
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ��");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//
//	return 0;
//}
//����������ʱ������������������������
//int main()
//{
//    int a = 10;
//    int b = 20;
//    printf("����ǰ:a = %d b = %d\n", a, b);
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//    printf("������:a = %d b = %d\n", a, b);
//    return 0;
//}


//дһ���������ز����������� 1 �ĸ���
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


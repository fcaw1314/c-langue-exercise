z`z`#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include <ctype.h>

//��ĸ��Сдת��
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isupper(ch))//isupper�жϴ�д��ĸ
//		{
//			printf("%c\n", tolower(ch));//tolower��תСд��ĸ
//		}
//		else if (islower(ch))//�ж�Сд
//		{
//			printf("%c\n", toupper(ch));//toupper��ת��д��ĸ
//		}
//	}
//	return 0;
//}

////дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά���顣
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ",*(arr+i));
//		printf("%d ", *arr);
//		arr++;
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = (sizeof(arr) / sizeof(arr[0]));
//	print(arr, sz);
//	return 0;
//}

//��C��������Ļ���������ͼ��������ͼ��
//int main()
//{
//	//��
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//�ȴ�ӡ�ո�
//		//��ӡ*
//		int j = 0;
//		for (j = 0; j < line - 1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//



//��ӡˮ�ɻ���
//���0��100000֮������С�ˮ�ɻ������������
//
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//#include<math.h>
////����pow����
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊ������
//		//����i��λ��n
//		int n = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2���õ���i��ÿһλ�����һλ��n�η��ͣ�
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow((tmp%10), n);
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//
//���磺2 + 22 + 222 + 2222 + 22222

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int i = 0;
	int k = 0;
	int sum = 0;
	for (i = 0; i < b; i++)
	{
		k = k * 10 + a;
		sum += k;
	}
	printf("%d\n", sum);
	return 0;
}














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
//	scanf("%u", &sum);//�޷������εı�־%d
//	print(sum);//���õݹ�
//	return 0;
//}
//int my_strlen(char *str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
////��д��������������ʱ���������ַ����ĳ���
//int main()
//{
//	char arr[] = { "dongjiaxinzuibiaoliang" };
//	//ģ��strlen��������
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
//��ӡ�žų˷���
int main()
{
	int i = 1;
	int j = 1;
	//��ӡ��
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

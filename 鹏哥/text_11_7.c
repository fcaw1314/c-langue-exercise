#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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
//	printf("�������������֣�ʵ��n��k�η���\n");
//	scanf("%d%d", &n,&k);
//	double ret = Power(n,k);
//	printf("���Ĵ��ǣ�%lf", ret);
//	return 0;
//}
////* дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//���룺1729�������19*/
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
//	printf("������һ���Ǹ����������������������֮�ͣ�");
//	scanf("%d", &a);
//	int ret = DigitSum(a);
//	printf("���ǣ�%d", ret);
//	return 0;
//}
//�ַ������򣨵ݹ�ʵ�֣�
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
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
	printf("������ַ�����");
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
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
//	printf("���������������쳲���������\n");
//	scanf("%d", &a);
//	int ret = Fac(a);
//	printf("���ǣ�%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("���������������쳲���������\n");
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
//	printf("���ǣ�%d", ret);
//	return 0;
//}
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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

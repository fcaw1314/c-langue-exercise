#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void menu()
//{
//	printf("***************************\n");
//	printf("*******1.add    2.sub******\n");
//	printf("*******3.mul    4.div******\n");
//	printf("*******0.exit        ******\n");
//	printf("***************************\n");
//
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void calc(int (*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������������������>");
//	scanf("%d %d", &x, &y);
//	ret = p(x, y);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("�����������������\n");
//		}
//	} while (input);
//	return 0;
//}

#include<stdlib.h>

//����qsort����������������
void print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz ; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
void text1()
{
	int arr[] = { 5,6,4,3,8,9,2,1,7,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr,sz);
}
//void qsort(void* base,  //���������ݵ���ʼ��ַ
//           size_t num,  //���������ݵ�Ԫ�ظ���
//           size_t size, //������Ԫ�����ݵ�Ԫ�ش�С����λ���ֽڣ�
	//       int (*compar)(const void*, const void*));���Ƚ�����Ԫ�ش�С�ĺ���ָ�룩
struct Stu
{
	char name[20];
	int age;
};
void text2()
{
	struct Stu s[] = { {"zhangsan",20},{"wangwu",40},{"lisi",55} };
}
int main()
{
	text1();//����qsort����������������
	text2();//����qsort��������ṹ������
	return 0;
}
















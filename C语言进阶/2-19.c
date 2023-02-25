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
//	printf("请输入两个擦作数：>");
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
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//	return 0;
//}

#include<stdlib.h>

//测试qsort函数排序整形数据
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
//void qsort(void* base,  //待排序数据的起始地址
//           size_t num,  //待排序数据的元素个数
//           size_t size, //待排序元素数据的元素大小（单位是字节）
	//       int (*compar)(const void*, const void*));（比较两个元素大小的函数指针）
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
	text1();//测试qsort函数排序整形数据
	text2();//测试qsort函数排序结构体数据
	return 0;
}
















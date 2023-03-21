#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//枚举类型
//
//enum Color
//{
//	//枚举的可能取值
//	//每一个可能的取值是常量
//	RED = 5,
//	GREEN = 7,
//	BLUE = 10
//};
//
//int main()
//{
//	//enum Color color = 5;
//	//int num = RED;
//	//printf("%d\n", RED);
//	//printf("%d\n", GREEN);
//	//printf("%d\n", BLUE);
//	//printf("%d\n", num);
//
//	//int sum = RED + BLUE;
//	//printf("%d\n", sum);
//	
//	printf("%d\n", sizeof(enum Color));
//
//	return 0;
//}
//


//
//enum Color
//{
//	//枚举的可能取值
//	//每一个可能的取值是常量
//	RED = 5,
//	GREEN = 7,
//	BLUE = 10
//};
//
//#define RED 5
//#define GREEN 7
//#define BLUE 10
//
//int main()
//{
//	int num = 5;
//	return 0;
//}
//
//C++ 

//
//union Un
//{
//	char c;//1
//	int i;//4
//	double d;//8
//};
//
//int main()
//{
//	union Un un;
//	printf("%p\n", &un);
//	printf("%p\n", &(un.c));
//	printf("%p\n", &(un.i));
//	printf("%p\n", &(un.d));
//
//
//	/*printf("%d\n", sizeof(union Un));
//	printf("%d\n", sizeof(un));*/
//
//
//	return 0;
//}

//
//int main()
//{
//	//int num = 0x11223344;
//	int num = 1;
//	char* p = (char*)&num;//int*
//
//	if (*p == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}


//int check_sys()
//{
//	int num = 1;
//	char* p = (char*)&num;//int*
//
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	//int num = 0x11223344;
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

//int check_sys()
//{
//	int num = 1;
//	return *(char*)&num;
//}

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	//int num = 0x11223344;
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

//union Un
//{
//	char arr[5];//5 1 8 1
//	int i;//4 4
//};
//

//union Un
//{
//	short s[7];//14 2 8 2
//	int i;//4 8 4
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//
//	return 0;
//}
//

//int main()
//{
//	int num = 10;//向内存申请了4个字节
//	int arr[10];//向内存申请了40个字节
//
//	return 0;
//}
#include <stdlib.h>
#include <errno.h>
#include <string.h>

//int main()
//{
//	//int arr[10];//向内存申请了40个字节
//	int* p = (int*)malloc(10*sizeof(int));
//	int* ptr = p;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*ptr = i;
//		ptr++;
//	}
//
//	//释放
//	free(p);
//	p = NULL;
//  ptr = NULL;
//	return 0;
//}


//int main()
//{
//	while (1)
//	{
//		malloc(10);
//	}
//	return 0;
//}

//calloc
//
int main()
{

	int* p = (int*)malloc(10* sizeof(int));

	if (p == NULL)
	{
		perror("calloc");
		return 1;
	}

	free(p);
	p = NULL;

	return 0;
}

//calloc = malloc+memset


//
//int test()
//{
//	int*p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//
//		return 1;
//	}
//	//...使用
//	if (1)
//		return 2;
//
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}
////内存泄漏
//
//int main()
//{
//	test();
//	return 0;
//}
//
//void test()
//{
//	int num = 10;
//    //
//
//}
//
//int main()
//{
//	{
//		int a = 10;
//		printf("a=%d\n", a);
//	}
//
//	printf("a=%d\n", a);
//
//	return 0;
//}
//

//int main()
//{
//	int num = 10;
//	int* p = NULL;
//
//
//	free(p);
//	p = NULL;
//	
//	return 0;
//}
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//		return 1;
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//增加空间
//	int* ptr = (int*)realloc(p, 80);
//	//当realloc开辟失败的是，返回的是NULL
//	//....
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	
//	for (i = 10; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//	
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int*p = (int*)realloc(NULL, 40);//等价于malloc(40);
//	return 0;
//}
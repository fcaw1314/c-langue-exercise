#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>


//对NULL指针的解引用操作

//int main()
//{
//	int *p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	else
//	{
//		*p = 5;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//对动态开辟空间的越界访问

//
//int main()
//{
//	int*p = (int*)malloc(20);
//	if (p == NULL)
//		return 1;
//	//使用
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//		//p[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int*p = &num;
//
//	//.....
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//		return 1;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;
//	}
//	//释放
//	//在释放的时候，p指向的不再是动态内存空间的起始位置
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//对同一块动态内存多次释放
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//		return 1;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	
//	free(p);
//	p = NULL;
//
//	free(p);
//
//	return 0;
//}


//void get_memory()
//{
//	int* p = (int*)malloc(40);
//	//....
//	free(p);
//	p = NULL;
//}

//函数会返回动态开辟空间的地址，记得在使用之后返回
//int* get_memory()
//{
//	int* p = (int*)malloc(40);
//	//....
//	return p;
//}
//
//
//int main()
//{
//	int *ptr = get_memory();
//	//使用
//
//	//释放
//	free(ptr);
//	ptr = NULL;
//
//	return 0;
//}

#include <string.h>


//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//

//ok
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	//释放
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//ok
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//err
//void GetMemory(char* p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//


//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int*p  = test();
//	printf("hehe\n");
//	printf("%d\n", *p);
//
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//
//	//free(str);
//	//str = NULL;
//}

//int main()
//{
//	Test();
// //......
//	return 0;
//}


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//
//	if (str != NULL)
//	{
//		//str是野指针，这里就是非法访问
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	if (str == NULL)
//		return;
//
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//
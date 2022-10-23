#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
int main01()
{
	char arr1[] = "diplomat";
	char arr2[20] = {0};
	//使用strcpy函数需要引用#include<string.h>头文件--拷贝
	strcpy(arr2, arr1);//将arr1拷贝到arr2中；
		printf("%s\n",arr2);
	return 0;
}
int main()
{
	char arr[] = "hello world";
	//memset函数是将arr中的前六个字节设置成x
	memset(arr, 'x', 6);
	printf("%s\n",arr);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
int main01()
{
	char arr1[] = "diplomat";
	char arr2[20] = {0};
	//ʹ��strcpy������Ҫ����#include<string.h>ͷ�ļ�--����
	strcpy(arr2, arr1);//��arr1������arr2�У�
		printf("%s\n",arr2);
	return 0;
}
int main()
{
	char arr[] = "hello world";
	//memset�����ǽ�arr�е�ǰ�����ֽ����ó�x
	memset(arr, 'x', 6);
	printf("%s\n",arr);
	return 0;
}
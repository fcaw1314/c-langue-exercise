#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//最小公倍数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int i = 1;
//	while ( a * i % b != 0 )
//	{
//		i++;
//	}
//	printf("最小公倍数是=%d\n", a * i);
//	return 0;
//}

//逆序字符串
//例；i like beijing.
//结果:beijing. like i
//#include<assert.h>//断言，防止为空指针
//#include<string.h>
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	if (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[101] = { 0 };
//	gets(arr);
//	char* cur = arr;
//	//处理每个单词
//	while (*cur)
//	{
//		char* start = cur;
//		char* end = cur;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//			if (*end != '\0')
//				cur = end + 1;
//			else
//				cur = end;
//	}
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);
//	printf("%s\n", arr);
//	return 0;
//
//}
#include <stdio.h>
#include <assert.h>
#include <string.h>

void reverse(char* left, char* right)
{
    assert(left);
    assert(right);

    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

int main()
{
    char arr[101] = { 0 };
    gets(arr);
    //处理
    char* cur = arr;
    //逆序每个单词
    while (*cur)
    {
        char* start = cur;
        char* end = cur;
        while (*end != ' ' && *end != '\0')
        {
            end++;
        }
        reverse(start, end - 1);
        if (*end != '\0')
            cur = end + 1;
        else
            cur = end;
    }
    //逆序整个字符串
    int len = strlen(arr);
    reverse(arr, arr + len - 1);

    printf("%s\n", arr);

    return 0;
}
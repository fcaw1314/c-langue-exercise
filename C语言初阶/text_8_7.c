#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��С������
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
//	printf("��С��������=%d\n", a * i);
//	return 0;
//}

//�����ַ���
//����i like beijing.
//���:beijing. like i
//#include<assert.h>//���ԣ���ֹΪ��ָ��
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
//	//����ÿ������
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
    //����
    char* cur = arr;
    //����ÿ������
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
    //���������ַ���
    int len = strlen(arr);
    reverse(arr, arr + len - 1);

    printf("%s\n", arr);

    return 0;
}
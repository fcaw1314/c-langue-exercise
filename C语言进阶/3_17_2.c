#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}
//

//strlen
//string length
//求字符串长度的，统计的是字符串中\0之前出现的字符个数

#include <string.h>

//int main()
//{
//	//a b c \0 d e f \0
//	//char arr[] = "abc\0def";
//
//	char arr[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr));
//
//	return 0;
//}

//
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//		printf(">\n");
//	else
//		printf("<\n");
//
//	return 0;
//}
#include <assert.h>

//size_t my_strlen(const char* str)
//{
//	assert(str);
//	const char* start = str;
//	const char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}



//int main()
//{
//	char arr[10] = "xxxxxxxxx";
//	//const char* p = "abcdef";
//	char arr2[] = { 'b', 'i','\0', 't'};
//
//	//strcpy(arr, p);
//	strcpy(arr, arr2);
//
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main()
//{
//	char arr[3] = {0};
//	char arr2[] = "abcdef";
//
//	strcpy(arr, arr2);
//
//	printf("%s\n", arr);
//
//	return 0;
//}

//错误的示范
//int main()
//{
//	char* p = "hello world";//常量字符串
//	char arr2[] = "abcdef";
//
//	strcpy(p, arr2);
//
//	printf("%s\n", p);
//
//	return 0;
//}

//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] =   "hello bit";
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}
//
//
//char* my_strcat(char* dest, const char*src)
//{
//	//1.找目标空间中的\0
//	char* cur = dest;
//	while (*cur)
//	{
//		cur++;
//	}
//	//2.拷贝源头数据到\0之后的空间
//	while (*cur++ = *src++)
//	{
//		;
//	}
//
//	return dest;
//}
//
//int main()
//{
//	char arr1[20] = "bit";
//	my_strcat(arr1, arr1);
//
//	//char arr1[20] = "hello ";
//	//char arr2[] = "world";
//	//printf("%s\n", my_strcat(arr1, arr2));
//
//	return 0;
//}
//

//int my_strcmp(const char*s1, const char*s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	if (*s1 > *s2)
//		return 1;
//	else
//		return -1;
//}
//
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	/*char arr1[] = "abcdef";
//	char arr2[] = "abq";*/
//
//	//char arr1[] = "abcd";
//	//char arr2[] = "abc";
//
//	char arr1[] = "abc";
//	char arr2[] = "abc";
//
//	//char arr1[] = { 'a', 'b', 'c' };
//	//char arr2[] = { 'a', 'b', 'c' };
//
//	int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//		printf("arr1<arr2\n");
//	else if(ret>0)
//		printf("arr1>arr2\n");
//	else
//		printf("arr1==arr2\n");
//
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//int main()
//{
//	char arr1[20] = "abcdefghi";
//	char arr2[] = "xxxx";
//	strncpy(arr1, arr2, 8);
//	printf("%s\n", arr1);
//
//	return 0;
//}
//


//int main()
//{
//	char arr1[20] = "abcdef\0qqqqqq";
//	char arr2[] = "xyz";
//	strncat(arr1, arr2, 2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "abc";
//	strncat(arr1, arr1, 3);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	int ret = strncmp("abcdef", "abc", 4);
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//暴力求解
//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//	if (*str2 == '\0')
//	{
//		return str1;
//	}
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1!='\0' && *s2!='\0' && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;//找到了
//		}
//		p++;
//	}
//	return NULL;//找不到子串
//}
////
////KMP 算法 - B站搜索：比特大博哥
////难度也比较大一些
////
//int main()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "cde";
//
//	char* p = (char *)my_strstr(arr1, arr2);
//	if (p == NULL)
//	{
//		printf("不存在\n");
//	}
//	else
//	{
//		printf("%s\n", p);
//	}
//	return 0;
//}
//
//int main()
//{
//	long long a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	long long s = a * b;
//	printf("%lld\n", s);
//
//	return 0;
//}
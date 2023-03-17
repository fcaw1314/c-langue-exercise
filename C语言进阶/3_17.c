#define _CRT_SECURE_NO_WARNINGS 1

//杨氏矩阵
//1 2 3 
//4 5 6
//7 8 9
//
//1 2 3
//2 3 4
//3 4 5  
// 
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);//不能简单的遍历数组
#include <stdio.h>
struct Point
{
    int x;
    int y;
};
//
//void find_num_in_young(int arr[3][3], int k, int r, int c)
//{
//	int i = 0;
//	int j = c - 1;
//	int flag = 0;
//	while (i<=r-1 && j>=0)
//	{
//		if (arr[i][j] < k)
//		{
//			i++;
//		}
//		else if (arr[i][j] > k)
//		{
//			j--;
//		}
//		else
//		{
//			//找到了
//			flag = 1;
//			printf("找到了，下标是:%d %d\n", i, j);
//			break;
//		}
//	}
//	if(flag == 0)
//		printf("找不到了\n");
//}

//
//void find_num_in_young(int arr[3][3], int k, int *px, int *py)
//{
//	int i = 0;
//	int j = *py - 1;
//	int flag = 0;
//	while (i <= *px - 1 && j >= 0)
//	{
//		if (arr[i][j] < k)
//		{
//			i++;
//		}
//		else if (arr[i][j] > k)
//		{
//			j--;
//		}
//		else
//		{
//			//找到了
//			flag = 1;
//			*px = i;
//			*py = j;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		*px = -1;
//		*py = -1;
//	}
//}
//
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);//输入要查找的数字
//	//遍历数组
//	int x = 3;
//	int y = 3;
//	//返回型参数
//	find_num_in_young(arr, k, &x, &y);
//	if (x == -1 && y == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是：%d %d\n", x, y);
//
//	return 0;
//}
//

//实现一个函数，可以左旋字符串中的k个字符
//abcdefghi
//cdefghiab
//
//abcdefghi
//bcdefghia
//cdefghiab
#include <string.h>

//void left_move(char arr[], int k)
//{
//	//每一次只旋转一个字符，把这个动作执行K次
//	int i = 0;
//	int len = strlen(arr);
//	k %= len;
//	for (i = 0; i < k; i++)
//	{
//		//1
//		char tmp = arr[0];
//		//2 把后边的字符全部往前挪动一个位置
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		//3 
//		arr[len - 1] = tmp;
//	}
//}
#include <assert.h>
//
//void reverse(char*left, char*right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char arr[], int k)
//{
//	//每一次只旋转一个字符，把这个动作执行K次
//	int i = 0;
//	int len = strlen(arr);
//	k %= len;
//	reverse(arr, arr+k-1);
//	reverse(arr+k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//
////abcdefghi
////baihgfedc
////cdefghiab
//int main()
//{
//	char arr[] = "abcdefghi";
//	int k = 0;
//	scanf("%d", &k);
//	
//	left_move(arr, k);
//	
//	printf("%s\n", arr);
//
//	return 0;
//}
//

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//int is_left_move(char arr1[], char arr2[])
//{
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = arr1[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//		if (strcmp(arr1, arr2) == 0)
//		{
//			return 1;
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "ABCDEF";
//	char arr2[] = "CDEFAb";
//	int ret = is_left_move(arr1, arr2);//判断arr2是否是arr1旋转得到的
//	if (1 == ret)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}
// 
// 
// 
//int is_left_move(char arr1[], char arr2[])
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//		return 0;
//
//	strncat(arr1, arr1, len1);
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//
////ABCDEF
////ABCDEFABCDEF
//int main()
//{
//	char arr1[20] = "ABCDEF";
//	char arr2[] = "CDEF";
//	int ret = is_left_move(arr1, arr2);//判断arr2是否是arr1旋转得到的
//	if (1 == ret)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}


//int main()
//{
//	int(*(*F)(int, int));
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

int main()
{
    int a[5] = { 5, 4, 3, 2, 1 };
    int* ptr = (int*)(&a + 1);
    printf("%d,%d", *(a + 1), *(ptr - 1));
    return 0;
}


#include <stdio.h>

int main()
{
    int n = 0;
    while (scanf("%d", &n) == 1)
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
    }
    return 0;
}


#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n + 1];//变长数组-c99
    int i = 0;
    //输入n个数字
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k = 0;
    scanf("%d", &k);
    //插入
    int j = n - 1;
    for (; j >= 0; j--)
    {
        if (arr[j] > k)
        {
            arr[j + 1] = arr[j];
        }
        else
        {
            break;
        }
    }
    arr[j + 1] = k;
    for (j = 0; j < n + 1; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    while (scanf("%d %d %d", &a, &b, &c) == 3)
    {
        if (a + b > c && a + c > b && b + c > a)
        {
            //三角形
            if (a == b && b == c)
            {
                printf("Equilateral triangle!\n");
            }
            else if ((a == b && b != c) || (a == c && a != b) || (b == c && b != a))
            {
                printf("Isosceles triangle!\n");
            }
            else
            {
                printf("Ordinary triangle!\n");
            }
        }
        else
        {
            printf("Not a triangle!\n");
        }
    }
    return 0;
}

#include <stdio.h>

/*
int main()
{
    int ch = 0;
    int countA = 0;
    int countB = 0;

    while((ch=getchar()) != '0')
    {
        if(ch == 'A')
            countA++;
        else if(ch == 'B')
            countB++;
    }
    if(countA>countB)
        printf("A\n");
    else if(countA<countB)
        printf("B\n");
    else
        printf("E\n");

    return 0;
}
*/

int main()
{
    int ch = 0;
    int count = 0;
    //A ++
    //B --
    while ((ch = getchar()) != '0')
    {
        if (ch == 'A')
            count++;
        else if (ch == 'B')
            count--;
    }
    if (count > 0)
        printf("A\n");
    else if (count < 0)
        printf("B\n");
    else
        printf("E\n");

    return 0;
}
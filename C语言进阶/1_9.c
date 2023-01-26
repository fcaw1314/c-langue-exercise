#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}


//判断大小端
//int main()
//{
//	int a = 1;               //00000000000000000000000000000001
//	char* p = (char*)&a;
//	if (*p == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//#include<windows.h>
//int main()
//{
//	int a[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	
//	}
//	
//	printf("%d", strlen(a));
//}


//模拟指针数组
int main()
{
	int i = 0;
	int j = 0;
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 2,3,4,5,6 };
	int arr3[5] = { 3,4,5,6,7 };
	int* arr[3] = { arr1,arr2,arr3 };
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}



























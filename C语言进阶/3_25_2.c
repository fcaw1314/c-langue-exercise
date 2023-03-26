#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
////2
//#define MAX(x, y) ((x)>(y)?(x):(y))
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的方式
//	int m1 = Max(a, b);
//	printf("m1 = %d\n", m1);
//
//	int m2 = MAX(a, b);
//	int m2 = ((a) > (b) ? (a) : (b));
//	printf("m2 = %d\n", m2);
//
//	return 0;
//}

//#define MALLOC(num, type)     (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	//int*p = (int*)malloc(10*sizeof(int));
//	int*p2 = MALLOC(10, int);
//
//	return 0;
//}

//int main()
//{
//	test(2+3);//函数
//	TEST(2 + 3);
//	return 0;
//}


#include <stdio.h>
//
//#define M 100
//
//int main()
//{
//	printf("%d\n", M);
//
//#undef M
//	printf("%d\n", M);
//
//	return 0;
//}

//
//#include <stdio.h>
////#define __DEBUG__
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef __DEBUG__
//		printf("%d\n", arr[i]);//为了观察数组是否赋值成功。
//#endif //__DEBUG__
//	}
//	return 0;
//}

//条件编译指令

//#include <stdio.h>
//#include "add.h"
//
//
//int main()
//{
//	printf("hehe\n");
//
//	return 0;
//}


int main()
{
	int arr[] = {5,1,2,3,4,5,1,2,3,4,6,10};
	//所有数字异或
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//ret 就是5^6的结果，二进制中一定有1
	//计算ret的第几位是1
	int pos = 0;
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	//ret的第pos位是1
	//把arr数组中的每个元素的第pos位为1的数字异或在一起
	int num1 = 0;
	int num2 = 0;

	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			num1 ^= arr[i];
		}
		else
		{
			num2 ^= arr[i];
		}
	}
	printf("%d %d\n", num1, num2);

	return 0;
}


#include <stdlib.h>

//
//my_atoi(NULL)//异常
//my_atoi("")//异常
//my_atoi("    +123")//正常
//my_atoi("-123")//正常
//my_atoi("123abc")//异常
//my_atoi("1111111111111111111111111")//异常
//my_atoi("-1111111111111111111111111")//异常
//
//#include <limits.h>
//#include <ctype.h>
//
//enum Status
//{
//	VALID,
//	INVALID
//};
//
//enum Status status = INVALID;
//
//int my_atoi(const char* str)
//{
//	if (str == NULL)
//	{
//		return 0;
//	}
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	//空白字符
//	while (isspace(*str))
//	{
//		str++;
//	}
//	int flag = 1;//这里应该改成1，如果是0的话，正数如：12345，就转换成0了。
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	else if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	//处理数字字符
//	//-123
//	long long ret = 0;
//	while (isdigit(*str))
//	{
//		ret = ret * 10 + flag*(*str - '0');
//		if (ret<INT_MIN || ret > INT_MAX)
//		{
//			return 0;
//		}
//		str++;
//	}
//	if (*str == '\0')
//	{
//		status = VALID;
//		return (int)ret;
//	}
//	else
//	{
//		return (int)ret;
//	}
//}
//
//int main()
//{
//	int ret = my_atoi("    -12322222222222222222222222222222222");
//	if (status == VALID)
//		printf("合法的转换：%d\n", ret);//-123
//	else
//		printf("非法的数据转换:%d\n", ret);
//
//	return 0;
//}
//
////剑指offer

//
//int main()
//{
//    long num = 0;
//    FILE* fp = NULL;
//    if ((fp = fopen("fname.dat", "r")) == NULL)
//    {
//        printf("Can’t open the file!");
//        exit(0);
//    }
//    while (fgetc(fp) != EOF)
//    {
//        num++;
//    }
//    printf("num=%d\n", num);
//    fclose(fp);
//    return 0;
//}
//
//
//

//test.c文件中包括如下语句：
//
//#define INT_PTR int*
//typedef int* int_ptr;
//
//INT_PTR a, b;
//int *a, b;
//int* a;
//int b;
//
//int_ptr c, d;//指针
//
//
//文件中定义的四个变量，哪个变量不是指针类型？()


//设有以下宏定义:
//
//#define N 4
//
//#define Y(n) ((4+2)*5 + 1) /*这种定义在编程规范中是严格禁止的*/
//
//
//
//则执行语句：z = 2 * (4 + (6* 5 + 1)); 后，z的值为（ ）

//
//#define A 2+2
//#define B 3+3
//#define C A*B
//int main()
//{
//	printf("%d\n", C);
//	return 0;
//}

//
//struct S
//{
//	char a;//0
//	int b;//4
//	char c;//8
//};
//
//
//#define OFFSETOF(s_type, m_name)   (int)&(((s_type*)0)->m_name)
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, b));
//	printf("%d\n", OFFSETOF(struct S, c));
//
//	//printf("%d\n", offsetof(struct S, a));
//	//printf("%d\n", offsetof(struct S, b));
//	//printf("%d\n", offsetof(struct S, c));
//
//	return 0;
//}
//

//
//#define SWAP_BIT(n)  n=(((n&0xaaaaaaaa)>>1) + ((n&0x55555555)<<1))
//
//int main()
//{
//	int a = 15;
//	//00000000000000000000000000001010
//	//00000000000000000000000000000101
//	SWAP_BIT(a);
//	printf("%d\n", a);
//	SWAP_BIT(a);
//	printf("%d\n", a);
//
//	return 0;
//}
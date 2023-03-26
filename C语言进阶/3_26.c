#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//#define N 3+1
//#define Y(n) ((N+1)*n)
//
//int main()
//{
//	printf("%d\n", 2 * (N + Y(5 + 1)));
//
//	return 0;
//}

//https://www.nowcoder.com/questionTerminal/18ecd0ecf5ef4fe9ba3f17f8d00d2d66?pos=11&orderByHotValue=1

#include <stdio.h>
#include <math.h>

//库函数 abs()
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int f1 = 0;
//    int f2 = 1;
//    int f3 = f1 + f2;
//    while (1)
//    {
//        if (n == f2)
//        {
//            printf("0\n");
//            break;
//        }
//        else if (n < f2)
//        {
//            if (abs(f1 - n) < abs(f2 - n))
//            {
//                printf("%d\n", abs(f1 - n));
//            }
//            else
//            {
//                printf("%d\n", abs(f2 - n));
//            }
//            break;
//        }
//        f1 = f2;
//        f2 = f3;
//        f3 = f1 + f2;
//    }
//    return 0;
//}

//https://www.nowcoder.com/questionTerminal/4060ac7e3e404ad1a894ef3e17650423?answerType=1&f=discussion

#include <string.h>

void replaceSpace(char* str, int length) {
    //统计空格的个数
    int space_count = 0;
    char* cur = str;
    while (*cur)
    {
        if (*cur == ' ')
            space_count++;
        cur++;
    }
    //计算end1,end2
    char* end1 = str + length;
    char* end2 = str + length + 2 * space_count;
    while (end1 != end2)
    {
        if (*end1 != ' ')
        {
            *end2-- = *end1--;
        }
        else
        {
            *end2-- = '0';
            *end2-- = '2';
            *end2-- = '%';
            end1--;
        }
    }
}


int main()
{
    char arr[40] = "we are happy";
    int len = strlen(arr);
    replaceSpace(arr, len);
    printf("%s\n", arr);

    return 0;
}

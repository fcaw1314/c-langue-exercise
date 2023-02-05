#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//模拟实现strlen函数


int my_strlen(char* str) 
{
    int count = 0; //创建计数器
    while (*str != '\0') { //对 str 解引用，如果 *str 不是 \0
        str++; // 指针向后移动1位（char）
        count++; // 计数器+1
    }
    return count; //返回计数器
}
//模拟strcpy函数
char* my_strcpy(char* dst, const char* src)
{
    char* cp = dst;
    while (*cp++ = *src++);
    return(dst);
}
int main()
{
    char arr[] = "abcdef";
    int len = my_strlen(arr);
    printf("len = %d\n", len);
    return 0;
}
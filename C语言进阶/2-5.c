#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ģ��ʵ��strlen����


int my_strlen(char* str) 
{
    int count = 0; //����������
    while (*str != '\0') { //�� str �����ã���� *str ���� \0
        str++; // ָ������ƶ�1λ��char��
        count++; // ������+1
    }
    return count; //���ؼ�����
}
//ģ��strcpy����
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
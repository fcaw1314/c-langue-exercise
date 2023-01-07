#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include <ctype.h>

//字母大小写转换
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (isupper(ch))//isupper判断大写字母
		{
			printf("%c\n", tolower(ch));//tolower是转小写字母
		}
		else if (islower(ch))//判断小写
		{
			printf("%c\n", toupper(ch));//toupper是转大写字母
		}
	}
	return 0;
}
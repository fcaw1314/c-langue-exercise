#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include <ctype.h>

//��ĸ��Сдת��
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (isupper(ch))//isupper�жϴ�д��ĸ
		{
			printf("%c\n", tolower(ch));//tolower��תСд��ĸ
		}
		else if (islower(ch))//�ж�Сд
		{
			printf("%c\n", toupper(ch));//toupper��ת��д��ĸ
		}
	}
	return 0;
}
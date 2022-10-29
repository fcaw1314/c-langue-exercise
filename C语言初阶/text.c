#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Add(int x,int y)
{
	int c;
	if (x > y)
	{
		c = x;
	}
	else
		c = y;
	return c;
}
int main()
{
	int a = 0;
	int temp = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	temp=Add(a, b);
	printf("×î´óÖµ£º%d",temp);
	return 0;
}
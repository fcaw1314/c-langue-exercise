#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
struct S
{
	int a;
	int b;
	int c;
	int d;
};

//位段-其中的位其实是二进制位
//
struct A
{
	//4byte - 32bit
	int _a : 2;//30
	int _b : 5;//25
	int _c : 10;//15
	int _d : 30;//
	//4byte- 32bit
};
//
////47bit
////1byte - 8bit
////6byte
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//16
//	printf("%d\n", sizeof(struct A));//8
//
//	return 0;
//}
//

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	//printf("%d\n", sizeof(struct S));

	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;

	return 0;
}
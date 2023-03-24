#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct S
//{
//	char name[10];
//	int age;
//	float score;
//};
//
//
//
//int main()
//{
//	char buf[100] = {0};
//	struct S tmp = { 0 };
//
//	struct S s = { "zhangsan", 20, 95.5f };
//	//能否把这个结构体的数据，转换成字符串
//	//"zhangsan 20 95.5"
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);//以字符串的形式打印
//	printf("%s\n", buf);
//
//	//能否将buf中的字符串，还原成一个结构体数据呢？
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("%s %d %f\n", tmp.name, tmp.age, tmp.score);//以结构的形式打印
//
//	return 0;
//}

//文件的随机读写

//int main()
//{
//	FILE*pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen()");
//		return 1;
//	}
//	/*读文件*/
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//	fseek(pf, 2, SEEK_CUR);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//d
//
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//
//	rewind(pf);
//	
//	ch = fgetc(pf);
//	printf("%c\n", ch);//a


	//ch = fgetc(pf);
	//printf("%c\n", ch);//b

	//fseek(pf, 3, SEEK_SET);
	//int ch = fgetc(pf);
	//printf("%c\n", ch);//a


	//fseek(pf, -3, SEEK_END);
	//int ch = fgetc(pf);
	//printf("%c\n", ch);//a
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


#include <stdio.h>
int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");
	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
	fclose(pf);
	pf = NULL;
	return 0;
}

//
//fgetc
//如果读取正常，会返回读取到的字符的ASCII值
//如果读取失败，返回EOF
//
//fgets
//如果读取正常，返回的是存放读取到的数据的地址
//如果读取失败，返回的NULL
//
//fscanf
//如果读取正常，返回的是格式串中指定的数据的个数
//如果读取失败，返回的是小于格式串中指定的数据的个数
//


#include <stdio.h>
//#include <windows.h>
////VS2019 WIN11环境测试
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//	//注：fflush 在高版本的VS上不能使用了
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}
//
#include <string.h>

//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }* pstPimData;
//
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}


#include <stdio.h>
//union Un
//{
//	short s[7];//14  2 8 2
//	int n;//4 8 4
//};
//#include <stdlib.h>
//
//int main()
//{
//	//printf("%d\n", sizeof(union Un));//16
//	malloc(0);
//
//	return 0;
//}
//



//enum ENUM_A
//{
//	X1,//0
//	Y1,//1
//	Z1 = 255,
//	A1,//256
//	B1,//257
//};
//int main()
//{
//	enum ENUM_A enumA = Y1;//1
//	enum ENUM_A enumB = B1;//257
//	printf("%d %d\n", enumA, enumB);
//
//	return 0;
//}
//
//

//
//#include<stdio.h>
//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("%x\n", a.k);
//
//    return 0;
//}
//

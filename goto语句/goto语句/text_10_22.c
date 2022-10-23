#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//关机程序
//只要运行起来，电脑就在1分钟内关机，如果输入我是猪，就取消关机
//
//在电脑上的cmd命令输入
//shutdown -s -t 60  =  电脑将在一分钟内关机
//shutdown -a  =  取消关机
//
int main()
{
	//关机
	//C语言提供了一个函数；system()-执行系统命令
	char input[20] = {0};//存放输入的信息
	system("shutdown -s -t 30");//system需要引入#include<stdlib.h>头文件
again:
	printf("请注意，你的电脑将在30s内关机 ，如果输入；杨晓波是我爸爸，就取消关机。\n");
	//strcmp是两个字符串之间的比较函数，需要引入#include<string.h>头文件
	scanf("%s",input);
	if ((strcmp(input, "杨晓波是我爸爸")) == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
//goto语句只能在一个函数范围内跳转，不能跨函数
//尽量不使用
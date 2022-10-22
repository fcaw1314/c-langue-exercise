#define _CRT_SECURE_NO_WARNINGS 1
//写一个猜数字游戏
//1、自动产生一个1-100的数字
//2、猜数字
//3、猜对了，就恭喜你，游戏结束
//4、你猜错了，会告诉你猜大了还是猜小了，继续猜，直到猜对
//5、游戏一直玩，除非你退出游戏
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("**************************\n");
	printf("*******  1.play  *********\n");
	printf("*******  0.exit  *********\n");
	printf("**************************\n");
}
void game()
{
	//猜数字游戏的实现
		//1、生成随机数
		//rand函数返回了一个0-32767之间的数字
		//时间---时间戳
	int ret = rand() % 100 + 1;//%100的余数是0-99，然后加1，就是1-100



	//2、猜数字
	int guess = 0;

	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了");
		}
		else if (guess > ret)
		{
			printf("猜大了");
		}
		else
		{
			printf("恭喜你，猜对了");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//打印菜单
		printf("请选择;>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;

		}
	} while (input);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("*************************************\n");
	printf("*************************************\n");
	printf("**********      1.play    ***********\n");
	printf("**********      0.exit    ***********\n");
	printf("*************************************\n");
	printf("*************************************\n");

}
void game()
{
	printf("扫雷游戏开始\n");
	//设计两个数组存放信息
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	//mine初始化全部为'0'
	//show初始化为全‘*’
	init_board(mine, ROWS,COLS,'0');
	init_board(show, ROWS, COLS, '*');
	//打印棋盘
	//display_board(mine, ROW, COL);
	display_board(show, ROW, COL);
	//布置雷
	set_mine(mine, ROW, COL);
	//display_board(mine, ROW, COL);
	//排雷
	FindMine(mine, show, ROW, COL);
	//display_board(show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择;>\n");
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
			printf("输入错误，请重新输入\n");
			break;
		}
	} while(input);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS		1

#include "game.h"


void menu()
{
	printf("***************************\n");
	printf("********   1.play  ********\n");
	printf("********   0.exit  ********\n");
	printf("***************************\n");
	printf("***************************\n");
}
void game()
{
	printf("开始游戏\n");

	char board[ROW][COL] = { 0 };	

	init_board(board, ROW, COL);

	display_board(board, ROW, COL);

	char ret = 0;
	while (1)
	{
	
		player_move(board, ROW, COL);
		ret=is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		display_board(board, ROW, COL);//打印棋盘
		computer_move(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		display_board(board, ROW, COL);
	}
	if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
	}
}
//玩家赢 -- '*'
//电脑赢 -- '#'
// 平局 --- 'Q'
//游戏继续  -- 'C'
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
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
			printf("输入错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
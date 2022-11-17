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
	printf("��ʼ��Ϸ\n");

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
		display_board(board, ROW, COL);//��ӡ����
		computer_move(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		display_board(board, ROW, COL);
	}
	if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
}
//���Ӯ -- '*'
//����Ӯ -- '#'
// ƽ�� --- 'Q'
//��Ϸ����  -- 'C'
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��;>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}
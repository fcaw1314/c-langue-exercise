#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


//初始化
void init_board(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


void display_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//列号
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void set_mine(char mine[ROWS][COLS], int row, int col)
{
	//布置十个雷
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}


int get_mine_count(char mine[ROWS][COLS],int x, int y)
{
	return (mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0');
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入要排查雷的坐标；>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标被排查过
			if (show[x][y] == '*')
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了\n");
					display_board(mine, ROW, COL);
					break;
				}
				else
				{
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';
					display_board(show, ROW, COL);
					win++;
				}
			}
			else
			{
				printf("该坐标已经被排查过了\n");
			}
		}
		else
		{ 
			printf("坐标非法，请重新输入\n");
		}
	}
	if (win == EASY_COUNT)
	{
		printf("恭喜你，你赢了\n");
		display_board(mine, ROW, COL);
	}
}

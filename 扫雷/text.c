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
	printf("ɨ����Ϸ��ʼ\n");
	//���������������Ϣ
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	//mine��ʼ��ȫ��Ϊ'0'
	//show��ʼ��Ϊȫ��*��
	init_board(mine, ROWS,COLS,'0');
	init_board(show, ROWS, COLS, '*');
	//��ӡ����
	//display_board(mine, ROW, COL);
	display_board(show, ROW, COL);
	//������
	set_mine(mine, ROW, COL);
	//display_board(mine, ROW, COL);
	//����
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
		printf("��ѡ��;>\n");
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
			printf("�����������������\n");
			break;
		}
	} while(input);
	return 0;
}
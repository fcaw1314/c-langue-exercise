#define _CRT_SECURE_NO_WARNINGS 1
//дһ����������Ϸ
//1���Զ�����һ��1-100������
//2��������
//3���¶��ˣ��͹�ϲ�㣬��Ϸ����
//4����´��ˣ��������´��˻��ǲ�С�ˣ������£�ֱ���¶�
//5����Ϸһֱ�棬�������˳���Ϸ
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
	//��������Ϸ��ʵ��
		//1�����������
		//rand����������һ��0-32767֮�������
		//ʱ��---ʱ���
	int ret = rand() % 100 + 1;//%100��������0-99��Ȼ���1������1-100



	//2��������
	int guess = 0;

	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��");
		}
		else if (guess > ret)
		{
			printf("�´���");
		}
		else
		{
			printf("��ϲ�㣬�¶���");
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
		menu();//��ӡ�˵�
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
			printf("ѡ�����������ѡ��\n");
			break;

		}
	} while (input);
	system("pause");
	return 0;
}
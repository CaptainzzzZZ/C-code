#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include"game.h"

void menu()
{
	printf("************************\n");
	printf("*****1������Ϸ   *******\n");
	printf("*****0���˳���Ϸ *******\n");
	printf("************************\n");
}

void game()
{
	char board[3][3] = { 0 };
	makeboard(board, 3, 3);
	displayboard(board, 3, 3);
	play(board, 3, 3);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("�����룺>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
		case 0:break;
		default:
			printf("���������������\n");
			break;
		}
	} while (input);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("************************\n");
	printf("*****1、玩游戏   *******\n");
	printf("*****0、退出游戏 *******\n");
	printf("************************\n");
}

void game()
{
	char board[3][3] = { 0 };
	makeboard(board, 3, 3);
	displayboard(board, 3, 3);
	char ret = 0;
	while (1)
	{
		//玩家走；
		player(board, 3, 3);
		displayboard(board, 3, 3);
		ret = iswin(board, 3, 3);
		if (ret != 'c')
		{
			break;
		}
		computer(board, 3, 3);
		displayboard(board, 3, 3);
		ret = iswin(board, 3, 3);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
		printf("玩家赢");
	else if (ret == '#')
		printf("电脑应");
	else
		printf("平局");
	displayboard(board, 3, 3);
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请输入：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
		case 0:break;
		default:
			printf("输入错误，重新输入\n");
			break;
		}
	} while (input);
	return 0;
}
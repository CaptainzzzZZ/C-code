#include"game.h"




void makeboard(char board[3][3], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void displayboard(char board[3][3], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if (i == 2)
		{
			break;
		}
		printf("---|---|---\n");

	}

}

void player(char board[3][3], int x, int y)
{
	int a,b;
	printf("玩家走：\n");
	scanf("%d %d", &a, &b);
	if (a>= 1 && a <= 3 && b >= 1 && b <= 3)
	{
		if (board[a-1][b-1] == ' ')
		{
			board[a - 1][b - 1] = '*';
			//break;
		}
		else
		{
			printf("格子被占用，请重新输入\n");
		}
	}
	else
	{
		printf("非法输入，请重新输入\n");
	}
}

void computer(char board[3][3], int x, int y)
{
	printf("电脑走：\n");
	while (1)
	{
		int a = rand() % 3;
		int b = rand() % 3;
			if (board[a][b] == ' ')
			{
				board[a][b] = '#';
				break;
			}
	}
}


char iswin(char board[3][3], int x, int y)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0; i < 3; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
}
int isfull(char board[3][3], int x, int y)
{
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

isfull(board,3,3)
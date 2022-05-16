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
	for (i = 0; i < 2; i++)
	{
		printf("  |  |  \n");
		printf("--|--|--\n");
		printf("  |  |  \n");
	}

}
void play(char board, int x, int y)
{
	
}
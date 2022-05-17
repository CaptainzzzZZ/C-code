#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>


//gameº¯ÊıÉùÃ÷
void game();

void makeboard(char board[3][3], int x, int y);

void displayboard(char board[3][3], int x, int y);

void player(char board[3][3], int x, int y);

void computer(char board[3][3], int x, int y);

char iswin(char board[3][3], int x, int y);

int isfull(char board[3][3], int x, int y);


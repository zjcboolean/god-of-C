#define _CRT_SECURE_NO_WARNINGS 1
#define row 3
#define col 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//函数声明
void Initboard(char board[row][col],int ROW,int COL);
void Displayboard(char board[row][col],int ROW,int COL);
void PlayerMove(char board[row][col],int ROW,int COL);
void ComputerMove(char board[row][col],int ROW,int COL);
char IsWin(char board[row][col],int ROW,int COL);
//告诉我们四种游戏的状态
//玩家赢 - '*'
//电脑赢 - '#'
//平局   - '@'
//继续   - '$'
#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void menu()
{
	printf("*******************************\n");
	printf("***1.开始游戏*****2.退出游戏***\n");
	printf("*******************************\n");
}
void game()
{     char ret = 0;  
	
	//数组-存放棋盘信息
	char board[row][col] = {0};
	 // 初始化棋盘
	Initboard(board, row, col);
	// 打印棋盘
	Displayboard(board,row,col);
	//下棋
	while(1)
	{
	   //玩家下棋
		PlayerMove(board,row,col);
		Displayboard(board,row,col);
	   //判断玩家是否赢
		ret = IsWin(board,row,col);
		if(ret != '$')//不是继续
		{
		    break;
		}
	   //电脑下棋
		ComputerMove(board,row,col);
		Displayboard(board,row,col);
	  // 判断电脑是否赢
		ret = IsWin(board,row,col);
		if(ret != '$')//不是继续
		{
		   break;
		}
	}
	if(ret=='*')
	{
	   printf("玩家赢\n");
	}
	else if(ret=='#')
	{
	   printf("电脑赢\n");
	}
	else 
	{
	   printf("平局");
	}

}
     
void test()
{    int input = 0;
     srand((unsigned int)time(NULL));
	do
	{
	menu();
	printf("请选择:>");
	scanf("%d",&input);
	switch(input)
	{
	case 1:
		game();
		break;
	case 2:
		printf("退出游戏\n");
	default:
		printf("请重新选择:>\n");
		break;
	}
	}while(input==1);
}

int main()
{
	test();
    return 0;
}
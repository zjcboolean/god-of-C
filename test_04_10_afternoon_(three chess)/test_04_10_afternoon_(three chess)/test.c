#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void menu()
{
	printf("*******************************\n");
	printf("***1.��ʼ��Ϸ*****2.�˳���Ϸ***\n");
	printf("*******************************\n");
}
void game()
{     char ret = 0;  
	
	//����-���������Ϣ
	char board[row][col] = {0};
	 // ��ʼ������
	Initboard(board, row, col);
	// ��ӡ����
	Displayboard(board,row,col);
	//����
	while(1)
	{
	   //�������
		PlayerMove(board,row,col);
		Displayboard(board,row,col);
	   //�ж�����Ƿ�Ӯ
		ret = IsWin(board,row,col);
		if(ret != '$')//���Ǽ���
		{
		    break;
		}
	   //��������
		ComputerMove(board,row,col);
		Displayboard(board,row,col);
	  // �жϵ����Ƿ�Ӯ
		ret = IsWin(board,row,col);
		if(ret != '$')//���Ǽ���
		{
		   break;
		}
	}
	if(ret=='*')
	{
	   printf("���Ӯ\n");
	}
	else if(ret=='#')
	{
	   printf("����Ӯ\n");
	}
	else 
	{
	   printf("ƽ��");
	}

}
     
void test()
{    int input = 0;
     srand((unsigned int)time(NULL));
	do
	{
	menu();
	printf("��ѡ��:>");
	scanf("%d",&input);
	switch(input)
	{
	case 1:
		game();
		break;
	case 2:
		printf("�˳���Ϸ\n");
	default:
		printf("������ѡ��:>\n");
		break;
	}
	}while(input==1);
}

int main()
{
	test();
    return 0;
}
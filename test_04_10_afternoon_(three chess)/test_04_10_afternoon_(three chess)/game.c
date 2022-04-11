#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void Initboard(char board[row][col],int ROW,int COL)
{
      int i = 0;
	  int j = 0;
	  for(i=0;i<ROW;i++)
	  {  
		 for(j=0;j<COL;j++)
		 {
		    board[i][j] = ' ';
		 }
	     
	  }
}

void Displayboard(char board[row][col],int ROW,int COL)
{
     int i = 0;
	 int j = 0;
	 for(i=0;i<ROW;i++)
	 {
		for(j=0;j<COL;j++)
		{
		   printf(" %c ",board[i][j]);
		   if(j<COL-1)
		   {
			   printf("|");
		   }
		}
	    printf("\n");
		if(i<ROW-1)
		{
		  for(j=0;j<COL;j++)
		  {
		     printf("---");
			 if(j<COL-1)
			 {
			   printf("|");
			 }
		  }
		  printf("\n");
		}
		
	 }
}

void PlayerMove(char board[row][col],int ROW,int COL)
{
       int x = 0;
	   int y = 0;
	   printf("����ߣ�>\n");
	   while(1)
	   {
	        printf("������Ҫ�µ����꣺>");
			scanf("%d%d",&x, &y);
			if((x>=1) && (x<=ROW) && (y>=1) && (y<=COL))
			{
			     if((board[x-1][y-1]) == ' ')
				 {
				     board[x-1][y-1] = '*';
					 break;
				 }
				 else
				 {
				     printf("�����걻ռ��\n");
				 }
			}
			else
			{
			    printf("����Ƿ������������룺>\n");
			}
	   }

}

void ComputerMove(char board[row][col],int ROW,int COL)
{
        int x = 0;
		int y = 0;
		printf("�����ߣ�>\n");

		
		while(1)
		{   
			x = rand() % ROW;//ʹ�к�������ROW��Χ��
		    y = rand() % COL;// ʹ�к�������COL��Χ��
		    if(board[x][y]== ' ')
			{
				board[x][y] = '#';
				break;
			}
		
		}
}

int IsFull(char board[row][col],int ROW,int COL)
{
        int i = 0;
		int j = 0;
		for(i=0;i<ROW;i++)
		{
		   for(j=0;j<COL;j++)
		   {
		      if(board[i][j] == ' ')
			  {
				  return 0;//����û��
			  }
		   }
		}
		return 1;//��������
}

char IsWin(char board[row][col],int ROW,int COL)
{
           int i = 0;
		   //������
		   for(i=0;i<ROW;i++)
		   {
		      if((board[i][0]==board[i][1]) && (board[i][1]==board[i][2]) && board[i][2] != ' ')
			  {
				  return board[i][0];
			  }
		   }
		   //������
		   for(i=0;i<COL;i++)
		   {
		      if((board[0][i]==board[1][i]) && (board[1][i]==board[2][i]) && board[2][i] != ' ')
			  {
				  return board[0][i];
			  }
		   }
		   //�����Խ���
		   if((board[0][0]==board[1][1]) && (board[1][1]==board[2][2]) && board[2][2]!= ' ')
		   {
		          return board[0][0];
		   }
		   if((board[0][2]==board[1][1]) && (board[1][1]==board[2][0]) && board[2][0]!= ' ')
		   {
		          return board[0][2];
		   }
		   //�ж�ƽ��
		   if(1 == IsFull(board,row,col))
		   {
		        return '@';//ƽ��
		   }
			   return '$';//����
}
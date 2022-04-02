#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int i = 1;
//
//	while(i<=10)
//	{
//		if(i==5)
//		{
//		continue; //终止本次循环后面的代码，跳到循环最开始判断初值
//		}        //break,跳出循环
//	printf("haha\n");
//	i++;
//	}
//
//return 0;
//}


//int main()
//{       int ch = 0;
//    while((ch = getchar()) != EOF)//文件终止，值为-1
//	{                           //Ctrl Z相当于EOF
//	printf("%c\n",ch);
//	putchar(ch);
//	
//	}
//return 0;
//}

//int main()
//{    char ch = 0;
//     char ret = 0;
//	char tse[20] = {0};
//	printf("亲输入密码:>");
//	scanf("%s",tse);
//	printf("亲确认密码正确:(T/F)");
//	while((ret = getchar()) != '\n')
//	{
//	;
//	}
//	//getchar();//吸收缓冲区中确认scanf的回车键'\n'，让getchar()重新接收字符
//	ch = getchar();
//	if(ch == 'T')
//	{
//	printf("密码输入正确");
//	}
//	else
//	{
//	printf("密码输入错误");
//	}
//
//return 0;
//}

//int main()
//{  char ch,ret;
//ch = getchar();
//getchar();//吸收缓冲区中确认上一个getchar()的回车键'\n'
//ret = getchar();
//return 0;
//}

//int main()
//{   char ch = 0;
//	while((ch = getchar()) != EOF);//error 加了分号会导致无限循环
//	{
//    putchar(ch);
//	printf("%c",ch);
//	}
//return 0;
//}

//int main()
//{
//	int ch = 0;
//	while((ch = getchar()) != EOF)//判断语句中的等式要用括号括起来
//	{
//	if(ch>'9' || ch<'0')//表示数字字符
//	continue ;
//	putchar(ch);
//	}
//return 0;
//}

int main()
{
int i = 0;
for(i=1;i<=10;i++)
{
	if(i == 5)
		continue;
	printf("%d\n",i);
}
}


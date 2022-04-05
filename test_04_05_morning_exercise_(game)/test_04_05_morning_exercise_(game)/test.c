#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
//void menu()
//{
//	printf("*******************************\n");
//	printf("****   1. play  0. exit    ****\n");
//	printf("*******************************\n");
//}
//
//void game()
//{    //1. 生成一个随机数
//
//	//生成一个随机数rand(),范围是0—32767，头文件#include<stdlib.h>
//	//生成一个1-100的数，ret = rand()%100+1
//    int ret = 0;	
//	int guess = 0;
//	ret = rand()%100+1;//返回随机整数
//	printf("%d\n",ret);
//
//	//2. 猜数字
//	while(1)
//	{
//	printf("请猜数字：>");
//	scanf("%d",&guess);
//	if(guess<ret)
//	{
//	   printf("猜小了\n");
//	}
//	else if(guess>ret)
//	{
//	   printf("猜大了\n");
//	}
//	else
//	{
//	printf("恭喜你猜对了\n");
//	break;
//	}
//	}
//
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//确定随机数的起点，括号里为无符整形,这里传输一个变化的值，时间戳
//	        //时间戳：当前计算机时间-计算机的起始时间
//	        //获取时间戳用time()函数
//	do
//	{
//	menu();
//	printf("请选择>:");
//	scanf("%d",&input);
//
//	switch(input)
//	{
//	case 1:
//		game();
//		break;
//	case 0:
//		printf("退出游戏\n");
//		break;
//	default:
//		printf("选择错误\n");
//		break;
//	}
//	}while(input);
//
//return 0;
//}



//int main()
//{
//	//goto语句，尽量少使用，会使程序混乱，适合多层嵌套的跳出
//
//	
//	//一个关机程序
//	//shutdown -s -t 60 (电脑一分钟内关机)
//	//system()- 执行系统命令的
//
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
//	scanf("%s",input);
//	if(strcmp(input,"我是猪")==0)//strcmp比较两个字符串
//	{
//	     system("shutdown -a");
//	}
//	else
//	{
//	goto again;
//	}
//	return 0;
//}


//int main()
//{
//
//	char arr1[] = "bit";
//	char arr2[] = "************";
//	strcpy(arr2,arr1);//\0也拷贝进去，它是字符串的结束标志
//	printf("%s\n",arr2);
//return 0;
//}


//int get_max(int x,int y)
//{
//   if(x>y)
//   {
//   return x;
//   }
//   else
//   {
//   return y;
//   }
//}
//int main()
//{
//	int a = 0 ;
//	int b = 0;
//	int max = 0;
//	printf("请输入a,b= ");
//	scanf("%d%d",&a, &b);
//	max = get_max(a,b);
//	printf("%d",max);
//return 0;
//}


//void Swap1(int x,int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//
//}
 void Swap2(int* pa,int* pb)
{
	int tmp = 0;
	 tmp = *pa;
	 *pa = *pb;
	 *pb = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	 printf("a=%d b=%d\n",a, b);
	 //Swap1(a, b);//error
	 Swap2(&a,&b);
	 printf("a=%d b=%d\n",a, b);
return 0;
}
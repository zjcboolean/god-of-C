#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int arr1[5];
//	int (*pa)[5] = &arr1;//变量pa的类型为int (*)[5]
//
//    return 0;
//}

//数组指针 - 是指向数组的指针
//函数指针 - 是指向函数的指针 - 存放函数地址的指针

//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//    int a = 10;
//	int b = 20;
//	int arr[10] = {0};
//	
//	//&函数名 和 函数名 都是函数的地址
//	/*printf("%p\n",&Add);
//	printf("%p\n",Add);*/
//	
//	int (*p)[10] = &arr;
//	int (*pa)(int,int) = Add;
//	printf("%d ",(*pa)(2,3));
//	printf("%d ",(pa)(2,3));//pa是函数指针，调用函数可 解引用和不解引用
//}
//
//void Print(char* str)
//{
//     printf("%s\n",str);
//}
//
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("hello world");
//    return 0;
//}

////函数指针数组
//int Add(int x,int y)
//{
//    return x + y;
//}
//int Sub(int x,int y)
//{
//    return x - y;
//}
//int Mul(int x,int y)
//{
//    return x * y;
//}
//int Div(int x,int y)
//{
//    return x / y;
//}
//
//int main()
//{
//	int* arr[5];
//	int (*pa)(int,int) = Add;//这样只能算加法，希望Sub/Mul/Div都计算
//
//	int (*parr[4])(int,int) = {Add,Sub,Mul,Div};//函数指针数组
//	int i = 0;
//	for(i=0;i<4;i++)
//	{
//	    printf("%d ",parr[i](2,3));//5 -1 6 0
//		printf("%d ",(*parr[i])(2,3));//5 -1 6 0
//	}
//    return 0;
//}


//char* my_strcpy(char* dest,const char* src);
//
//
//int main()
//{
//	//1.写一个函数指针 pf ，能够指向my_strcpy
//	char* (*pf)(char*,const char*) = my_strcpy;
//
//	//2.写一个函数指针数组 pfArr,能够存放4个my_strcpy函数的地址
//	char* (*pfArr[4])(char*,const char*) = {my_strcpy};
//    
//	return 0;
//}

//函数指针数组的案例 - 转移表

//计算器

void menu()
{
	printf("*****************************\n");
	printf("**  1. add          2. sub **\n");
	printf("**  3. mul          4. div **\n");
	printf("**  5. Xor                   \n");
	printf("*******************************");
}

int Add(int x,int y)
{
    return x + y;
}

int Sub(int x,int y)
{
    return x - y;
}

int Mul(int x,int y)
{
    return x * y;
}

int Div(int x,int y)
{
    return x / y;
}

int Xor(int x,int y)
{
    return x ^ y;
}


int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	//pfArr 是一个函数指针数组
	int (*pfArr[])(int,int) = {0,Add,Sub,Mul,Div,Xor};

	do
	{
	    menu();
		printf("请选择：>");
		scanf("%d",&input);
        if(input >= 1 && input <= 5)
		{
			printf("请输入两个操作数：>");
			scanf("%d%d",&x, &y);
			ret = pfArr[input](x,y);
			printf("%d\n",ret);
		}
		else if(input == 0)
		{
		    printf("退出\n");
		}
		else
		{
		    printf("选择错误\n");
		}

		

	}while(input);

     return 0;
}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//	    menu();
//		printf("请选择：>");
//		scanf("%d",&input);
//		printf("请输入两个操作数：>");
//		scanf("%d%d",&x, &y);
//
//		switch(input)
//		{
//		case 1:
//          printf("请输入两个操作数：>");//这种方法，每增加一个函数就要加两句printf和scanf,太笨了
//		    scanf("%d%d",&x, &y);
//			printf("%d\n",Add(x,y));
//			break;
//		case 2:
//          printf("请输入两个操作数：>");
//		    scanf("%d%d",&x, &y);
//			printf("%d\n",Sub(x,y));
//			break;
//		case 3:
//          printf("请输入两个操作数：>");
//		    scanf("%d%d",&x, &y);
//			printf("%d\n",Mul(x,y));
//			break;
//		case 4:
//          printf("请输入两个操作数：>");
//		    scanf("%d%d",&x, &y);
//			printf("%d\n",Div(x,y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误");
//		    break;
//		}
//
//	}while(input);
//
//     return 0;
//}









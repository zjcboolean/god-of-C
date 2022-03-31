//
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d",&num1,&num2);//在VS2013版本会建议使用scanf_s,他不是标准C语言，不建议使用
//	
//	   /* scanf
//		strcpy
//		strlen
//		strcat  
//		都是不安全的，解决方法是在源文件第一行加一句
//#define _CRT_SECURE_NO_WARNINGS*/ /* 这在输出栏的警报里可找到*/
//	sum = num1 + num2;
//	printf("%d\n",sum);
//return 0;
//}

#include <stdio.h>
//#define MAX 10 //  3.标识符常量

enum Sex  // 4.枚举关键 enum
{
     MALE,
	 FEMALE,
	 SECRET
};
enum Color
{
     RED,
	 YELLO,
	 BLUE
};
int main()
{
	//const int sum = 2;//  2. const修饰的常变量，具有常属性，但本身还是一个变量
	//printf("%d\n",sum);
	//sum = 3;
	//3;//   1. 字面常量
	/*int arr[MAX] = {0};
	printf("%d\n",MAX);*/
	enum Sex s = FEMALE;
	enum Color color = RED;
	color = BLUE;
	//BLUE = 6;  //err 枚举创建变量可以修改，但枚举里的值是不能改变的
	printf("%d\n",MALE);
	printf("%d\n",FEMALE);
	printf("%d\n",SECRET);
	printf("%d\n",color);

return 0;
}

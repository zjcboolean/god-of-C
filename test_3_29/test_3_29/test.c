#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
   //auto,生成局部变量都是自动的，auto可以省略
//
////register int a = 2;
// int main()
// {
//typedef signed int u_int;
//printf("%d\n",sizeof( u_int));//4
//
// }
//int test()
//{
//	static int a = 1;//static修饰局部变量，局部变量生命周期变长
//	a++;
//	printf("%d\n",a);
//}
//
//int main()
//{
//
////int i = 0;
////while(i<5)
////{
////test();
////i++;
////}
////}
//extern int Add(int,int);
//extern int v;
//int main()
//{
//	int num1 = 20;
//	int num2 = 30;
//	int sum = Add(num1,num2);
//	printf("%d\n",sum);
//	printf("%d\n",v);
//return 0;
//}

//#define MAX 100  // 定义标识符常量
//
//#define MAX(X,Y)(X>Y?X:Y)//宏的方式比函数更加简洁
//int main()
//{
//	//int a = MAX;
//	int a = 30;
//	int b = 40;
//	int max = MAX(a,b);
//	//printf("%d\n",a);
//	printf("%d\n",max);
//return 0;
//}

//int main()
//{   double hh = 2.1;
//         double* h = &hh;
//	char ch = 'd';
//	char* p = &ch;
//	*p = 'a';
//	*h = 2.0;
//
//	printf("%c\n",ch);
//	printf("%d\n",sizeof(p));
//	printf("%d\n",sizeof(char*));
//	printf("%lf\n",*h);
//	printf("%lf\n",hh);
//	printf("%p\n",h);
//
//return 0;
//}

struct report
{
    char name[20];
	int clss;
	char level;
};

int main()
{
	struct report h1 = {"小明",180231,'a'};
	struct report h2 = {"小梅",180214,'b'};
	struct report h3 = {"小庄",180261,'c'};
	struct report h4 = {"小言",180254,'d'};
	struct report* p = &h2;
	struct report* k = &h3;
	strcpy(h4.name,"小王");
	h4.level = 'd';
	h4.clss = 180262;
	printf("姓名：%s\n",h1.name);
	printf("班级：%d\n",h1.clss);
	printf("成绩等级：%c\n",h1.level );
	printf("姓名：%s\n",p->name);
	printf("班级：%d\n",p->clss);
	printf("成绩等级：%c\n",p->level );
	printf("姓名：%s\n",(*k).name);
	printf("班级：%d\n",(*k).clss);
	printf("成绩等级：%c\n",(*k).level );
	printf("姓名：%s\n",h4.name);
	printf("班级：%d\n",h4.clss);
	printf("成绩等级：%c\n",h4.level );

return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
   //auto,���ɾֲ����������Զ��ģ�auto����ʡ��
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
//	static int a = 1;//static���ξֲ��������ֲ������������ڱ䳤
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

//#define MAX 100  // �����ʶ������
//
//#define MAX(X,Y)(X>Y?X:Y)//��ķ�ʽ�Ⱥ������Ӽ��
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
	struct report h1 = {"С��",180231,'a'};
	struct report h2 = {"С÷",180214,'b'};
	struct report h3 = {"Сׯ",180261,'c'};
	struct report h4 = {"С��",180254,'d'};
	struct report* p = &h2;
	struct report* k = &h3;
	strcpy(h4.name,"С��");
	h4.level = 'd';
	h4.clss = 180262;
	printf("������%s\n",h1.name);
	printf("�༶��%d\n",h1.clss);
	printf("�ɼ��ȼ���%c\n",h1.level );
	printf("������%s\n",p->name);
	printf("�༶��%d\n",p->clss);
	printf("�ɼ��ȼ���%c\n",p->level );
	printf("������%s\n",(*k).name);
	printf("�༶��%d\n",(*k).clss);
	printf("�ɼ��ȼ���%c\n",(*k).level );
	printf("������%s\n",h4.name);
	printf("�༶��%d\n",h4.clss);
	printf("�ɼ��ȼ���%c\n",h4.level );

return 0;
}
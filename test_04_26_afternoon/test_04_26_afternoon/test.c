#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int arr1[5];
//	int (*pa)[5] = &arr1;//����pa������Ϊint (*)[5]
//
//    return 0;
//}

//����ָ�� - ��ָ�������ָ��
//����ָ�� - ��ָ������ָ�� - ��ź�����ַ��ָ��

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
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	/*printf("%p\n",&Add);
//	printf("%p\n",Add);*/
//	
//	int (*p)[10] = &arr;
//	int (*pa)(int,int) = Add;
//	printf("%d ",(*pa)(2,3));
//	printf("%d ",(pa)(2,3));//pa�Ǻ���ָ�룬���ú����� �����úͲ�������
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

////����ָ������
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
//	int (*pa)(int,int) = Add;//����ֻ����ӷ���ϣ��Sub/Mul/Div������
//
//	int (*parr[4])(int,int) = {Add,Sub,Mul,Div};//����ָ������
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
//	//1.дһ������ָ�� pf ���ܹ�ָ��my_strcpy
//	char* (*pf)(char*,const char*) = my_strcpy;
//
//	//2.дһ������ָ������ pfArr,�ܹ����4��my_strcpy�����ĵ�ַ
//	char* (*pfArr[4])(char*,const char*) = {my_strcpy};
//    
//	return 0;
//}

//����ָ������İ��� - ת�Ʊ�

//������

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
	//pfArr ��һ������ָ������
	int (*pfArr[])(int,int) = {0,Add,Sub,Mul,Div,Xor};

	do
	{
	    menu();
		printf("��ѡ��>");
		scanf("%d",&input);
        if(input >= 1 && input <= 5)
		{
			printf("������������������>");
			scanf("%d%d",&x, &y);
			ret = pfArr[input](x,y);
			printf("%d\n",ret);
		}
		else if(input == 0)
		{
		    printf("�˳�\n");
		}
		else
		{
		    printf("ѡ�����\n");
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
//		printf("��ѡ��>");
//		scanf("%d",&input);
//		printf("������������������>");
//		scanf("%d%d",&x, &y);
//
//		switch(input)
//		{
//		case 1:
//          printf("������������������>");//���ַ�����ÿ����һ��������Ҫ������printf��scanf,̫����
//		    scanf("%d%d",&x, &y);
//			printf("%d\n",Add(x,y));
//			break;
//		case 2:
//          printf("������������������>");
//		    scanf("%d%d",&x, &y);
//			printf("%d\n",Sub(x,y));
//			break;
//		case 3:
//          printf("������������������>");
//		    scanf("%d%d",&x, &y);
//			printf("%d\n",Mul(x,y));
//			break;
//		case 4:
//          printf("������������������>");
//		    scanf("%d%d",&x, &y);
//			printf("%d\n",Div(x,y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����");
//		    break;
//		}
//
//	}while(input);
//
//     return 0;
//}









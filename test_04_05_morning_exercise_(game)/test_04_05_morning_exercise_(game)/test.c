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
//{    //1. ����һ�������
//
//	//����һ�������rand(),��Χ��0��32767��ͷ�ļ�#include<stdlib.h>
//	//����һ��1-100������ret = rand()%100+1
//    int ret = 0;	
//	int guess = 0;
//	ret = rand()%100+1;//�����������
//	printf("%d\n",ret);
//
//	//2. ������
//	while(1)
//	{
//	printf("������֣�>");
//	scanf("%d",&guess);
//	if(guess<ret)
//	{
//	   printf("��С��\n");
//	}
//	else if(guess>ret)
//	{
//	   printf("�´���\n");
//	}
//	else
//	{
//	printf("��ϲ��¶���\n");
//	break;
//	}
//	}
//
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//ȷ�����������㣬������Ϊ�޷�����,���ﴫ��һ���仯��ֵ��ʱ���
//	        //ʱ�������ǰ�����ʱ��-���������ʼʱ��
//	        //��ȡʱ�����time()����
//	do
//	{
//	menu();
//	printf("��ѡ��>:");
//	scanf("%d",&input);
//
//	switch(input)
//	{
//	case 1:
//		game();
//		break;
//	case 0:
//		printf("�˳���Ϸ\n");
//		break;
//	default:
//		printf("ѡ�����\n");
//		break;
//	}
//	}while(input);
//
//return 0;
//}



//int main()
//{
//	//goto��䣬������ʹ�ã���ʹ������ң��ʺ϶��Ƕ�׵�����
//
//	
//	//һ���ػ�����
//	//shutdown -s -t 60 (����һ�����ڹػ�)
//	//system()- ִ��ϵͳ�����
//
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n������>:");
//	scanf("%s",input);
//	if(strcmp(input,"������")==0)//strcmp�Ƚ������ַ���
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
//	strcpy(arr2,arr1);//\0Ҳ������ȥ�������ַ����Ľ�����־
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
//	printf("������a,b= ");
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
//
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d",&num1,&num2);//��VS2013�汾�Ὠ��ʹ��scanf_s,�����Ǳ�׼C���ԣ�������ʹ��
//	
//	   /* scanf
//		strcpy
//		strlen
//		strcat  
//		���ǲ���ȫ�ģ������������Դ�ļ���һ�м�һ��
//#define _CRT_SECURE_NO_WARNINGS*/ /* ����������ľ�������ҵ�*/
//	sum = num1 + num2;
//	printf("%d\n",sum);
//return 0;
//}

#include <stdio.h>
//#define MAX 10 //  3.��ʶ������

enum Sex  // 4.ö�ٹؼ� enum
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
	//const int sum = 2;//  2. const���εĳ����������г����ԣ���������һ������
	//printf("%d\n",sum);
	//sum = 3;
	//3;//   1. ���泣��
	/*int arr[MAX] = {0};
	printf("%d\n",MAX);*/
	enum Sex s = FEMALE;
	enum Color color = RED;
	color = BLUE;
	//BLUE = 6;  //err ö�ٴ������������޸ģ���ö�����ֵ�ǲ��ܸı��
	printf("%d\n",MALE);
	printf("%d\n",FEMALE);
	printf("%d\n",SECRET);
	printf("%d\n",color);

return 0;
}

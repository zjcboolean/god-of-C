#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	/*float a = 5/2.0;
//	printf("%f\n",a);*/
//
//	��λ������
//	int a = -1;
//	int b = a >>1;//����
//	printf("%d\n",b);//������λ
//
//	/*int c= 20;
//	int d = c<<1;
//	printf("%d\n",d);*/
//
//}

//int main()
//{       //��һ�������洢���ڴ��еĶ�������1�ĸ���
//	int num = 0;
//	int count = 0;
//	scanf("%d",&num);
//	//ͳ��num�Ĳ������м���1��ʹ��%2��/2�ķ�����ֻ�����������㲻�˸�����
//	while(num)
//	{
//	   if(num%2==1)
//	   {
//	   count++;
//	   num = num/2;
//	   }
//	num = num/2;
//	}
//	   printf("%d\n",count);
//	return 0;
//}

//int main()
//{   //��һ�������洢���ڴ��еĶ�������1�ĸ���(ʹ�ð�λ�������)
//	int num = 0;
//    int count = 0;
//	int i = 0;
//     printf("�����룺>");
//	 scanf("%d",&num);
//	 for(i=0;i<32;i++)
//	 {
//	     if(1==((num>>i)&1))
//		 {
//		      count++;
//		 }
//	 }
//	 printf("%d\n",count);
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n",sizeof(s = a+5)); //2
//	printf("%d\n",s);//0,sizeof�еı��ʽ�ǲ����������
//
//    return 0;
//}

//int main()
//{
//	int a = 0;//��λȡ��(������λ)
//	printf("%d\n",~a);
//   return 0;
//}

//int main()
//{
//	int a= 11;
//	a = a | (1 << 2);
//	printf("%d\n",a);//15
//	a = a & (~(1<<2));
//	printf("%d\n",a);//11
//
//	//00000000 00000000 00000000 00001011
//	//00000000 00000000 00000000 00000100
//	//1<<2;
//	//00000000 00000000 00000000 00000001
//	//
//	//00000000 00000000 00000000 00001111
//	//11111111 11111111 11111111 11111011
//	//00000000 00000000 00000000 00000100
//	//00000000 00000000 00000000 00001011
//   return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 12;
//	printf("%d\n",++a);
//	printf("%d\n,b++");
//  return 0;
//} 


//int main()
//{      //360����
//	int i = 0,a = 0,b = 2,c = 3,d = 4;
//	i = a++ && ++b && d++;
//	printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);//һ����0�����������ʽ�Ӳ��ټ���
//   return 0;
//}

//int main()
//{
//	int i = 0,a = 1,b = 2,c = 3,d = 4;
//	i = a++ && ++b && d++;
//	printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);
//   return 0;
//}

//int main()
//{
//	int i = 0,a = 0,b = 2,c = 3,d = 4;
//	i = a++ || ++b || d++;
//	printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);
//   return 0;
//}

//int main()
//{
//	int i = 0,a = 1,b = 2,c = 3,d = 4;
//	i = a++ || ++b || d++;//һ����1�����������ʽ�Ӳ��ټ���
//	printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);
//   return 0;
//}

//��������������Ŀ������

//int main()
//{
//	int a = 13;
//	int b =  20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n",max);
//   return 0;
//}

//ѧ��
//struct Stu//struct Stu�ṹ�����
//{
//   char name[20];
//   int age;
//   char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	struct Stu s1 = {"����",20,"2020"};//s1,Ϊ�ṹ�����
//	struct Stu* ps=&s1;
//    printf("%s\n",(*ps).name);
//	printf("%d\n",s1.age);
//	printf("%s\n",ps->id);
//	
//	return 0;
//}

int main()
{
	char a = -1;
	char b = 3;
	char c = a+b;
	printf("%d\n",c);

    return 0;
}
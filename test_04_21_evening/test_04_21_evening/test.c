#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	float f = 5.5;
//	//101.1
//	//(-1)^0 * 1.011*2^2
//	//浮点数存储0 10000001 01100000000000000000000
//	//浮点数取出(-1)^0 * 1.011*2^2
//	//浮点数地址0100 0000 1011 0000 0000 0000 0000 0000
//	//内存地址  0x40b00000
//	//0x0049F8BC
//
//	//当内存中二进制序列，E为全1
//	//0 11111111 01100000000000000000000
//	//E真实值为255-127=126，科学计数法(-1)^0 * 1.011*2^126,也就是无穷大
//
//	//当内存中二进制序列，E为全0
//	//0 00000000 01100000000000000000000
//	//E真实值为0-127=-127，科学计数法(-1)^0 * 0.011*2^（-127）,也就是无穷小
//	printf("%p",&f);
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n",n);//9
//	printf("*pFloat的值为：%f\n",*pFloat);//0.000000
//	//0 00000000 00000000000000000001001补码
//	//(-1)^0 * 0.00000000000000000001001*2^(-127)为无穷小
//
//	*pFloat = 9.0;
//
//	printf("num的值为：%d\n",n);//1,091,567,616
//	//1001.0
//	//(-1)^0 * 1.001*2^(3)
//	//0 10000010 00100000000000000000000补码
//	//化为十进制1,091,567,616
//	printf("*pFloat的值为：%f\n",*pFloat);//9.000000
//    return 0;
//}

//void test(int arr[])
//{
//     printf("%d\n",sizeof(arr)/sizeof(arr[0]));
//}
//int main()
//{
//	int arr[10] = {0};
//	test(arr);
//    return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//
//	printf("%s\n",arr);
//	printf("%s\n",pc);
//
//    return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//常量字符串不能修改，a的地址赋给p
//	*p = 'w';//error,segmentFault段错误。常量字符串是不能修改的，但是VS没有报错，正确做法是在char*前面加const，时刻提醒你不能修改
//	printf("%s\n",p);
//	//printf("%c\n",*p);
//	//printf("%s\n",p);
//     return 0;
//}


//习题
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//
//	if(arr1 == arr2)//表示首元素地址，因为是两个数组，有两个空间，首元素地址不同
//	{
//	    printf("hehe\n");
//	}
//	else
//	{
//	    printf("haha\n");
//	}
//    return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//
//	if(p1 == p2)//p1,p2都表示一样的常量字符串，不能被修改，为了节省空间，p1,p2指向地址一样
//	{
//	    printf("hehe\n");
//	}
//	else
//	{
//	    printf("haha\n");
//	}
//    return 0;
//}


////指针数组 
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//	
//
//	int* parr[] = {arr1,arr2,arr3};
//	int i = 0;
//	for(i=0;i<3;i++)
//	{
//		int j = 0;
//		for(j=0;j<5;j++)
//		{
//		printf("%d ",*(parr[i]+j));
//		}
//	}
//   return 0;
//}

////数组指针 - 指针
//
//int main()
//{
//	//int *p = NULL;//p是整形指针 - 指向整形的指针 - 可以存放整形的地址
//	char* pc = NULL;//pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
//	//数组指针 - 指向数组的指针 - 存放数组的地址
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int (*p)[10] = &arr;//数组的指针存起来
//	//*p表示是指针，[10]表示数组元素，指针指向数组元素
//    return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5]=&arr;
//	//pa 变量名
//	//*pa 是指针
//	//[5]表示指针指向的数组元素有5个
//	//char* 表示指针指向的数组元素类型为char*
//    return 0;
//}

//数组指针的麻烦使用
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//	    printf("%d ",*(p+i));
//	}
//	//int (*pa)[10] = &arr;
//	//int i = 0;
//	//for(i=0;i<10;i++)
//	//{
//	//    printf("%d ",(*pa)[i]);//*pa=arr,(*pa)[i]等效为*(*pa+i)
//		           //别扭
//    //{
//    return 0;
//}


//数组指针的正确使用

void print1(int arr[3][5],int x,int y)
{
	 
	 int i = 0;
		 for(i=0;i<x;i++)
		 {
		     int j = 0;
			 for(j=0;j<y;j++)
			 {
			     printf("%d ",arr[i][j]);
			 }
			 printf("\n");
		 }
}

void print2(int (*pa)[5],int x,int y)
{
      int i = 0;
	  for(i=0;i<x;i++)
	  {
		  int j = 0;
		  for(j=0;j<y;j++)
		  {
	       printf("%d ",*(*(pa+i)+j));//*(*(pa+i)+j)等价于(*(pa+i))[j]
		  // printf("%d ",(*(pa+i))[j]);
		  // printf("%d ",*(pa[i]+j));
		  //printf("%d ",pa[i][j]);
		   //几种写法都是等价的
		  }
		  printf("\n");
	  }
}

int main()
{
	int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	

	print1(arr,3,5);
	print2(arr,3,5);

    return 0;
}


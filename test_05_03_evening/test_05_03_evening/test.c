#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

////int main()
////{
////	//字符串
////	char arr[] = "abcdef";
////
////	printf("%d\n",sizeof(arr));//7 整个数组为abcdef\0
////	printf("%d\n",sizeof(arr+0));//4/8  首元素地址大小
////	printf("%d\n",sizeof(*arr));//1 表示首元素a
////	printf("%d\n",sizeof(arr[1]));//1 表示第二个元素b
////	printf("%d\n",sizeof(&arr));//4/8 数组的地址
////	printf("%d\n",sizeof(&arr+1));//4/8 下一个数组的地址
////	printf("%d\n",sizeof(&arr[0]+1));//4/8 表示第二个元素地址
////
////     return 0;
////}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n",strlen(arr));//6 
//	printf("%d\n",strlen(arr+0));//6 表示首元素地址，到\0停止
//	//printf("%d\n",strlen(*arr));//error 非法访问内存
//	//printf("%d\n",strlen(arr[1]));//error 非法访问内存
//	printf("%d\n",strlen(&arr));//6 取数组地址，相当于数组指针,类型为char*
//	//strlen 参数类型为const char*
//	printf("%d\n",strlen(&arr+1));//随机值 
//	printf("%d\n",strlen(&arr[0]+1));//5 从b往后找\0
//
//
//    return 0;
//}

//int main()
//{
//	char *p = "abcdef";//把常量字符串首元素a的地址存到p中
//
//	printf("%d\n",sizeof(p));//4 表示首元素地址
//	printf("%d\n",sizeof(p+1));//4 表示b的地址
//	printf("%d\n",sizeof(*p));//1 表示字符串第一个字母
//	printf("%d\n",sizeof(p[0]));//1 表示首元素地址解引用
//	//int arr[10];arr[0] == *(arr+0)
//	//p[0] == *{p+0}
//	printf("%d\n",sizeof(&p));//4 表示常量字符串地址
//	printf("%d\n",sizeof(&p+1));//4 表示下一个常量字符串地址
//	printf("%d\n",sizeof(&p[0]+1));//4 表示b的地址
//
//    return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//
//	printf("%d\n",strlen(p));//6 从a往后找\0
//	printf("%d\n",strlen(p+1));//5 从b往后找\0
//	printf("%d\n",strlen(*p));//error 非法访问内存
//    printf("%d\n",strlen(p[0]));//error 非法访问内存
//    printf("%d\n",strlen(&p));//随机值，p空间未知，
//	printf("%d\n",strlen(&p+1));//随机值 p下一个空间未知
//	printf("%d\n",strlen(&p[0]+1));//5 从b往后找\0
//
//    return 0;
//}

//int main()
//{
//	//二维数组
//	int a[3][4] = {0};
//	printf("%d\n",sizeof(a));//48 整个数组所占空间
//    printf("%d\n",sizeof(a[0][0]));//4 
//	printf("%d\n",sizeof(a[0]));//16 相当于第一行作为一维数组的数组名
//	printf("%d\n",sizeof(a[0]+1));//4 a[0]这里表示第一行的地址
//	//a[0]+1表示第一行，第二个元素地址
//	printf("%d\n",sizeof(*(a[0]+1)));//4 a[0]+1表示第一行，第二个元素
//	printf("%d\n",sizeof(a+1));//4 表示第二行第一个元素地址
//	//a表示首元素地址，二维数组首元素地址是他的第一行（首元素）的地址，a+1为第二行首元素地址
//	printf("%d\n",sizeof(*(a+1)));//16 表示整个第二行数组
//	printf("%d\n",sizeof(&a[0]+1));//4 表示第二行地址
//	printf("%d\n",sizeof(*(&a[0]+1)));//16
//	printf("%d\n",sizeof(*a));//16 表示第一行元素解引用
//	printf("%d\n",sizeof(a[3]));//16 表示第四行数组（sizeof不访问，只看第四行数组的类型），
//	
//    return 0;
//}

//指针笔试题
//int main()
//{
//	int a[5] = {1,2,3,4,5};
//	int *ptr = (int*)(&a+1);//(&a+1数组指针
//	printf("%d,%d\n",*(a+1),*(ptr-1));//2 5
//
//    return 0;
//}

//指针笔试题

//struct Test
//{
//   int Num;
//   char *pcName;
//   short sDate;
//   char cha[2];
//   short sBa[4];
//
//}*p;
//
//int main()
//{
//	//假设p 的值为0x00000,如下表表达式的值分别为多少？
//	//已知，结构体Test类型的变量大小是20个字节
//
//	p = (struct Test*)0x100000;
//	printf("%p\n",p+0x1);//0x00000+20=0x00014
//	printf("%p\n",(unsigned long)p+0x1);//100000十进制为1048576
//	//(1048576+1)转换为16进制为0x100001
//	printf("%p\n",(unsigned int*)p+0x1);//0x00004
//    return 0;
//}

//指针笔试题

//int main()
//{
//
//	int a[4] = {1,2,3,4};
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x",ptr1[-1],*ptr2);
//	//  ptr1[-1] = *(ptr1+(-1))
//
//     return 0;
//}


//指针笔试题
//int main()
//{
//	int a[3][2] = {(0,1),(2,3),(4,5)};
//	int *p;
//	p = a[0];
//	printf("%d\n",p[0]);
//
//
//    return 0;
//}

//指针笔试题

int main()
{
	int a[5][5];
	int (*p)[4];
	p = a;//a地址类型int (*)[5]  ,p地址类型int (*)[4]
	printf("%p %d\n",&p[4][2] - &a[4][2],&p[4][2] - &a[4][2]);
	//  p[4][2] = *(*(p+4)+2)
	// &p[4][2],与&a[4][2]地址对应相减表示中间有四个元素，
	//输出为整形时输出4
	//输出为地址时，输出对应-4的补码(一个数地址是无符号数，相当于是他的补码)
	//-4原码：10000000 00000000 00000000 00000100
	//-4反码：11111111 11111111 11111111 11111011
	//-4补码：1111 1111 1111 1111 1111 1111 1111 1100
	//         F    F    F    F     F    F   F    C
    return 0;
}
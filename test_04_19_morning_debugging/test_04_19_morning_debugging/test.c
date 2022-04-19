#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	int i = 0;
//	for(i=0;i<100;i++)
//	{
//	   printf("%d ",i);
//	}
//
//	for(i=0;i<100;i++)
//	{
//	   printf("%d ",10-i);//F5跳到执行逻辑上的下一个断点，不是物理上的断点
//	}
//
//    return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//	   arr[i] = i;
//	}
//    return 0;
//}


//void test2()
//{
//printf("hehe\n");
//}
//
//void test1()
//{
//    test2();
//}
//
//void test()
//{
//    test1();
//}
//
//int main()
//{
//    test();
//	return 0;
//}

//int main()
//{
//	//调试 1！+ 2！+ 3！+...+n!
// int i = 0;
// int sum = 0;//保存最终结果
// int n = 0;
// int ret = 1;//保存n的阶乘
// scanf("%d", &n);
// for(i=1; i<=n; i++)
// {
// int j = 0;
// ret = 1;
// for(j=1; j<=i; j++)
// {
// ret *= j;
// }
// sum += ret;
// }
// printf("%d\n", sum);
// return 0; }


//int main()
//{
//   int i = 0;
//   int arr[10] = {1,2,3};
//   
//    printf("%p\n",&i);
//   printf("%p\n",arr);
//  
//
//   /*for(i=0; i<=12; i++)
//   {
//        arr[i] = 0;
//		printf("hehe\n");
//   }*/
//   return 0; 
//}


//void my_strcpy(char* dest,char* src)
//{
//       while(*src != '\0')//评分：6 ，不够简练
//	   {
//	   *dest = *src;
//	   src++;
//	   dest++;
//	   }
//	   *dest = *src;
//}
//
//void my_strcpy(char* dest,char* src)
//{
//       while(*dest++ = *src++)// 优化后，评分：7，0=0时条件为假
//	   {
//	   ;
//	   }
//}
//
//int main()
//{
//	//编写strcpy库函数
//
//	char arr1[] = "###########";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//
//	printf("%s\n",arr1);
//    return 0;
//}


//void my_strcpy(char* dest,char* src)
//{
//       assert(dest != NULL);//断言
//	   assert(src != NULL);//断言
//	   while(*dest++ = *src++) //优化后，评分：8
//       {
//	   ;
//	   }
//}
//
//int main()
//{
//	//编写strcpy库函数
//	char arr1[] = "############";
//	char arr2[] = "bit";
//	my_strcpy(arr1,NULL);
//
//	printf("%s\n",arr1);
//    return 0;
//}


//char* my_strcpy(char* dest,const char* src)//源拷贝到目的地，src不能被改变
//{
//	   char* ret = dest;
//       assert(dest != NULL);//断言
//	   assert(src != NULL);//断言
//
//	   //把src指向的字符串拷贝到dest指向的空间，包含‘\0’字符
//	   while(*dest++ = *src++) //优化后，评分：10
//       {
//	   ;
//	   }
//	   return ret;//ret为数组首地址
//}
//
//int main()
//{
//	//编写strcpy库函数
//	char arr1[] = "############";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//
//	printf("%s\n",my_strcpy(arr1,arr2));//函数链式访问
//    return 0;
//}


//int main()
//{
//	const int num = 10;
//	const int a = 2;
//
//    int* const pa = &a;
//	// const 放在指针变量的*左边时，修饰的是*p,也就是说：不能通过p来改变*p(num)的值
//	// const 放在指针变量的*右边时，修饰的是指针变量p本身，p不能被改变了
//	
//	int* p = &num;// const使num不能改变，但是并没有限制*p,因此num可通过*p改变
//
//	*p = 20;
//	*pa = 12;//error
//
//	printf("%d\n", num);
//	printf("%d\n",pa);
//    return 0;
//}



////规范代码书写strlen函数
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//断言指针，保证指针有效性
//	while(*str != '\0')
//	{
//	     count++;
//		 str++;
//	}
//	return count;
//}
//
//int main()
//{
//    char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//
//	return 0;
//}
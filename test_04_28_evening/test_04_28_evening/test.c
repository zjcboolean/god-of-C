#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//书写冒泡函数，使其可以对任意数据排序

//void qsort(void* base,
//	size_t num,
//	size_t width,
//	int( *cmp)(const void *e1,const void *e2)
//	);

     //第一个参数：待排序数组的首元素地址
     //第二个参数：待排序数组的元素个数
     //第三个参数：待排序数组的每个元素的大小-单位是字节
     //第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
     //函数指针的两个参数是：待比较的两个元素的地址     




//struct Stu
//{
//	char name[20];
//	int age;
//
//};
//
//void Swap(char* buf1,char* buf2,int width)
//{
//     int i = 0;
//	 for(i=0;i<width;i++)
//	 {
//	     char tmp = *buf1;
//		 *buf1 = *buf2;
//		 *buf2 = tmp;
//		 buf1++;
//		 buf2++;
//	 }
//}
//
//int cmp_int(const void* e1,const void* e2)
//{
//      return *(int*)e1 - *(int*)e2;
//}
//
//int cmp_stu_by_name(const void* e1,const void* e2)
//{
//      return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//             //箭头优先级比强制转换高，因此变量类型需要用括号括起来
//}
//
//int cmp_stu_by_age(const void* e1,const void* e2)
//{
//      return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
////实现bubble_sort函数的程序员，他是否知道未来排序的数据类型-不知道
////那程序员也不知道，待比较的两个元素的类型
//void bubble_sort(void*base ,int sz,int width,int (*cmp)(void* e1,void* e2))
//{
//       int i = 0;
//	   //躺数
//	   for(i=0;i<sz-1;i++)
//	   {
//	       int j = 0;
//		   for(j=0;j<sz-1-i;j++)
//		   {
//		       //两个元素的比较
//			   if(cmp((char*)base+j*width,(char*)base+width*(j+1))>0)
//			   {    //void*不能+-
//			        //交换
//				   Swap((char*)base+j*width,(char*)base+width*(j+1),width);
//
//			   }
//		   }
//	   }
//}
//
//void test1()
//{    //整数排序
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//}
//
//void test2()
//{
//    //结构体排序
//	struct Stu s[3] = {{"zhangsan",20},{"lisi",30},{"wangwu",10}};
//	int sz = sizeof(s)/sizeof(s[0]);
//	bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_age);
//	bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_name);
//}
//
//int main()
//{
//   test1();
//   test2();
//	return 0;
//}

//int main()
//{
//   //一维数组
//	int a[] = {1,2,3,4};//4*4=16
//	printf("%d\n",sizeof(a));//16 a表示数组
//	printf("%d\n",sizeof(a+0));//4 a表示首元素地址
//	printf("%d\n",sizeof(*a));//4 首元素
//	printf("%d\n",sizeof(a+1));//4 第二个元素
//	printf("%d\n",sizeof(a[1]));//4 第二个元素
//	printf("%d\n",sizeof(&a));//4/8 &a取出的是数组地址，数组地址是4或8个字节
//	printf("%d\n",sizeof(*&a));//16 访问整个数组
//	printf("%d\n",sizeof(&a+1));//4/8 取出下一个数组地址
//	printf("%d\n",sizeof(&a[0]));// 4/8  第一个元素地址
//	printf("%d\n",sizeof(&a[0]+1));// 4/8  第二个元素地址
//
//	return 0;
//}

//int main()
//{
//	//字符数组
//	char arr[] = {'a','b','c','d','e','f'};
//	printf("%d\n",sizeof(arr));//6 a表示数组
//	printf("%d\n",sizeof(arr+0));// 4/8 表示首元素地址
//	printf("%d\n",sizeof(*arr));//1 首元素
//	printf("%d\n",sizeof(arr[1]));//1 第二个元素
//	printf("%d\n",sizeof(&arr));//4/8 &a取出的是数组地址，数组地址是4或8个字节
//	printf("%d\n",sizeof(&arr+1));//4/8 取出下一个数组地址
//	printf("%d\n",sizeof(&arr[0]+1));// 4/8  第二个元素地址
//
//	
//    return 0;
//}

int main()
{
		//字符数组
	char arr[] = {'a','b','c','d','e','f'};
	printf("%d\n",strlen(arr));//随机值 没有\0
	printf("%d\n",strlen(arr+0));//随机值  表示首元素地址
	printf("%d\n",strlen(*arr));//非法访问 表示'a'
	printf("%d\n",strlen(arr[1]));//非法访问 第二个元素
	printf("%d\n",strlen(&arr));//随机值 &a取出的是数组地址
	printf("%d\n",strlen(&arr+1));//随机值 取出下一个数组地址
	printf("%d\n",strlen(&arr[0]+1));// 随机值  第二个元素地址
    return 0 ;
}
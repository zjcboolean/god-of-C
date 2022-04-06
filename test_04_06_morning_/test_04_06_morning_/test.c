#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#include"add.h"
//int is_prime(int n)
//{      int j = 0;
//       //for(j=2;j<=n-1;j++)
//         for(j=2;j<=sqrt(n);j++)
//	   {
//	   if(n%j==0)
//		   return 0;
//	   }
//	   if(j>sqrt(n))
//		   return 1;
//}
//int main()
//{
//	//用函数判断100-200之间的素数
//
//
//	int i = 0;
//	int count = 0;
//	for(i=100;i<=200;i++)
//	{
//	   if(is_prime(i) == 1)
//	   {
//	     printf("%d ",i);
//		 count++;
//	   }
//	}
//	printf("\ncount=%d\n",count);
//return 0;
//}


//int is_leap_year(int y)
//{
//     if(y%4==0&&y%100!=0 || y%400==0)
//	 {
//	 return 1;
//	 }
//	 else
//	 return 0;
//
//}
//
//int main()
//{     //函数求闰年
//	int year = 0;
//	int count = 0;
//	for(year=1000;year<=2000;year++)
//	{
//	   if(1 == is_leap_year(year))
//	   {
//	      printf("%d ",year);
//		  count++;
//	   }
//	}
//	printf("\n count=%d\n",count);
//return 0;
//}

//int binary_search(int arr[],int k,int sz)
//{     
//       int left = 0;
//	   
//	   int right = sz-1;
//	  
//
//	   while(left<=right)
//	   {
//		  int mid = (left+right)/2;
//	      if(arr[mid]<k)
//		  {
//		    left = mid+1;
//		  }
//		  else if(arr[mid]>k)
//		  {
//		    right = mid-1;
//		  }
//		  else
//			  return mid;
//	   }
//	   if(left>right)
//		   return -1;
//}
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回这个数的下标，找不到返回-1
//
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr,k,sz);//此处arr传递的是数组第一个元素的地址，arr实际上是一个指针
//	if(ret==-1)
//	{
//	  printf("找不到指定的数字\n");
//	}
//	else
//	{
//	  printf("找到了，下标是：%d\n",ret);
//	}
//return 0;
//}

//void Add(int* p)
//{
//    (*p)++;
//}
//int main()
//{       //写一个函数，每调用一次num就加一
//	int num = 0;
//	 Add(&num);
//	 printf("num=%d\n",num);//使实参值产生变化，参数需写为地址
//	 Add(&num);
//	 printf("num=%d\n",num);
//	 Add(&num);
//	 printf("num=%d\n",num);
//return 0;
//}

////函数的嵌套调用
//
//void new_line()
//{
//    printf("哈哈哈\n");
//}
//void three_line()
//{
//    int i = 0;
//	for(i=0;i<3;i++)
//	{
//	new_line();
//	}
//}
//int main()
//{
//	three_line();
//return 0;
//}

////函数的链式访问，一个函数的返回值为另一个参数的参数
//int main()
//{
//	//int len = 0;
//	//len = strlen("abc");
//	//printf("%d\n",len);
//
//	printf("%d\n",strlen("abc"));
//	printf("%d",printf("%d",printf("%d\n",43)));//4321,printf的返回值为打印的字符个数
//return 0;
//}

////函数的定义和声明
//
////函数的声明，不声明会有一个警告
//int Add(int,int);
//
//
//int main()
//{
//    int a = 10;
//	int b = 20;
//	int sum = 0;
////函数的调用
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
////函数的定义
//int Add(int x,int y)
//{
//       int z = x+y;
//	   return z;
//}


int main()
{
   int a = 10;
   int b = 20;
   int sum = Add(a, b);
   printf("%d\n",sum);
   return 0;
}
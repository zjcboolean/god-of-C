#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<limits.h>


//int main()
//{      
//	// 品茗公司考题  不使用第三个变量，交换整型变量a,b的值
//
//	//方法一：容易溢出
//     int a = 3;
//	 int b = 5;
//
//	 INT_MAX;//int 表示最大整数2147483647  
//	 printf("交换前：a=%d,b=%d\n",a,b);
//	 a=a+b;//当a,b特别大时，进位容易溢出，但可读性好
//	 b=a-b;
//	 a=a-b;
//	 printf("交换后：a=%d,b=%d\n",a,b);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("交换前：a=%d b=%d\n",a,b);
//
//	a = a^b;//使用异或优化，没有进位，不会产生溢出，但可读性差
//	b = a^b;
//	a = a^b;
//	printf("交换后：a=%d b=%d\n",a,b);
//
//    return 0;
//}


//int main()
//{
//    //Leetcode网站考题      给定一个非空整形数组，除了某个元素只出现一次以外，
//	//                      其他元素均出现两次，找到那个只出现一次的数
//
//	//暴力求解，效率太低 
//	int arr[] = {1,2,3,4,5,1,2,3,4};
//	
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<sz;i++)
//	{
//	     int j = 0;
//		 int count = 0;
//		 for(j=0;j<sz;j++)
//		 {
//			 if(arr[i]==arr[j])
//			 {
//			      count++;
//			 }
//		 }
//		 if(count==1)
//		 {
//		    printf("单身狗：%d\n",arr[i]);
//			break;
//		 }
//	}
//	return 0;
//}

int main()
{    
	//优化找单身狗，使用异或的方法

	//0^a = a
	//a^a = 0
	//3^5^3 = 5
	//3^3^5 = 5  说明异或计算满足交换律
	int arr[] = {1,2,3,4,5,6,7,8,7,6,5,4,3,2,1};
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
	   ret ^= arr[i];
	}
	printf("单身狗就是：%d\n",ret);
   return 0;
}
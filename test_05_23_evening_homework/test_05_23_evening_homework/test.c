#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	//五位同学，每人说两句话，有一半真，一半假，求五人的名次
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for(a=1;a<=5;a++)
//	{
//	    for(b=1;b<=5;b++)
//		{
//		   for(c=1;c<=5;c++)
//		   {
//		       for(d=1;d<=5;d++)
//			   {
//			      for(e=1;e<=5;e++)
//				  {
//				      if( ((b==2)+(a==3)==1) &&//a预测的名次
//						  ((b==2)+(e==4)==1) &&
//						  ((c==1)+(d==2)==1) &&
//						  ((c==5)+(d==3)==1) &&
//						  ((e==4)+(a==1)==1))
//					  {
//						  if(a*b*c*d*e==120)//使得得到的名次没有重复
//						  {
//						      printf("a=%d b=%d c=%d d=%d e=%d\n",a, b, c, d, e);
//						  }
//					     
//					  }
//				  }
//			   }
//		   }
//		}
//	}
//
//    return 0;
//}


//字符串进阶
// 实现一个函数，可以左旋字符串中的k个字符
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB


////方法一  暴力求解法（不是最优）
//
//void left_move(char* arr,int k)
//{
//	//assert(arr != NULL);//防止arr为空报错
//	int i = 0;
//	int len = strlen(arr);
//	
//	for(i=0;i<k;i++)
//	{
//	    //左旋转一个字符
//		//1
//		char tmp = *arr;
//		//2
//		int j = 0;
//		for(j=0;j<len-1;j++)
//		{
//			 *(arr+j) = *(arr+j+1);
//		}
//		//3
//		 *(arr+(len-1)) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr,2);
//
//	printf("%s\n",arr);
//
//    return 0;
//}

////方法二 三步翻转法
//  //abcdef
////1 bacdef
////2 bafedc
////3 cdefab
//
//
//void reverse(char* left,char* right)
//{
//     
//	 while(left<right)
//	 {
//	     char tmp = *left;
//		 *left = *right;
//		 *right = tmp;
//		 left++;
//		 right--;
//	 }
//
//}
//
//void left_move(char* arr,int k)
//{
//	 
//	  int len = strlen(arr);
//      reverse(arr,arr+k-1);//逆序左边
//	  reverse(arr+k,arr+len-1);//逆序右边
//	  reverse(arr,arr+len-1);//逆序整体
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr,2);
//	printf("%s\n",arr);
//
//    return 0;
//}


////写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串
////例如 s1 = AABCD   s2 = BCDAA,返回1
////给定 s1 = abcd    s2 = ABCD ,返回0
////AABCD左旋一个字符得到ABCDA
////AABCD左旋两个字符得到BCDAA
////AABCD右旋一个字符得到DAABC
//
//
//
//void reverse(char* left,char* right)
//{
//     
//	 while(left<right)
//	 {
//	     char tmp = *left;
//		 *left = *right;
//		 *right = tmp;
//		 left++;
//		 right--;
//	 }
//
//}
//
//void left_move(char* arr,int k)
//{
//	 
//	  int len = strlen(arr);
//      reverse(arr,arr+k-1);//逆序左边
//	  reverse(arr+k,arr+len-1);//逆序右边
//	  reverse(arr,arr+len-1);//逆序整体
//}
////左旋有6种情况
////abcdef
////bcdefa
////cdefab
////defabc
////efabcd
////fabcde
//int is_left_move(char* s1,char* s2)
//{
//      int len = strlen(s1);
//	  int i = 0;
//	  for(i=0;i<len;i++)
//	  {
//		 int ret = 0;
//	     left_move(s1,1);
//		 ret = strcmp(s1,s2);
//		 if(ret == 0)
//			 return 1;
//	  }
//	  return 0;
//}
//
//int main()
//{
//    char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1,arr2);
//	if(ret==1)
//	{
//	   printf("Yes\n");
//	}
//	else
//	{
//	   printf("No\n");
//	}
//	return 0;
//}


////判断两个左旋字符串是否相等
////方法二
//
//int is_left_move(char* str1,char* str2)
//{      char* ret;
//	   int len1 = strlen(str1);
//	   int len2 = strlen(str2);
//	   if(len1 != len2)
//	   {
//	       return 0;
//	   }
//      //1.在str1字符串中追加一个str1字符串
//	  //strcat 不能自己给自己追加字符串，程序会崩溃
//	  //  strcat(str1,str2) error
//	  //strncat 
//	   strncat(str1,str2,len1);
//	  //2.判断str2指向的字符串是否是str1指向的字符串的子串
//	  //strstr-找子串的
//	   ret = strstr(str1,str2);//找到返回首字母地址，找不到返回NULL
//	   if(ret == NULL)
//	   {   
//		   return 0;
//	   }
//	   else
//	   {
//	       return 1;
//	   }   
//}
//
//int main()
//{
//    char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1,arr2);
//	if(ret==1)
//	{
//	   printf("Yes\n");
//	}
//	else
//	{
//	   printf("No\n");
//	}
//	return 0;
//}


//杨氏矩阵
//要求：有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//      请编写程序在这样的矩阵中查找某个数字是存在的
// 时间复杂度小于O（N）,如果遍历要寻找N次，时间复杂度小于O（N）意味着不能使用遍历算法

//1 2 3
//4 5 6
//7 8 9

int FindNum(int arr[3][3],int k,int* px, int* py)
{
    int x = 0;
	int y = *py - 1;
	
	while(x<=*px-1 && y>=0)
	{
	   if(arr[x][y]>k)
	{
	   y--;
	}
	else if(arr[3][3]<k)
	{
	   x++;   
	}
	else
	{
		*px = x;
		*py = y;
	   return 1;
	}
	}
}
int main()
{
	int arr[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
	int k = 7;
	int x = 3;
	int y = 3;
	int ret = FindNum(arr,k,&x,&y);//&x,&y为返回型参数
	if(ret == 1)
	{
	   printf("找到了\n");
	   printf("下标是：%d %d\n",x,y);
	}
	else
	{
	   printf("找不到\n");
	}

    return 0;
}
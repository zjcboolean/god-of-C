#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>

//int main()
//{      //指针笔试题
//	int aa[2][5] = {1,2,3,4,5,6,7,8,9,10};

//	int *ptr1 = (int*)(&aa +1);
//	int *ptr2 =(int *)(*(aa + 1));
//
//      //*(p+2) == p[2] == *(arr+2) ==arr[2] 
//	printf("%d %d\n",*(ptr1 - 1),*(ptr2 - 1));//ptr指针类型为int*,ptr-1表示跳过4个字节
//
//    return 0;
//}

//int main()
//{
//	char *a[] = {"work","at","alibaba"};
//	char **pa = a;
//
//	pa++;
//	printf("%s\n",*pa);//*pa表示取出pa里存放的东西
//    return 0;
//}


//int main()
//{
//	char *c[] = {"ENTER","NEW","POINT","FIRST"};
//	char**cp[] = {c+3,c+2,c+1,c};
//	char***cpp = cp;
//
//	printf("%s\n",**++cpp);//POINT
//	printf("%s\n",*--*++cpp + 3);//ER
//	printf("%s\n",*cpp[-2]+3);//ST
//	printf("%s\n",cpp[-1][-1] + 1);//EW
//
//    return 0;
//}


////作业 逆序字符串
//
//void reverse(char* str)
//{
//	//assert(str);//断言
//
//	int len = strlen(str);
//	
//	char* left = str;
//	char* right = str + len - 1;
//
//	while(left<right)
//	{
//	char tmp = *left;
//	*left=*right;
//	*right = tmp;
//	left++;
//	right--;
//	}
//}
//
//int main()
//{
//	char arr[256] = {0};
//	scanf("%s",arr);//abcdef-->fedcba
//	//get(arr);//读取一行，防止字符串中间有空格,VS2010不支持
//	//逆序函数
//	reverse(arr);
//	printf("逆序后的字符串%s\n",arr);
//
//   return 0;
//}


////作业 
////求Sn=a+aa+aaa+aaaa+aaaaa的前五项之和，其中a是一个数字
////例如 2+22+222+2222+22222
//
//int main()
//{
//	int a = 0;//首项
//	int n = 0;//项数
//	int i = 0;
//	int ret = 0;//每一项
//	int sum = 0;//求和
//	printf("请输入a,n =");
//	scanf("%d %d",&a,&n);
//
//	for(i=0;i<n;i++)
//	{
//	    ret = ret*10+a;
//		sum +=ret;
//	}
//
//	printf("%d\n",sum);
//    return 0;
//}

////作业  求取水仙花数（1-100000）
//
////一个n位数，每一项n次方之和等于它本身
//
//int main()
//{
//	int i = 0;
//	for(i=0;i<=100000;i++)
//	{
//	    //判断i是否为水仙花数（自幂数）
//		//1.计算i的位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while(tmp/=10)
//		{
//		    n++;
//		}
//		//2.计算i每一位n次方之和
//		tmp = i;
//		while(tmp)
//		{
//		  sum += (int)pow(tmp%10,n);//pow返回数据类型为double
//		  tmp /=10;
//		}
//		//3.比较i == sum
//		if(i == sum)
//		{
//		   printf("%d ",i);
//		}
//	}
//
//    return 0;
//}


////作业  打印一个菱形，13行
////      *
////     ***
////	  *****
////   *******
////  *********
//// ***********
////*************
//// ***********
////  *********
////   *******
////    *****
////	   ***
////	    *
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	printf("请输入行数 line= ");
//	scanf("%d",&line);//打印7行
//	
//	//打印上半部分
//	
//	for(i=0;i<line;i++)
//	{
//	     //打印空格
//		int j = 0;
//		for(j=0;j<line-1-i;j++)
//		{
//		    printf(" ");
//		}
//	     //打印*
//		for(j=0;j<2*i+1;j++)
//		{
//		   printf("*");
//		}
//		printf("\n");
//	}
//	
//	//打印下半部分
//	for(i=0;i<line-1;i++)
//	{
//		int j = 0;
//	     //打印空格
//		for(j=0;j<i+1;j++)
//		{
//		   printf(" ");
//		}
//	     //打印*
//		for(j=0;j<2*(line-1-i)-1;j++)
//		{
//		   printf("*");
//		}
//		printf("\n");
//	}
//    return 0;
//}


////作业 
//// 喝汽水，一瓶汽水一元，两个空瓶换一元，给二十元，喝多少汽水
////算法一
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d",&money);
//	//买回来的汽水喝掉
//	total = money;
//	empty = money;
//	//换回来的汽水
//	while(empty>=2)
//	{
//	    total +=empty/2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("喝了%d瓶",total);
//
//
//    return 0;
//}


////喝汽水 算法二
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d",&money);
//	if(money == 0)
//	{
//	    total = 0;
//	}
//	else
//	{
//	    total = 2 * money -1;
//	}
//
//	printf("%d",total);
//    return 0;
//}

////error 死循环
//int main()
//{
//	int i = 0;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0;i<=12;i++)
//	{
//	    arr[i] = 0;
//		printf("hello bit\n");
//	}
//
//    return 0;
//}

////调整奇数偶数顺序，调整数组使奇数全部都位于偶数前面

//void print(int arr[],int sz)
//{
//       int i = 0;
//	   for(i=0;i<sz;i++)
//	   {
//	      printf("%d ",arr[i]);
//	   }
//	   printf("\n");
//}
//
//int move(int arr[],int sz)
//{
//      int left = 0;
//	  int right = sz - 1;
//
//	  while(left<right)
//	  {
//	       //找偶数
//	  while((left<right) && arr[left]%2 == 1)//害怕全是奇数，越界
//	  {
//	     left++;
//	  }
//	  //找奇数
//	  while((left<right) && arr[right]%2 == 0)//害怕全是偶数，越界
//	  {
//	     right--;
//	  }
//	  if(left<right)
//	  {
//	       int tmp = arr[left];
//		   arr[left] = arr[right];
//		   arr[right] = tmp;
//	  }
//	  }
//}
//
//int main()
//{
//
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//变为 1 3 5 7 9 2 4 6 8 10
//	move(arr,sz);
//	print(arr,sz);
//    return 0;
//}
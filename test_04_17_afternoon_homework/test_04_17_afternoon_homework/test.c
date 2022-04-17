#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int count_bit_one1(unsigned int n)//方法一
//{
//	int count = 0;
//      while(n)
//	  {
//	      if(n % 2 == 1)
//		  {
//		    count++;
//		  }
//		  n = n/2;
//	  }
//	  return count;
//}
//
//int count_bit_one2(int n)//方法二
//{
//	 int i = 0;
//     int count = 0;
//	 for(i=0;i<32;i++)
//	 {
//	    if(((n>>i) & 1) == 1)
//		{
//		  count++;
//		}
//	 }
//	 return count;
//}
//
//int count_bit_one3(int n)//最优解
//{
//	 int count = 0;
//     while(n)
//	 {
//	     n = n & (n-1); //每次去掉n补码中最右边的1
//		 count++;
//	 }
//	 return count;
//}
//
//int main()
//{
//	//写一个函数，求二进制(补码)中有几个1

//	int a = 0;
//	int count1 = 0;
//	int count2 = 0;
//	int count3 = 0;
//	printf("请输入：>");
//	scanf("%d",&a);
//	count1 = count_bit_one1(a);
//	count2 = count_bit_one2(a);
//	count3 = count_bit_one3(a);
//	printf("count1 = %d\n",count1);
//	printf("count2 = %d\n",count2);
//	printf("count3 = %d\n",count3);
//	//system("pause");//system库函数-执行系统命令-pause(暂停)
//    return 0;  
//}

//int Differ_bit1(int m,int n)
//{
//      int i = 0;
//	  int count = 0;
//	  for(i=0;i<32;i++)
//	  {
//	     if(((m>>i) & 1) != ((n>>i) & 1))
//		 {
//		    count++;
//		 }
//	  }
//	  return count;
//}
//
//int Differ_bit2(int m,int n)
//{
//	int tmp = 0;
//	int count = 0;
//        tmp = m^n;
//		while(tmp)
//		{
//		    tmp = tmp & (tmp - 1);
//			count++;
//		}
//		return count;
//}
//
//int main()
//{
//	//两个int整数a,b,二进制表达式中，有多少个（bit）不同
//	
//	int a,b = 0;
//	int count1 = 0;
//	int count2 = 0;
//	printf("请输入a,b:>");
//	scanf("%d%d",&a, &b);
//	 count1 = Differ_bit1(a,b);
//	 count2 = Differ_bit2(a,b);
//	printf("有%d个bit(位)不同\n",count1);
//	printf("有%d个bit(位)不同\n",count2);
//
//    return 0;
//}

//void print(int m)
//{
//   int i = 0;
//   printf("奇数位:");
//   for(i=30;i>=0;i-=2)
//   {
//      printf("%d ",(m>>i) & 1);
//   }
//   printf("\n");
//   printf("偶数位:");
//   for(i=31;i>=1;i-=2)
//   {
//      
//	  printf("%d ",(m>>i) & 1);
//   }
//   printf("\n");
//
//}
//
//int main()
//{
//	//打印二进制的奇数位和偶数位，分别打印出二进制序列
//
//	int m = 0;
//	printf("请输入数：>");
//	scanf("%d",&m);
//	print(m);
//	
//    return 0;
//}

//void print(int* p,int sz)
//{
//     int i = 0;
//	 for(i=0;i<sz;i++)
//	 {
//	    printf("%d ",*(p+i));
//	 }
//}
//
//int main()
//{
//	int arr[]= {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}

//
//int Fun(int n)
//{
//    if(n==5)
//		return 2;
//	else
//		return 2*Fun(n+1);
//}
//
//int main()
//{
//    int n = 2;
//	int count = Fun(n);
//	printf("Fun(2)的返回值为%d\n ",count);
//	return 0;
//}

//void print_table(int n)
//{
//     int i = 0;
//	 for(i=1;i<=n;i++)
//	 {
//	    int j = 0;
//		for(j=1;j<=i;j++)
//		{
//		   printf("%d*%d=%-5d",i,j,i*j);
//		}
//		printf("\n");
//	 }
//}
//
//int main()
//{
//	//打印乘法口诀表
//
//	int n = 0;
//	printf("请输入：>");
//	scanf("%d",&n);
//    print_table(n);
//    return 0;
//}

//void  reverse_string(char arr[])
//{
//    int left = 0;
//	int right = my_strlen(arr)-1;
//
//	while(left<right)//循环办法实现
//	{
//	int tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	left++;
//	right--;
//	}
//
//}
//int my_strlen(char* str)
//{
//       int count = 0;
//	   while(*str != '\0')
//	   {
//	       count++;
//		   str++;
//	   }
//	   return count;
//}
//
//int main()
//{
//	//编写一个函数reverse_string(char* string)
//	//将字符串中的字符实现反向排列
//	//要求：不能使用C函数库中的字符串操作函数
//	char arr[] = "abcdef";
//    reverse_string(arr);
//	printf("%s\n",arr);
//   return 0;
//}


//void reverse_string(char arr[])
//{
//      char tmp = arr[0];
//	  int len = my_strlen(arr);
//
//	  arr[0]=arr[len-1];
//	  arr[len-1] = '\0';
//	  if(my_strlen(arr+1)>=2)
//	  {
//	  reverse_string(arr+1);
//	  }
//	  arr[len-1] = tmp;
//}

//递归实现字符串的逆序排列

//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//
//	printf("%s\n",arr);
//    return 0;
//}


//int DigitSum(unsigned int num)
//{
//	if(num>9)
//	{
//	return DigitSum(num/10) + num%10;
//	}
//	else
//		return num;
//
//}
//
//int main()
//{
////写一个递归函数DigitSum(n),输入一个非负整数，返回组成它的数字之和
////例如，调用DigitSum(1729),则应该返回1+7+2+9，它的和是19，输入：1729，输出：19
//
//	unsigned int num = 0;
//	int ret = 0;
//	printf("请输入：>");
//	scanf("%d",&num);
//	ret = DigitSum(num);
//
//	printf("ret =%d\n ",ret);
//    return 0;
//}


//double Pow(int n,int k)
//{
//   //n^k=n*n^(k-1)
//	if(k<0)
//		return (1.0/(Pow(n,-k)));
//	else if(k==0)
//		return 1;
//	else
//		return n*Pow(n,k-1);
//}
//
//int main()
//{
//	//用递归方式实现n^k (power次方)
//	int n = 0;
//	int k = 0;
//	double ret = 0;
//	scanf("%d%d",&n, &k);
//	ret = Pow(n,k);
//	printf("ret = %lf\n",ret);
//
//    return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	printf("呵呵\n");
//	main();
//return 0;
//}

//void print(int n)
//{
//        if(n>9)
//		{
//		   print(n/10);
//		}
//		printf("%d ",n%10);
//}
//int main()
//{    //递归
//
//	//输入一个数num=1234，将它按从左到右的顺序打印出来
//	int num = 0;
//	printf("请输入num= ");
//	scanf("%d",&num);
//
//	print(num);
//    return 0;
//}


//int my_strlen(char* str)
//{     
//	  int count = 0;
//      while(*str != '\0')
//	  {
//	       count++;
//		   str++;
//	  }
//	  return count;
//
//}
////  创建临时变量的方法求字符串长度
//
//int main()
//{
//	char arr[] = "bite";
//	int len = my_strlen(arr);
//	printf("字符串的长度= %d\n",len);
//return 0;
//}



//int my_strlen(char* str)
//{
//      if((*str) != '\0')
//		  return 1+my_strlen(str+1);
//	  else 
//		  return 0;
//}
//
//int main()
//{    //不建立临时变量，采用递归的方法求字符串长度
//	  char arr[] = "bitr";
//	  int len = my_strlen(arr);
//	  printf("字符串的长度=%d\n",len);
//
//
//return 0;
//}


//int Fac(int n)
//{
//       int i = 0;
//	   int ret = 1;
//	   for(i=1;i<=n;i++)
//	   {
//	   ret = ret*i;
//	   }
//	   return ret;
//}
//int main()
//{
//	//使用循环求n的阶乘
//
//	int n = 0;
//	int ret = 0;
//	printf("请输入n=");
//	scanf("%d",&n);
//	ret =Fac(n);
//	printf("%d\n",ret);
//return 0;
//}


//int Fac(int n)
//{
//    if(n>=1) 
//	{
//		return n*Fac(n-1);
//	}
//	else
//	{
//	return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入n=");
//	scanf("%d",&n);
//    ret = Fac(n);
//
//	printf("%d!=%d\n",n,ret);
//return 0; 
//}



//int Fib(int n)
//{
//      if(n>2)
//	  {
//	  return Fib(n-1)+Fib(n-2);
//	  }
//	  else
//	  return 1;
//}
//
////求第n个斐波那契数用递归效率太低
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入：n=");
//	scanf("%d",&n);
//	ret = Fib(n);
//
//	printf("第%d个斐波那契数=%d\n",n,ret);
//return 0;
//}



//int Fib(int n)
//{
//      int a = 1;
//	  int b = 1;
//	  int c = 1;
//      while(n>2)
//	  {
//	  c = a+b;
//	  a = b;
//	  b = c;
//	  n--;
//	  }
//	  return c;
//}
//
//int main()
//{ 
//	//使用循环的方法求第n个斐波那契数更快
//	int n = 0;
//	int ret = 0;
//	printf("请输入n=");
//	scanf("%d",&n);
//	ret = Fib(n);
//
//	printf("第%d个斐波那契数=%d\n",n,ret);
//	return 0;
//}

//void test(int n)
//{
//     if(n<10000)
//	 {
//	     test(n+1);
//	 }
//}
//     //递归使用起来很容易栈溢出
//int main()
//{
//    test(1);
//	return 0;
//}


//int floor(int n)
//{
//      if(n>=2)
//	  {
//	  return 1+2*floor(n-1);//1.从A柱把n-1个盘子移到B柱
//	  }                   //2.从A柱把第n个盘子移到C柱
//	  else                //3.从B柱把n-1个盘子移到C柱
//	  return 1;
//}
//
//int main()
//{     //位于A柱n层汉诺塔经由B柱移位到C柱，需要移动多少次
//	  //汉诺塔每次都是下大上小排列
//	int n = 0;
//	int count = 0;
//	printf("请输入汉诺塔层数n=");
//	scanf("%d",&n);
//	count = floor(n);
//
//	printf("需要移动%d次\n",count);
//    return 0;
//}


//int step(int n)
//{     if(n==1)//与求斐波那契数有异曲同工之妙，使用递归法效率太慢，适合循环法
//        return 1;
//      else if(n==2)
//	  {
//        return 2;
//      }
//	  else
//		return step(n-1)+step(n-2);
//
//}
int step(int n)
{       int a = 1; //循环法求跳台阶方法
        int b = 2;
		int c = 0;
      if(n>2)
	  {
		while(n>2)
	   {
	        c = a+b;
			a = b;
			b = c;
			n--;
	   }
	   return c;
	  }
	  else if(n==1)
	   return 1;
	  else
	  {
	   return 2;
	  }
}

int main()
{       //青蛙跳台阶，每次可以跳一级台阶或者跳两级台阶，求跳上第n级台阶有多少种跳法
	    // 我们设台阶数位N;

//当N=1时，当然只有1种跳法;
//
//当N=2时，青蛙可以跳2次1层和跳1次2层,有2种跳法
//
//当N=3时，当有3层台阶时，青蛙可以选择先跳1层，剩下2层台阶，所以此时就是有2层台阶时的跳法，有2种;
//        当青蛙选择第一次跳2层台阶时，剩下1层台阶，此时有1层台阶时的跳法
//        所以3层台阶时的方法是: 2层台阶的方法+ 1层台阶的方法。
//
//当N=4时，具体跳法为: 1、先跳1层若先跳1层，则剩下3层，接下来就是3层台阶的跳法。
//                   2、 先跳2层若先跳2层，则剩下2层，接下俩就是2层台阶的跳法，
//                   所以4层台阶的方法为: 3层台阶的方法+2层台阶的方法。
//
//以此类推，当N=n时，n层台阶的方法为: n-1层台阶的方法+ n-2层台阶的方法。
	    // 
	int n;
	int count = 0;
	printf("请输入台阶数n=");
	scanf("%d",&n);

    count=step(n);
	printf("跳到第%d级台阶有%d种跳法\n",n,count);

return 0;
}
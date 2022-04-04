#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>

//int main()
//
//{
//   //多个字符从两端移动向中间汇聚
//
//	char arr1[] = "welcome to bit!!!!!!!";
//	char arr2[] = "*********************";
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while(left<=right)
//	{
//	arr2[left] = arr1[left];
//	arr2[right] = arr1[right];
//	printf("%s\n",arr2);
//	Sleep(1000);//数单延时函位为毫秒,头文件#include<windows.h>
//	system("cls");//执行系统命令的一个函数—cls-清空屏幕,头文件#include<stdlib.h>
//	left++;
//	right--;
//	}
//	return 0;
//}


//int main()
//{
//	//用户输入密码，最多输入三次
//	char arr[20] = "0";
//	int i = 0;
//	 
//	
//
//	for(i=0;i<3;i++)
//	{ 
//	  printf("请输入密码：>");
//	  scanf("%s",&arr);
//	  if(strcmp(arr,"123456") == 0)
//	  {
//			printf("密码输入正确，登陆成功\n");
//	        break;
//	  }
//	  else
//	  {
//	  printf("密码输入错误\n");
//	  }
//	}
//	if(i==3)
//	{
//	printf("三次密码均错误，退出程序\n");
//	}
//
//return 0;
//}

//int main()
//{
//	//将三个数从大到小，或者从小到大输出
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	printf("亲输入三个数");
//	scanf("%d%d%d",&a,&b,&c);
//
//	if(a>b)
//	{
//	int mid = a;
//		a = b;
//		b = mid;
//	}
//	if(a>c)
//	{
//	int mid = a;
//		a = c;
//		c = mid;
//	}
//	if(b>c)
//	{
//	int mid = b;
//		b = c;
//		c = mid;
//	}
//	printf("%d %d %d\n",a,b,c);
//
//	
//
//return 0;
//}

//int main()
//{
////打印3的倍数的数
//	int i = 0;
//
//	for(i=1;i<+100;i++)
//	{
//	if(i%3==0)
//	{
//	printf("%d\n",i);
//	}
//	}
//	return 0;
//}

//int main()
//{
//    //求两个数的最大公约数(辗转相除法)
//	int a = 0;
//	int b = 0;
//	int mid = 0;
//	int c = 0;
//	printf("请输入a,b");
//	scanf("%d%d",&a,&b);
//
//	if(a<b)
//	{
//	    mid = a;
//		a = b;
//		b = mid;
//	}
//	while(a%b != 0)
//	{
//	    c = a%b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n",b);
//	return 0;
//}


//int main()
//{    
//	//1.打印1000年到2000年之间的闰年,
//	//判断闰年规则
//	// 1.能被4整除并且不能被100整除是闰年
//	// 2.能被400整除是闰年
//	int year = 0;
//	int count = 0;
//	for(year=1000;year<=2000;year++)
//	{
//		if(year%4==0 && year%100!=0)
//		{
//	        printf("%d ", year );
//			count++;
//	    }
//		else if(year%400==0)
//		{
//		 printf("%d ", year );
//		 count++;
//		}
//	}
//	printf("%d ", count );
//return 0;
//}

//int main()
//{
//	//找到100到200之间的素数
//	//1.素数判断规则试除法(效率较差)，素数只有1和它本身会被整除
//	//优化1：如果a=b*c,则b,c中至少有一个小于sqrt(a)（写a/2也可）
//  //优化 2：在优化1的基础上，把i中偶数拿掉，可减小运算次数
//	
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for(i=100;i<=200;i++)
//	{
//	   //for(j=2;j<i;j++)
//		 for(j=2;j<=sqrt(i);j++)
//	   {
//	      if(i%j==0)
//		  {
//		  break;
//		  }
//	   
//	   }
//	//if(i==j)
//	if(j>sqrt(i))
//	{
//	printf("%d ",i);
//	count++;
//	}
//	}
//	printf("\ncount = %d\n",count);
//
//return 0;
//}

//     接上述优化2

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for(i=101;i<=200;i+=2)
//	{
//	   //for(j=2;j<i;j++)
//		 for(j=2;j<=sqrt(i);j++)
//	   {
//	      if(i%j==0)
//		  {
//		  break;
//		  }
//	   
//	   }
//	//if(i==j)
//	if(j>sqrt(i))
//	{
//	printf("%d ",i);
//	count++;
//	}
//	}
//	printf("\ncount = %d\n",count);
//
//
//return 0;
//}


//int main()
//{       //数1到100的所有整数中出现多少个数字9
//	    int i = 0;
//		int count = 0;
//		
//		int sum;
//		for(i=1;i<=100;i++)
//	    {  
//		   if(i%10==9)
//		   {
//		   count++;
//		   }
//		   if(i/10==9)
//		   {
//		   count++;
//		   }
//		   
//		}
//		printf("count= %d\n",count);
//return 0;
//}


//int main()
//{    
//	//计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100
//	//方法一，直接算法
//
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//    for(i=1;i<=100;i++)
//	{
//	sum += flag*1.0/i;
//	flag = -flag;
//	}
//	printf("%lf",sum);
//
//return 0;
//}

//int main()
//{
//     //计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100
//	//方法二，分母为奇数项相加 - 分母为偶数项相加
//
//	int i,j = 0;
//	double sum1 = 0.0;
//	double sum2 = 0.0;
//	double sum = 0.0;
//	for(i=1,j=2;i<=99,j<=100;i+=2,j+=2)
//	{
//	sum1 += 1.0/i;
//	sum2 += 1.0/j;
//	}
//	sum = sum1-sum2;
//	printf("%lf ",sum);
//}



//int main()
//{
//
//	//求10个整数中的最大值
//	int arr[] = {-1,-3,-7,-3,10,8,3,9};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int max = arr[0];
//	int i = 0;
//	for(i=1;i<=sz;i++)
//	{
//	   if(max<arr[i])
//	   {
//		 max = arr[i];
//	   }
//	}
//	printf("最大值：max=%d ",max);
//return 0;
//}

int main()
{
	//在屏幕上输出9*9乘法口诀表
	int i = 0;
	int j = 0;
	int a = 0;
	for(i=1;i<=9;i++)
	{
	for(j=1;j<=i;j++)
	{
		a=i*j;
	printf("%d*%d=%-2d ",i,j,a);//%2d意思是打印两位，%-2d意思是打印两位且左对齐
	}
	printf("\n");
	}
return 0;
}
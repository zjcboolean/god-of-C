#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//函数指针数组的案例 - 转移表

//计算器

void menu()
{
	printf("*****************************\n");
	printf("**  1. add          2. sub **\n");
	printf("**  3. mul          4. div **\n");
	printf("**  5. Xor                   \n");
	printf("*******************************");
}

int Add(int x,int y)
{
    return x + y;
}

int Sub(int x,int y)
{
    return x - y;
}

int Mul(int x,int y)
{
    return x * y;
}

int Div(int x,int y)
{
    return x / y;
}

int Xor(int x,int y)
{
    return x ^ y;
}


//int main()
//{
//     方法一（函数指针数组实现）
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	//pfArr 是一个函数指针数组
//	int (*pfArr[])(int,int) = {0,Add,Sub,Mul,Div,Xor};
//
//	do
//	{
//	    menu();
//		printf("请选择：>");
//		scanf("%d",&input);
//        if(input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数：>");
//			scanf("%d%d",&x, &y);
//			ret = pfArr[input](x,y);
//			printf("%d\n",ret);
//		}
//		else if(input == 0)
//		{
//		    printf("退出\n");
//		}
//		else
//		{
//		    printf("选择错误\n");
//		}
//
//		
//
//	}while(input);
//
//     return 0;
//}



//int main()
//{
//	//方法二（耗费空间大）
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//	    menu();
//		printf("请选择：>");
//		scanf("%d",&input);
//		printf("请输入两个操作数：>");
//		scanf("%d%d",&x, &y);
//
//		switch(input)
//		{
//		case 1:
//          printf("请输入两个操作数：>");//这种方法，每增加一个函数就要加两句printf和scanf,太笨了
//		    scanf("%d%d",&x, &y);
//			printf("%d\n",Add(x,y));
//			break;
//		case 2:
//          printf("请输入两个操作数：>");
//		    scanf("%d%d",&x, &y);
//			printf("%d\n",Sub(x,y));
//			break;
//		case 3:
//          printf("请输入两个操作数：>");
//		    scanf("%d%d",&x, &y);
//			printf("%d\n",Mul(x,y));
//			break;
//		case 4:
//          printf("请输入两个操作数：>");
//		    scanf("%d%d",&x, &y);
//			printf("%d\n",Div(x,y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误");
//		    break;
//		}
//
//	}while(input);
//
//     return 0;
//}

////方法三（优化方法二）
//void Calc(int (*pf)(int,int))
//{
//     int x = 0;
//	 int y = 0;
//	 printf("请输入两个操作数：>");
//	 scanf("%d%d",&x,&y);
//	 printf("%d\n",(*pf)(x,y));
//}
//
//int main()
//{
//	
//	int input = 0;
//	
//	do
//	{
//	    menu();
//		printf("请选择：>");
//		scanf("%d",&input);
//		
//
//		switch(input)
//		{
//		case 1:
//          Calc(Add);
//			break;
//		case 2:
//          Calc(Sub);
//			break;
//		case 3:
//          Calc(Mul);
//			break;
//		case 4:
//          Calc(Div);;
//			break;
//		case 5:
//		  Calc(Xor);
//		    break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误");
//		    break;
//		}
//
//	}while(input);
//
//     return 0;
//}


//int Add(int x,int y)
//{
//    return x + y;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int (*p)[10] = &arr;//指针数组
//
//	int (*pf)(int,int);//函数指针
//	int(*pfArr[4])(int,int);//pfArr是一个数组-函数指针数组
//	int (*(*ppfArr)[4])(int,int) = &pfArr;
//	//ppfArr是一个指向[函数指针数组]的指针
//	
//	//ppfArr是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针 int(*)(int,int)
//
//    return 0;
//}

//回调函数案例
//案例一 间接调用函数
//void print(char *str)
//{
//     printf("hehe:%s",str);
//}
//
//void test(void (*p)(char *str))
//{
//     printf("test\n");
//	 p("bit");
//}
//
//int main()
//{
//	test(print);
//
//    return 0;
//}

////案例二 整形冒泡排序
//
////bubble_sort(arr,sz);只能进行整数冒泡排序
//void bubble_sort(int arr[],int sz)
//{
//      int i = 0;
//	  for(i=0;i<sz-1;i++)
//	  {
//	      //一趟冒泡排序
//		  int j = 0;
//		  for(j=0;j<sz-1-i;j++)
//		  {
//		      if(arr[j]>arr[j+1])
//			  {
//			     int tmp = arr[j];
//				 arr[j] = arr[j+1];
//				  arr[j+1] = tmp;
//			  }
//		  }
//	  
//	  }
//}
//int main()
//{
//	int arr[10] = {5,3,7,8,9,12,97,31,51,62};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//
//	bubble_sort(arr,sz);
//	for(i=0;i<sz;i++)
//	{
//	   printf("%d ",arr[i]);
//	}
//
//    return 0;
//}

//案例二(优化) 浮点型冒泡排序(qsort函数)-quick sort
//qsort头文件 #include <stdlib.h>
//void qsort(void *base,
//	       size_t num,
//		   size_t width,
//		   int( *cmp)(const void *e1,const void *e2)
//		   );

struct Stu 
{
      
      char name[20];
	  int age;
};



int cmp_int(const void* e1,const void* e2)
{
   //比较两个整形值的
   //void* 类型的指针 可以接收任意类型的地址
   //void* 类型的指针 不能进行解引用操作
   //void* 类型的指针 不能进行+-整数的操作
	return *(int*)e1 - *(int*)e2 ;
}

int cmp_float(const void*e1,const void* e2)
{
    return ((int)(*(float*)e1 - *(float*)e2));
	//if(*(float*)e1 == *(float*)e2)
	//       return 0;
    //else if(*(float*)e1 > *(float*)e2)
	//		 return 1;
	//else
	//       return -1;
}

int cmp_stu_by_age(const void* e1,const void* e2)
{
   return  ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;

}

int cmp_stu_by_name(const void* e1,const void* e2)
{
	//比较名字就是比较字符串
   //字符串大小比较不能用>、<、=
   return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name); 
}

void test1()
{
    int arr[10] = {5,3,7,8,9,12,97,31,51,62};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int i = 0;
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
    for(i=0;i<sz;i++)
	{
	   printf("%d ",arr[i]);
	}

}
void test2()
{
    float f[] = {9.0,8.0,7.0,6.0,5.0,4.0};
	int sz = sizeof(f)/sizeof(f[0]);
	int j = 0;
	qsort(f,sz,sizeof(f[0]),cmp_float);
    for(j=0;j<sz;j++)
	{
	   printf("%f ",f[j]);
	}
}

void test3()
{
    struct Stu s[3] = {{"zhangsan",20},{"lisi",30},{"wangwu",10}};
	int sz = sizeof(s)/sizeof(s[0]);

	qsort(s,sz,sizeof(s[0]),cmp_stu_by_age);
}

void test4()
{
     struct Stu s[3] = {{"zhangsan",20},{"lisi",30},{"wangwu",10}};
	int sz = sizeof(s)/sizeof(s[0]);

	qsort(s,sz,sizeof(s[0]),cmp_stu_by_name);
}
int main()
{
	test1();
	test2();
	test3();
	test4();
    return 0;
}
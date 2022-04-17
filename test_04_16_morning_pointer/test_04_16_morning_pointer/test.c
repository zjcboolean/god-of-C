#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[10] = {0};
//	int* p = arr;
//	int i= 0;
//	for(i=0;i<10;i++)
//	{
//	   *(p+i)=1;
//	}
//    return 0;
//}


//int* test()
//{
//     int a = 10;
//	 return &a;
//}
//int main()
//{
//	int* p=test();
//	*p = 20;//a的地址在返回之后，a的空间就变为别人的储存空间，所以此时通过指针访问的空间已经不是a的空间了
//	
//    return 0;
//}


////数组越界导致野指针问题
//int main()
//{
//	int a[10] = {0};
//	int i = 0;
//	int* p = a;
//	for(i=0;i<=12;i++)
//	{
//	   *p = i;
//	   p++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int* pa = &a;//指针初始化
//
//	int* p = &b;//指针初始化（空指针）
//	*p = 10;
//	p = NULL;//error指针为空时不能访问
//	
//	if(p != NULL)
//	{
//	   *p = 2;
//	}
//    return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//int* p = arr;
//	int* p = &arr[6];
//	for(i=0;i<sz;i++)
//	{
//	   printf("%d\n",*p);
//	   p--;
//	}
//     return 0;
//}


//int my_strlen(char* str)
//{
//    char* start = str;
//	char* end = str;
//	while(*end != '\0')
//	{
//	     end++;
//	}
//	return end - start;
//}
////求字符串的长度
//int main()
//{
//	char arr[] = "bite";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//
//  return 0;
//}

////指针打印元素
//int main()
//{
//	int arr[10] = {0};
//	int* p=arr;
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//	    *(p+i) = i;
//	}
//	for(i=0;i<10;i++)
//	{
//	    printf("%d",*(p+i));
//	}
//	/*for(i=0;i<10;i++)
//	{
//	    printf("%p  =====  %p\n",p+i,&arr[i]);
//	}*/
//  return 0;
//}

////二级指针
//int main()
//{
//   int a = 10;
//   int* pa=&a;
//    int** ppa = &pa;
//	printf("%d\n",**ppa);
//	printf("%d\n",a);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b =3;
//	int c = 4;
//	int* arr[3] = {&a,&b,&c};
//	int i = 0;
//	for(i=0;i<3;i++)
//	{
//	    printf("%d\n",*(arr[i]));
//	}
//	printf("%d\n",&a);
//    return 0;
//}

//void Init(int arr[],int sz)
//{
//        int i = 0;
//		for(i=0;i<sz;i++)
//		{
//		   arr[i] = 0;
//		}
//}
//void Print(int arr[],int sz)
//{
//        int i =0;
//		for(i=0;i<sz;i++)
//		{
//		   printf("%d ",arr[i]);
//		}
//		printf("\n");
//}
//
//void Reverse(int arr[],int sz)
//{
//         int left = 0;
//		 int right = sz-1;
//		 
//		 while(left<right)
//		 {
//		    int tmp = arr[left];
//		 arr[left] = arr[right];
//		 arr[right] = tmp;
//		 left++;
//		 right--;
//		 }
//}
//
//int main()
//{
//	int arr[10]= {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//Init(arr,sz);//把数组初始化
//	Print(arr,sz);
//	Reverse(arr,sz);
//	Print(arr,sz);
//    return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5};
//	short* p =(short*)arr;//short* 每次访问两个字节
//	int i = 0;
//	for(i=0;i<4;i++)
//	{
//	   *(p+i)=0;
//	}
//	for(i=0;i<5;i++)
//	{
//	   printf("%d ",arr[i]);
//	}
//   return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n",a);//%x意思为读入十六进制整数
//    return 0;      //%o意思为读入八进制整数
//}                  //%d意思为读入十进制整数

//int main()
//{
//	int i = 0;
//	i--;          //全局变量未赋值时，默认值为1
//	if(i>sizeof(i))//sizeof返回一个无符号数，因此i与之做比较时先转换为无符号数 ，负数无符号数特别大
//	{
//	  printf(">\n");
//	}
//	else
//	{
//	  printf("<\n");
//	}
//    return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//a=6,c=6
//	b = ++c, c++, ++a, a++;//查课件，赋值优先级高于逗号，取最后一次运算值a=8,b=7,c=8
//	b += a++ + c;//查课件，加号优先级高于赋值
//	printf("a=%d b=%d c=%d\n",a,b,c);
//    return 0;
//}
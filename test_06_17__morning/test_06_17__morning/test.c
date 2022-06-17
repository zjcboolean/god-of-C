#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>


////memcpy函数
//struct S
//{
//	char name[20];
//	int age;
//
//};
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[10] = {0};
//	struct S arr3[] = {{"张三",20},{"李四",30}};
//	struct S arr4[3] = {0};
//	//arr1中的数字拷贝到arr2中
//	//memcpy(arr2,arr1,sizeof(arr1));
//	memcpy(arr4,arr3,sizeof(arr3));
//
//    return 0;
//}


////自己的my_memcpy
//struct S
//{
//	char name[20];
//	int age;
//
//};
//
//void* my_memcpy(void* dest,const void* src,size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	 while(num--)
//	 {
//	 *(char*)dest = *(char*)src;
//	 ++(char*)dest;
//	 ++(char*)src;
//	 }
//	 return ret;
//}
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[10] = {0};
//	struct S arr3[] = {{"张三",20},{"李四",30}};
//	struct S arr4[3] = {0};
//	//arr1中的数字拷贝到arr2中
//	memcpy(arr2,arr1,sizeof(arr1));
//	//my_memcpy(arr4,arr3,sizeof(arr3));
//
//    return 0;
//}

//C语言标准:
//memcpy 只要处理不重叠的内存拷贝就可以
//memmove函数（处理内存重叠情况）
//当前VS编译器使得memcpy函数和memmove函数实现效果是一样的


////自己的my_memmove函数,判断方式一
//void* my_memmove(void* dest,const void* src,size_t count)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if(dest<src)
//	{
//	   //前->后
//		while(count--)
//		{
//		    *(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//	   //后->前
//		while(count--)
//		{
//		      *((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	
//	//memmove(arr+2,arr,20);
//
//	my_memmove(arr,arr+2,20);
//
//	for(i=0;i<10;i++)
//	{
//	    printf("%d",arr[i]);
//	}
//
//    return 0;
//}


////自己的my_memmove函数,判断方式二
//void* my_memmove(void* dest,const void* src,size_t count)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if(dest<src || dest>(char*)src+count)
//	{
//	   //前->后
//		while(count--)
//		{
//		    *(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//	   //后->前
//		while(count--)
//		{
//		      *((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	
//	//memmove(arr+2,arr,20);
//
//	my_memmove(arr,arr+2,20);
//
//	for(i=0;i<10;i++)
//	{
//	    printf("%d",arr[i]);
//	}
//
//    return 0;
//}


////memcmp函数
//
//int main()
//{
//	//01 00 00 00 02 00 00 00 03 00 00 00...
//	//01 00 00 00 02 00 00 00 05 00 00 00...
//
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {1,2,5,4,3};
//	int ret = memcmp(arr1,arr2,9);//比较字节个数
//	printf("%d\n",ret);
//
//    return 0;
//}


//memset - 内存设置

int main()
{
	//按1个字节设置
	char arr1[10]= "";
	
	//按4个字节设置
	int arr2[10] = {0};
	memset(arr1,'#',5);
	memset(arr2,1,10);

    return 0;
}
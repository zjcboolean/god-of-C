#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>


////memcpy����
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
//	struct S arr3[] = {{"����",20},{"����",30}};
//	struct S arr4[3] = {0};
//	//arr1�е����ֿ�����arr2��
//	//memcpy(arr2,arr1,sizeof(arr1));
//	memcpy(arr4,arr3,sizeof(arr3));
//
//    return 0;
//}


////�Լ���my_memcpy
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
//	struct S arr3[] = {{"����",20},{"����",30}};
//	struct S arr4[3] = {0};
//	//arr1�е����ֿ�����arr2��
//	memcpy(arr2,arr1,sizeof(arr1));
//	//my_memcpy(arr4,arr3,sizeof(arr3));
//
//    return 0;
//}

//C���Ա�׼:
//memcpy ֻҪ�����ص����ڴ濽���Ϳ���
//memmove�����������ڴ��ص������
//��ǰVS������ʹ��memcpy������memmove����ʵ��Ч����һ����


////�Լ���my_memmove����,�жϷ�ʽһ
//void* my_memmove(void* dest,const void* src,size_t count)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if(dest<src)
//	{
//	   //ǰ->��
//		while(count--)
//		{
//		    *(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//	   //��->ǰ
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


////�Լ���my_memmove����,�жϷ�ʽ��
//void* my_memmove(void* dest,const void* src,size_t count)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if(dest<src || dest>(char*)src+count)
//	{
//	   //ǰ->��
//		while(count--)
//		{
//		    *(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//	   //��->ǰ
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


////memcmp����
//
//int main()
//{
//	//01 00 00 00 02 00 00 00 03 00 00 00...
//	//01 00 00 00 02 00 00 00 05 00 00 00...
//
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {1,2,5,4,3};
//	int ret = memcmp(arr1,arr2,9);//�Ƚ��ֽڸ���
//	printf("%d\n",ret);
//
//    return 0;
//}


//memset - �ڴ�����

int main()
{
	//��1���ֽ�����
	char arr1[10]= "";
	
	//��4���ֽ�����
	int arr2[10] = {0};
	memset(arr1,'#',5);
	memset(arr2,1,10);

    return 0;
}
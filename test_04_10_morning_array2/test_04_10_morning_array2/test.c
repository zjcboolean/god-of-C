#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


////void bubble_sort(int arr[],int sz)
////{
////       int i = 0;
////	   int tmp = 0;
////	   int flag = 0;
////	   for(i=0;i<sz-1;i++)
////	   {
////	      int j = 0;
////		  flag = 1;
////		  for(j=0;j<sz-1-i;j++)
////		  {   //flag = 1;//error ,flag���ܷ�������ᵼ������û��ɾ�����ѭ��
////		     if(arr[j]>arr[j+1])
////			 {  
////			    tmp = arr[j];
////				arr[j]=arr[j+1];
////				arr[j+1]=tmp;
////				flag = 0;
////			 }
////		  }
////          if(flag==1)
////		  { 
////			  break;
////		  }    
////	   }
////}
////int main()
////{
////	int arr[] = {3,6,4,9,2,8};
////	int sz = sizeof(arr)/sizeof(arr[0]);
////	int i = 0;
////	//��arr���������ų�����
////	bubble_sort(arr,sz);
////
////	for(i=0;i<sz;i++)
////	{
////		printf("%d ",arr[i]);
////	}
////return 0;
////}
//
int main()
{
	int arr[] = {1,2,3,4,5,6,7};

	int sz = sizeof(arr)/sizeof(arr[0]);
	printf("%p\n",&arr);
	//sizeof(arr)�����arr��ʾ�������顣
	//&arr,��ʾ���������Ԫ�أ���&arr+1,���ʾ��һ������ĵ�ַ

	printf("%p\n",arr);//��ʾ��Ԫ�ص�ַ,��arr+1���������һ��Ԫ�صĵ�ַ
	printf("%p\n",&arr[0]);//��ʾ��Ԫ�ص�ַ����&arr[0]+1,�������һ��Ԫ�صĵ�ַ
	
    return 0;
}



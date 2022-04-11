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
////		  {   //flag = 1;//error ,flag不能放在这里，会导致排序还没完成就跳出循环
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
////	//对arr进行排序，排成升序
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
	//sizeof(arr)里面的arr表示整个数组。
	//&arr,表示整个数组的元素，若&arr+1,则表示下一个数组的地址

	printf("%p\n",arr);//表示首元素地址,若arr+1，则输出下一个元素的地址
	printf("%p\n",&arr[0]);//表示首元素地址，若&arr[0]+1,则输出下一个元素的地址
	
    return 0;
}



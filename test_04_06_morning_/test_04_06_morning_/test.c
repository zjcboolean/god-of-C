#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#include"add.h"
//int is_prime(int n)
//{      int j = 0;
//       //for(j=2;j<=n-1;j++)
//         for(j=2;j<=sqrt(n);j++)
//	   {
//	   if(n%j==0)
//		   return 0;
//	   }
//	   if(j>sqrt(n))
//		   return 1;
//}
//int main()
//{
//	//�ú����ж�100-200֮�������
//
//
//	int i = 0;
//	int count = 0;
//	for(i=100;i<=200;i++)
//	{
//	   if(is_prime(i) == 1)
//	   {
//	     printf("%d ",i);
//		 count++;
//	   }
//	}
//	printf("\ncount=%d\n",count);
//return 0;
//}


//int is_leap_year(int y)
//{
//     if(y%4==0&&y%100!=0 || y%400==0)
//	 {
//	 return 1;
//	 }
//	 else
//	 return 0;
//
//}
//
//int main()
//{     //����������
//	int year = 0;
//	int count = 0;
//	for(year=1000;year<=2000;year++)
//	{
//	   if(1 == is_leap_year(year))
//	   {
//	      printf("%d ",year);
//		  count++;
//	   }
//	}
//	printf("\n count=%d\n",count);
//return 0;
//}

//int binary_search(int arr[],int k,int sz)
//{     
//       int left = 0;
//	   
//	   int right = sz-1;
//	  
//
//	   while(left<=right)
//	   {
//		  int mid = (left+right)/2;
//	      if(arr[mid]<k)
//		  {
//		    left = mid+1;
//		  }
//		  else if(arr[mid]>k)
//		  {
//		    right = mid-1;
//		  }
//		  else
//			  return mid;
//	   }
//	   if(left>right)
//		   return -1;
//}
//int main()
//{
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷�����������±꣬�Ҳ�������-1
//
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr,k,sz);//�˴�arr���ݵ��������һ��Ԫ�صĵ�ַ��arrʵ������һ��ָ��
//	if(ret==-1)
//	{
//	  printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//	  printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
//	}
//return 0;
//}

//void Add(int* p)
//{
//    (*p)++;
//}
//int main()
//{       //дһ��������ÿ����һ��num�ͼ�һ
//	int num = 0;
//	 Add(&num);
//	 printf("num=%d\n",num);//ʹʵ��ֵ�����仯��������дΪ��ַ
//	 Add(&num);
//	 printf("num=%d\n",num);
//	 Add(&num);
//	 printf("num=%d\n",num);
//return 0;
//}

////������Ƕ�׵���
//
//void new_line()
//{
//    printf("������\n");
//}
//void three_line()
//{
//    int i = 0;
//	for(i=0;i<3;i++)
//	{
//	new_line();
//	}
//}
//int main()
//{
//	three_line();
//return 0;
//}

////��������ʽ���ʣ�һ�������ķ���ֵΪ��һ�������Ĳ���
//int main()
//{
//	//int len = 0;
//	//len = strlen("abc");
//	//printf("%d\n",len);
//
//	printf("%d\n",strlen("abc"));
//	printf("%d",printf("%d",printf("%d\n",43)));//4321,printf�ķ���ֵΪ��ӡ���ַ�����
//return 0;
//}

////�����Ķ��������
//
////����������������������һ������
//int Add(int,int);
//
//
//int main()
//{
//    int a = 10;
//	int b = 20;
//	int sum = 0;
////�����ĵ���
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
////�����Ķ���
//int Add(int x,int y)
//{
//       int z = x+y;
//	   return z;
//}


int main()
{
   int a = 10;
   int b = 20;
   int sum = Add(a, b);
   printf("%d\n",sum);
   return 0;
}
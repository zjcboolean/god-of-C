#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<limits.h>


//int main()
//{      
//	// Ʒ����˾����  ��ʹ�õ������������������ͱ���a,b��ֵ
//
//	//����һ���������
//     int a = 3;
//	 int b = 5;
//
//	 INT_MAX;//int ��ʾ�������2147483647  
//	 printf("����ǰ��a=%d,b=%d\n",a,b);
//	 a=a+b;//��a,b�ر��ʱ����λ������������ɶ��Ժ�
//	 b=a-b;
//	 a=a-b;
//	 printf("������a=%d,b=%d\n",a,b);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("����ǰ��a=%d b=%d\n",a,b);
//
//	a = a^b;//ʹ������Ż���û�н�λ�����������������ɶ��Բ�
//	b = a^b;
//	a = a^b;
//	printf("������a=%d b=%d\n",a,b);
//
//    return 0;
//}


//int main()
//{
//    //Leetcode��վ����      ����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬
//	//                      ����Ԫ�ؾ��������Σ��ҵ��Ǹ�ֻ����һ�ε���
//
//	//������⣬Ч��̫�� 
//	int arr[] = {1,2,3,4,5,1,2,3,4};
//	
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<sz;i++)
//	{
//	     int j = 0;
//		 int count = 0;
//		 for(j=0;j<sz;j++)
//		 {
//			 if(arr[i]==arr[j])
//			 {
//			      count++;
//			 }
//		 }
//		 if(count==1)
//		 {
//		    printf("������%d\n",arr[i]);
//			break;
//		 }
//	}
//	return 0;
//}

int main()
{    
	//�Ż��ҵ�����ʹ�����ķ���

	//0^a = a
	//a^a = 0
	//3^5^3 = 5
	//3^3^5 = 5  ˵�����������㽻����
	int arr[] = {1,2,3,4,5,6,7,8,7,6,5,4,3,2,1};
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
	   ret ^= arr[i];
	}
	printf("�������ǣ�%d\n",ret);
   return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	float f = 5.5;
//	//101.1
//	//(-1)^0 * 1.011*2^2
//	//�������洢0 10000001 01100000000000000000000
//	//������ȡ��(-1)^0 * 1.011*2^2
//	//��������ַ0100 0000 1011 0000 0000 0000 0000 0000
//	//�ڴ��ַ  0x40b00000
//	//0x0049F8BC
//
//	//���ڴ��ж��������У�EΪȫ1
//	//0 11111111 01100000000000000000000
//	//E��ʵֵΪ255-127=126����ѧ������(-1)^0 * 1.011*2^126,Ҳ���������
//
//	//���ڴ��ж��������У�EΪȫ0
//	//0 00000000 01100000000000000000000
//	//E��ʵֵΪ0-127=-127����ѧ������(-1)^0 * 0.011*2^��-127��,Ҳ��������С
//	printf("%p",&f);
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n",n);//9
//	printf("*pFloat��ֵΪ��%f\n",*pFloat);//0.000000
//	//0 00000000 00000000000000000001001����
//	//(-1)^0 * 0.00000000000000000001001*2^(-127)Ϊ����С
//
//	*pFloat = 9.0;
//
//	printf("num��ֵΪ��%d\n",n);//1,091,567,616
//	//1001.0
//	//(-1)^0 * 1.001*2^(3)
//	//0 10000010 00100000000000000000000����
//	//��Ϊʮ����1,091,567,616
//	printf("*pFloat��ֵΪ��%f\n",*pFloat);//9.000000
//    return 0;
//}

//void test(int arr[])
//{
//     printf("%d\n",sizeof(arr)/sizeof(arr[0]));
//}
//int main()
//{
//	int arr[10] = {0};
//	test(arr);
//    return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//
//	printf("%s\n",arr);
//	printf("%s\n",pc);
//
//    return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//�����ַ��������޸ģ�a�ĵ�ַ����p
//	*p = 'w';//error,segmentFault�δ��󡣳����ַ����ǲ����޸ĵģ�����VSû�б�����ȷ��������char*ǰ���const��ʱ�������㲻���޸�
//	printf("%s\n",p);
//	//printf("%c\n",*p);
//	//printf("%s\n",p);
//     return 0;
//}


//ϰ��
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//
//	if(arr1 == arr2)//��ʾ��Ԫ�ص�ַ����Ϊ���������飬�������ռ䣬��Ԫ�ص�ַ��ͬ
//	{
//	    printf("hehe\n");
//	}
//	else
//	{
//	    printf("haha\n");
//	}
//    return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//
//	if(p1 == p2)//p1,p2����ʾһ���ĳ����ַ��������ܱ��޸ģ�Ϊ�˽�ʡ�ռ䣬p1,p2ָ���ַһ��
//	{
//	    printf("hehe\n");
//	}
//	else
//	{
//	    printf("haha\n");
//	}
//    return 0;
//}


////ָ������ 
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//	
//
//	int* parr[] = {arr1,arr2,arr3};
//	int i = 0;
//	for(i=0;i<3;i++)
//	{
//		int j = 0;
//		for(j=0;j<5;j++)
//		{
//		printf("%d ",*(parr[i]+j));
//		}
//	}
//   return 0;
//}

////����ָ�� - ָ��
//
//int main()
//{
//	//int *p = NULL;//p������ָ�� - ָ�����ε�ָ�� - ���Դ�����εĵ�ַ
//	char* pc = NULL;//pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//	//����ָ�� - ָ�������ָ�� - �������ĵ�ַ
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int (*p)[10] = &arr;//�����ָ�������
//	//*p��ʾ��ָ�룬[10]��ʾ����Ԫ�أ�ָ��ָ������Ԫ��
//    return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5]=&arr;
//	//pa ������
//	//*pa ��ָ��
//	//[5]��ʾָ��ָ�������Ԫ����5��
//	//char* ��ʾָ��ָ�������Ԫ������Ϊchar*
//    return 0;
//}

//����ָ����鷳ʹ��
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//	    printf("%d ",*(p+i));
//	}
//	//int (*pa)[10] = &arr;
//	//int i = 0;
//	//for(i=0;i<10;i++)
//	//{
//	//    printf("%d ",(*pa)[i]);//*pa=arr,(*pa)[i]��ЧΪ*(*pa+i)
//		           //��Ť
//    //{
//    return 0;
//}


//����ָ�����ȷʹ��

void print1(int arr[3][5],int x,int y)
{
	 
	 int i = 0;
		 for(i=0;i<x;i++)
		 {
		     int j = 0;
			 for(j=0;j<y;j++)
			 {
			     printf("%d ",arr[i][j]);
			 }
			 printf("\n");
		 }
}

void print2(int (*pa)[5],int x,int y)
{
      int i = 0;
	  for(i=0;i<x;i++)
	  {
		  int j = 0;
		  for(j=0;j<y;j++)
		  {
	       printf("%d ",*(*(pa+i)+j));//*(*(pa+i)+j)�ȼ���(*(pa+i))[j]
		  // printf("%d ",(*(pa+i))[j]);
		  // printf("%d ",*(pa[i]+j));
		  //printf("%d ",pa[i][j]);
		   //����д�����ǵȼ۵�
		  }
		  printf("\n");
	  }
}

int main()
{
	int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	

	print1(arr,3,5);
	print2(arr,3,5);

    return 0;
}


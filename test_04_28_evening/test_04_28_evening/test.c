#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//��дð�ݺ�����ʹ����Զ�������������

//void qsort(void* base,
//	size_t num,
//	size_t width,
//	int( *cmp)(const void *e1,const void *e2)
//	);

     //��һ���������������������Ԫ�ص�ַ
     //�ڶ��������������������Ԫ�ظ���
     //�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
     //���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
     //����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ     




//struct Stu
//{
//	char name[20];
//	int age;
//
//};
//
//void Swap(char* buf1,char* buf2,int width)
//{
//     int i = 0;
//	 for(i=0;i<width;i++)
//	 {
//	     char tmp = *buf1;
//		 *buf1 = *buf2;
//		 *buf2 = tmp;
//		 buf1++;
//		 buf2++;
//	 }
//}
//
//int cmp_int(const void* e1,const void* e2)
//{
//      return *(int*)e1 - *(int*)e2;
//}
//
//int cmp_stu_by_name(const void* e1,const void* e2)
//{
//      return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//             //��ͷ���ȼ���ǿ��ת���ߣ���˱���������Ҫ������������
//}
//
//int cmp_stu_by_age(const void* e1,const void* e2)
//{
//      return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
////ʵ��bubble_sort�����ĳ���Ա�����Ƿ�֪��δ���������������-��֪��
////�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����
//void bubble_sort(void*base ,int sz,int width,int (*cmp)(void* e1,void* e2))
//{
//       int i = 0;
//	   //����
//	   for(i=0;i<sz-1;i++)
//	   {
//	       int j = 0;
//		   for(j=0;j<sz-1-i;j++)
//		   {
//		       //����Ԫ�صıȽ�
//			   if(cmp((char*)base+j*width,(char*)base+width*(j+1))>0)
//			   {    //void*����+-
//			        //����
//				   Swap((char*)base+j*width,(char*)base+width*(j+1),width);
//
//			   }
//		   }
//	   }
//}
//
//void test1()
//{    //��������
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//}
//
//void test2()
//{
//    //�ṹ������
//	struct Stu s[3] = {{"zhangsan",20},{"lisi",30},{"wangwu",10}};
//	int sz = sizeof(s)/sizeof(s[0]);
//	bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_age);
//	bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_name);
//}
//
//int main()
//{
//   test1();
//   test2();
//	return 0;
//}

//int main()
//{
//   //һά����
//	int a[] = {1,2,3,4};//4*4=16
//	printf("%d\n",sizeof(a));//16 a��ʾ����
//	printf("%d\n",sizeof(a+0));//4 a��ʾ��Ԫ�ص�ַ
//	printf("%d\n",sizeof(*a));//4 ��Ԫ��
//	printf("%d\n",sizeof(a+1));//4 �ڶ���Ԫ��
//	printf("%d\n",sizeof(a[1]));//4 �ڶ���Ԫ��
//	printf("%d\n",sizeof(&a));//4/8 &aȡ�����������ַ�������ַ��4��8���ֽ�
//	printf("%d\n",sizeof(*&a));//16 ������������
//	printf("%d\n",sizeof(&a+1));//4/8 ȡ����һ�������ַ
//	printf("%d\n",sizeof(&a[0]));// 4/8  ��һ��Ԫ�ص�ַ
//	printf("%d\n",sizeof(&a[0]+1));// 4/8  �ڶ���Ԫ�ص�ַ
//
//	return 0;
//}

//int main()
//{
//	//�ַ�����
//	char arr[] = {'a','b','c','d','e','f'};
//	printf("%d\n",sizeof(arr));//6 a��ʾ����
//	printf("%d\n",sizeof(arr+0));// 4/8 ��ʾ��Ԫ�ص�ַ
//	printf("%d\n",sizeof(*arr));//1 ��Ԫ��
//	printf("%d\n",sizeof(arr[1]));//1 �ڶ���Ԫ��
//	printf("%d\n",sizeof(&arr));//4/8 &aȡ�����������ַ�������ַ��4��8���ֽ�
//	printf("%d\n",sizeof(&arr+1));//4/8 ȡ����һ�������ַ
//	printf("%d\n",sizeof(&arr[0]+1));// 4/8  �ڶ���Ԫ�ص�ַ
//
//	
//    return 0;
//}

int main()
{
		//�ַ�����
	char arr[] = {'a','b','c','d','e','f'};
	printf("%d\n",strlen(arr));//���ֵ û��\0
	printf("%d\n",strlen(arr+0));//���ֵ  ��ʾ��Ԫ�ص�ַ
	printf("%d\n",strlen(*arr));//�Ƿ����� ��ʾ'a'
	printf("%d\n",strlen(arr[1]));//�Ƿ����� �ڶ���Ԫ��
	printf("%d\n",strlen(&arr));//���ֵ &aȡ�����������ַ
	printf("%d\n",strlen(&arr+1));//���ֵ ȡ����һ�������ַ
	printf("%d\n",strlen(&arr[0]+1));// ���ֵ  �ڶ���Ԫ�ص�ַ
    return 0 ;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

////int main()
////{
////	//�ַ���
////	char arr[] = "abcdef";
////
////	printf("%d\n",sizeof(arr));//7 ��������Ϊabcdef\0
////	printf("%d\n",sizeof(arr+0));//4/8  ��Ԫ�ص�ַ��С
////	printf("%d\n",sizeof(*arr));//1 ��ʾ��Ԫ��a
////	printf("%d\n",sizeof(arr[1]));//1 ��ʾ�ڶ���Ԫ��b
////	printf("%d\n",sizeof(&arr));//4/8 ����ĵ�ַ
////	printf("%d\n",sizeof(&arr+1));//4/8 ��һ������ĵ�ַ
////	printf("%d\n",sizeof(&arr[0]+1));//4/8 ��ʾ�ڶ���Ԫ�ص�ַ
////
////     return 0;
////}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n",strlen(arr));//6 
//	printf("%d\n",strlen(arr+0));//6 ��ʾ��Ԫ�ص�ַ����\0ֹͣ
//	//printf("%d\n",strlen(*arr));//error �Ƿ������ڴ�
//	//printf("%d\n",strlen(arr[1]));//error �Ƿ������ڴ�
//	printf("%d\n",strlen(&arr));//6 ȡ�����ַ���൱������ָ��,����Ϊchar*
//	//strlen ��������Ϊconst char*
//	printf("%d\n",strlen(&arr+1));//���ֵ 
//	printf("%d\n",strlen(&arr[0]+1));//5 ��b������\0
//
//
//    return 0;
//}

//int main()
//{
//	char *p = "abcdef";//�ѳ����ַ�����Ԫ��a�ĵ�ַ�浽p��
//
//	printf("%d\n",sizeof(p));//4 ��ʾ��Ԫ�ص�ַ
//	printf("%d\n",sizeof(p+1));//4 ��ʾb�ĵ�ַ
//	printf("%d\n",sizeof(*p));//1 ��ʾ�ַ�����һ����ĸ
//	printf("%d\n",sizeof(p[0]));//1 ��ʾ��Ԫ�ص�ַ������
//	//int arr[10];arr[0] == *(arr+0)
//	//p[0] == *{p+0}
//	printf("%d\n",sizeof(&p));//4 ��ʾ�����ַ�����ַ
//	printf("%d\n",sizeof(&p+1));//4 ��ʾ��һ�������ַ�����ַ
//	printf("%d\n",sizeof(&p[0]+1));//4 ��ʾb�ĵ�ַ
//
//    return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//
//	printf("%d\n",strlen(p));//6 ��a������\0
//	printf("%d\n",strlen(p+1));//5 ��b������\0
//	printf("%d\n",strlen(*p));//error �Ƿ������ڴ�
//    printf("%d\n",strlen(p[0]));//error �Ƿ������ڴ�
//    printf("%d\n",strlen(&p));//���ֵ��p�ռ�δ֪��
//	printf("%d\n",strlen(&p+1));//���ֵ p��һ���ռ�δ֪
//	printf("%d\n",strlen(&p[0]+1));//5 ��b������\0
//
//    return 0;
//}

//int main()
//{
//	//��ά����
//	int a[3][4] = {0};
//	printf("%d\n",sizeof(a));//48 ����������ռ�ռ�
//    printf("%d\n",sizeof(a[0][0]));//4 
//	printf("%d\n",sizeof(a[0]));//16 �൱�ڵ�һ����Ϊһά�����������
//	printf("%d\n",sizeof(a[0]+1));//4 a[0]�����ʾ��һ�еĵ�ַ
//	//a[0]+1��ʾ��һ�У��ڶ���Ԫ�ص�ַ
//	printf("%d\n",sizeof(*(a[0]+1)));//4 a[0]+1��ʾ��һ�У��ڶ���Ԫ��
//	printf("%d\n",sizeof(a+1));//4 ��ʾ�ڶ��е�һ��Ԫ�ص�ַ
//	//a��ʾ��Ԫ�ص�ַ����ά������Ԫ�ص�ַ�����ĵ�һ�У���Ԫ�أ��ĵ�ַ��a+1Ϊ�ڶ�����Ԫ�ص�ַ
//	printf("%d\n",sizeof(*(a+1)));//16 ��ʾ�����ڶ�������
//	printf("%d\n",sizeof(&a[0]+1));//4 ��ʾ�ڶ��е�ַ
//	printf("%d\n",sizeof(*(&a[0]+1)));//16
//	printf("%d\n",sizeof(*a));//16 ��ʾ��һ��Ԫ�ؽ�����
//	printf("%d\n",sizeof(a[3]));//16 ��ʾ���������飨sizeof�����ʣ�ֻ����������������ͣ���
//	
//    return 0;
//}

//ָ�������
//int main()
//{
//	int a[5] = {1,2,3,4,5};
//	int *ptr = (int*)(&a+1);//(&a+1����ָ��
//	printf("%d,%d\n",*(a+1),*(ptr-1));//2 5
//
//    return 0;
//}

//ָ�������

//struct Test
//{
//   int Num;
//   char *pcName;
//   short sDate;
//   char cha[2];
//   short sBa[4];
//
//}*p;
//
//int main()
//{
//	//����p ��ֵΪ0x00000,���±���ʽ��ֵ�ֱ�Ϊ���٣�
//	//��֪���ṹ��Test���͵ı�����С��20���ֽ�
//
//	p = (struct Test*)0x100000;
//	printf("%p\n",p+0x1);//0x00000+20=0x00014
//	printf("%p\n",(unsigned long)p+0x1);//100000ʮ����Ϊ1048576
//	//(1048576+1)ת��Ϊ16����Ϊ0x100001
//	printf("%p\n",(unsigned int*)p+0x1);//0x00004
//    return 0;
//}

//ָ�������

//int main()
//{
//
//	int a[4] = {1,2,3,4};
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x",ptr1[-1],*ptr2);
//	//  ptr1[-1] = *(ptr1+(-1))
//
//     return 0;
//}


//ָ�������
//int main()
//{
//	int a[3][2] = {(0,1),(2,3),(4,5)};
//	int *p;
//	p = a[0];
//	printf("%d\n",p[0]);
//
//
//    return 0;
//}

//ָ�������

int main()
{
	int a[5][5];
	int (*p)[4];
	p = a;//a��ַ����int (*)[5]  ,p��ַ����int (*)[4]
	printf("%p %d\n",&p[4][2] - &a[4][2],&p[4][2] - &a[4][2]);
	//  p[4][2] = *(*(p+4)+2)
	// &p[4][2],��&a[4][2]��ַ��Ӧ�����ʾ�м����ĸ�Ԫ�أ�
	//���Ϊ����ʱ���4
	//���Ϊ��ַʱ�������Ӧ-4�Ĳ���(һ������ַ���޷��������൱�������Ĳ���)
	//-4ԭ�룺10000000 00000000 00000000 00000100
	//-4���룺11111111 11111111 11111111 11111011
	//-4���룺1111 1111 1111 1111 1111 1111 1111 1100
	//         F    F    F    F     F    F   F    C
    return 0;
}
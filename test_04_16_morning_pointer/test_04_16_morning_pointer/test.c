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
//	*p = 20;//a�ĵ�ַ�ڷ���֮��a�Ŀռ�ͱ�Ϊ���˵Ĵ���ռ䣬���Դ�ʱͨ��ָ����ʵĿռ��Ѿ�����a�Ŀռ���
//	
//    return 0;
//}


////����Խ�絼��Ұָ������
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
//	int* pa = &a;//ָ���ʼ��
//
//	int* p = &b;//ָ���ʼ������ָ�룩
//	*p = 10;
//	p = NULL;//errorָ��Ϊ��ʱ���ܷ���
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
////���ַ����ĳ���
//int main()
//{
//	char arr[] = "bite";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//
//  return 0;
//}

////ָ���ӡԪ��
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

////����ָ��
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
//	//Init(arr,sz);//�������ʼ��
//	Print(arr,sz);
//	Reverse(arr,sz);
//	Print(arr,sz);
//    return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5};
//	short* p =(short*)arr;//short* ÿ�η��������ֽ�
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
//	printf("%x\n",a);//%x��˼Ϊ����ʮ����������
//    return 0;      //%o��˼Ϊ����˽�������
//}                  //%d��˼Ϊ����ʮ��������

//int main()
//{
//	int i = 0;
//	i--;          //ȫ�ֱ���δ��ֵʱ��Ĭ��ֵΪ1
//	if(i>sizeof(i))//sizeof����һ���޷����������i��֮���Ƚ�ʱ��ת��Ϊ�޷����� �������޷������ر��
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
//	b = ++c, c++, ++a, a++;//��μ�����ֵ���ȼ����ڶ��ţ�ȡ���һ������ֵa=8,b=7,c=8
//	b += a++ + c;//��μ����Ӻ����ȼ����ڸ�ֵ
//	printf("a=%d b=%d c=%d\n",a,b,c);
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	int i = 0;
//	for(i=0;i<100;i++)
//	{
//	   printf("%d ",i);
//	}
//
//	for(i=0;i<100;i++)
//	{
//	   printf("%d ",10-i);//F5����ִ���߼��ϵ���һ���ϵ㣬���������ϵĶϵ�
//	}
//
//    return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//	   arr[i] = i;
//	}
//    return 0;
//}


//void test2()
//{
//printf("hehe\n");
//}
//
//void test1()
//{
//    test2();
//}
//
//void test()
//{
//    test1();
//}
//
//int main()
//{
//    test();
//	return 0;
//}

//int main()
//{
//	//���� 1��+ 2��+ 3��+...+n!
// int i = 0;
// int sum = 0;//�������ս��
// int n = 0;
// int ret = 1;//����n�Ľ׳�
// scanf("%d", &n);
// for(i=1; i<=n; i++)
// {
// int j = 0;
// ret = 1;
// for(j=1; j<=i; j++)
// {
// ret *= j;
// }
// sum += ret;
// }
// printf("%d\n", sum);
// return 0; }


//int main()
//{
//   int i = 0;
//   int arr[10] = {1,2,3};
//   
//    printf("%p\n",&i);
//   printf("%p\n",arr);
//  
//
//   /*for(i=0; i<=12; i++)
//   {
//        arr[i] = 0;
//		printf("hehe\n");
//   }*/
//   return 0; 
//}


//void my_strcpy(char* dest,char* src)
//{
//       while(*src != '\0')//���֣�6 ����������
//	   {
//	   *dest = *src;
//	   src++;
//	   dest++;
//	   }
//	   *dest = *src;
//}
//
//void my_strcpy(char* dest,char* src)
//{
//       while(*dest++ = *src++)// �Ż������֣�7��0=0ʱ����Ϊ��
//	   {
//	   ;
//	   }
//}
//
//int main()
//{
//	//��дstrcpy�⺯��
//
//	char arr1[] = "###########";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//
//	printf("%s\n",arr1);
//    return 0;
//}


//void my_strcpy(char* dest,char* src)
//{
//       assert(dest != NULL);//����
//	   assert(src != NULL);//����
//	   while(*dest++ = *src++) //�Ż������֣�8
//       {
//	   ;
//	   }
//}
//
//int main()
//{
//	//��дstrcpy�⺯��
//	char arr1[] = "############";
//	char arr2[] = "bit";
//	my_strcpy(arr1,NULL);
//
//	printf("%s\n",arr1);
//    return 0;
//}


//char* my_strcpy(char* dest,const char* src)//Դ������Ŀ�ĵأ�src���ܱ��ı�
//{
//	   char* ret = dest;
//       assert(dest != NULL);//����
//	   assert(src != NULL);//����
//
//	   //��srcָ����ַ���������destָ��Ŀռ䣬������\0���ַ�
//	   while(*dest++ = *src++) //�Ż������֣�10
//       {
//	   ;
//	   }
//	   return ret;//retΪ�����׵�ַ
//}
//
//int main()
//{
//	//��дstrcpy�⺯��
//	char arr1[] = "############";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//
//	printf("%s\n",my_strcpy(arr1,arr2));//������ʽ����
//    return 0;
//}


//int main()
//{
//	const int num = 10;
//	const int a = 2;
//
//    int* const pa = &a;
//	// const ����ָ�������*���ʱ�����ε���*p,Ҳ����˵������ͨ��p���ı�*p(num)��ֵ
//	// const ����ָ�������*�ұ�ʱ�����ε���ָ�����p����p���ܱ��ı���
//	
//	int* p = &num;// constʹnum���ܸı䣬���ǲ�û������*p,���num��ͨ��*p�ı�
//
//	*p = 20;
//	*pa = 12;//error
//
//	printf("%d\n", num);
//	printf("%d\n",pa);
//    return 0;
//}



////�淶������дstrlen����
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//����ָ�룬��ָ֤����Ч��
//	while(*str != '\0')
//	{
//	     count++;
//		 str++;
//	}
//	return count;
//}
//
//int main()
//{
//    char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	//��λͬѧ��ÿ��˵���仰����һ���棬һ��٣������˵�����
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for(a=1;a<=5;a++)
//	{
//	    for(b=1;b<=5;b++)
//		{
//		   for(c=1;c<=5;c++)
//		   {
//		       for(d=1;d<=5;d++)
//			   {
//			      for(e=1;e<=5;e++)
//				  {
//				      if( ((b==2)+(a==3)==1) &&//aԤ�������
//						  ((b==2)+(e==4)==1) &&
//						  ((c==1)+(d==2)==1) &&
//						  ((c==5)+(d==3)==1) &&
//						  ((e==4)+(a==1)==1))
//					  {
//						  if(a*b*c*d*e==120)//ʹ�õõ�������û���ظ�
//						  {
//						      printf("a=%d b=%d c=%d d=%d e=%d\n",a, b, c, d, e);
//						  }
//					     
//					  }
//				  }
//			   }
//		   }
//		}
//	}
//
//    return 0;
//}


//�ַ�������
// ʵ��һ�����������������ַ����е�k���ַ�
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB


////����һ  ������ⷨ���������ţ�
//
//void left_move(char* arr,int k)
//{
//	//assert(arr != NULL);//��ֹarrΪ�ձ���
//	int i = 0;
//	int len = strlen(arr);
//	
//	for(i=0;i<k;i++)
//	{
//	    //����תһ���ַ�
//		//1
//		char tmp = *arr;
//		//2
//		int j = 0;
//		for(j=0;j<len-1;j++)
//		{
//			 *(arr+j) = *(arr+j+1);
//		}
//		//3
//		 *(arr+(len-1)) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr,2);
//
//	printf("%s\n",arr);
//
//    return 0;
//}

////������ ������ת��
//  //abcdef
////1 bacdef
////2 bafedc
////3 cdefab
//
//
//void reverse(char* left,char* right)
//{
//     
//	 while(left<right)
//	 {
//	     char tmp = *left;
//		 *left = *right;
//		 *right = tmp;
//		 left++;
//		 right--;
//	 }
//
//}
//
//void left_move(char* arr,int k)
//{
//	 
//	  int len = strlen(arr);
//      reverse(arr,arr+k-1);//�������
//	  reverse(arr+k,arr+len-1);//�����ұ�
//	  reverse(arr,arr+len-1);//��������
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr,2);
//	printf("%s\n",arr);
//
//    return 0;
//}


////дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
////���� s1 = AABCD   s2 = BCDAA,����1
////���� s1 = abcd    s2 = ABCD ,����0
////AABCD����һ���ַ��õ�ABCDA
////AABCD���������ַ��õ�BCDAA
////AABCD����һ���ַ��õ�DAABC
//
//
//
//void reverse(char* left,char* right)
//{
//     
//	 while(left<right)
//	 {
//	     char tmp = *left;
//		 *left = *right;
//		 *right = tmp;
//		 left++;
//		 right--;
//	 }
//
//}
//
//void left_move(char* arr,int k)
//{
//	 
//	  int len = strlen(arr);
//      reverse(arr,arr+k-1);//�������
//	  reverse(arr+k,arr+len-1);//�����ұ�
//	  reverse(arr,arr+len-1);//��������
//}
////������6�����
////abcdef
////bcdefa
////cdefab
////defabc
////efabcd
////fabcde
//int is_left_move(char* s1,char* s2)
//{
//      int len = strlen(s1);
//	  int i = 0;
//	  for(i=0;i<len;i++)
//	  {
//		 int ret = 0;
//	     left_move(s1,1);
//		 ret = strcmp(s1,s2);
//		 if(ret == 0)
//			 return 1;
//	  }
//	  return 0;
//}
//
//int main()
//{
//    char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1,arr2);
//	if(ret==1)
//	{
//	   printf("Yes\n");
//	}
//	else
//	{
//	   printf("No\n");
//	}
//	return 0;
//}


////�ж����������ַ����Ƿ����
////������
//
//int is_left_move(char* str1,char* str2)
//{      char* ret;
//	   int len1 = strlen(str1);
//	   int len2 = strlen(str2);
//	   if(len1 != len2)
//	   {
//	       return 0;
//	   }
//      //1.��str1�ַ�����׷��һ��str1�ַ���
//	  //strcat �����Լ����Լ�׷���ַ�������������
//	  //  strcat(str1,str2) error
//	  //strncat 
//	   strncat(str1,str2,len1);
//	  //2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	  //strstr-���Ӵ���
//	   ret = strstr(str1,str2);//�ҵ���������ĸ��ַ���Ҳ�������NULL
//	   if(ret == NULL)
//	   {   
//		   return 0;
//	   }
//	   else
//	   {
//	       return 1;
//	   }   
//}
//
//int main()
//{
//    char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1,arr2);
//	if(ret==1)
//	{
//	   printf("Yes\n");
//	}
//	else
//	{
//	   printf("No\n");
//	}
//	return 0;
//}


//���Ͼ���
//Ҫ����һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//      ���д�����������ľ����в���ĳ�������Ǵ��ڵ�
// ʱ�临�Ӷ�С��O��N��,�������ҪѰ��N�Σ�ʱ�临�Ӷ�С��O��N����ζ�Ų���ʹ�ñ����㷨

//1 2 3
//4 5 6
//7 8 9

int FindNum(int arr[3][3],int k,int* px, int* py)
{
    int x = 0;
	int y = *py - 1;
	
	while(x<=*px-1 && y>=0)
	{
	   if(arr[x][y]>k)
	{
	   y--;
	}
	else if(arr[3][3]<k)
	{
	   x++;   
	}
	else
	{
		*px = x;
		*py = y;
	   return 1;
	}
	}
}
int main()
{
	int arr[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
	int k = 7;
	int x = 3;
	int y = 3;
	int ret = FindNum(arr,k,&x,&y);//&x,&yΪ�����Ͳ���
	if(ret == 1)
	{
	   printf("�ҵ���\n");
	   printf("�±��ǣ�%d %d\n",x,y);
	}
	else
	{
	   printf("�Ҳ���\n");
	}

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

////�����Լ���strlen
//
//int my_strlen(const char* str)
//{
//      int count = 0;
//	  assert(str != NULL);
//	  while(*str != '\0')//����while(*str)
//	  {
//	     count++;
//		 str++;
//	  }
//	  return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//
//	printf("%d\n",len);
//    return 0;
//}

////�����Լ���strcpy
//
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	
//
//	while(*src != '\0')
//	{
//	     *dest = *src;
//		 dest++;
//		 src++;
//	}
//	    *dest = *src;//'0'
//		return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//
//    return 0;
//}

////�����Լ���strcat �ַ���׷��
//
//char* my_strcat(char* dest, const char* src)
//{
//	    char* ret = dest;
//        assert(dest != NULL);
//		assert(src);
//		//assert(dest && dest);
//
//		//1.�ҵ�Ŀ���ַ�����'\0'
//		while(*dest != '\0')
//		{
//		     dest++;
//		}
//		while(*dest++ = *src++)
//		{
//		    ;
//		}
//		return ret;
//
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//
//	my_strcat(arr1,arr2);
//	printf("%s\n",arr1);
//
//    return 0;
//}



////�����Լ���strcmp(�ַ����Ƚ�)
//
//int my_strcmp(const char* str1,const char* str2)
//{
//          assert(str1 && str2);
//		  while(*str1 == *str2)
//		  {
//			  if(*str1 == '\0')
//			  {
//			      return 0;
//			  }
//		      str1++;
//			  str2++;
//		  }
//		  if(*str1 > *str2)
//		  {
//		        return 1;//����
//		  }
//		  else
//		  {
//		        return -1;//С��
//		  }
//}
//
//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "abcd";
//
//	int ret = my_strcmp(p1,p2);
//	printf("ret = %d\n",ret);
//
//     return 0;
//}


//strncat�������ַ���׷��

int main()
{
	char arr1[30] = "hello\0xxxxxxxx";
	char arr2[] = "word";
	strncat(arr1,arr2,8);
	printf("%s\n",arr1);

    return 0;	 
}
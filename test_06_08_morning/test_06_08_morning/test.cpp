#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>

////strstr  -查找字符串
//
//int main()
//{
//    char *p1 = "abcdefghidefg";
//	char *p2 = "defg";
//	char *ret = strstr(p1,p2);
//
//	if(ret == NULL)
//	{
//	     printf("子串不存在\n");
//	}
//	else
//	{
//	     printf("%s\n",ret);
//	}
//	return 0;
//}


////自己的strstr
//
//char* my_strstr(const char *p1, const char *p2)
//{
//        assert(p1 != NULL);
//		assert(p2 != NULL);
//		
//
//		char *s1 = NULL;
//		char *s2 = NULL;
//		//cur记录当前位置
//		char *cur = (char*)p1;
//		//p2为'\0'
//		if(*p2 == '\0')
//		{
//		    return (char*)p1;
//		}
//		while(*cur)
//		{
//			s1 = cur;
//			s2 = (char*)p2;
//		   //while((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		 while(*s1 && *s2 && !(*s1 - *s2))
//		   {
//		       s1++;
//			   s2++;
//		   }
//		   if(*s2 == '\0')
//		   {
//		       return cur;
//		   }
//		   if(*s1 == '\0')
//		   {
//		       return NULL;
//		   }
//		   cur++;
//		}
//		return NULL;//找不到子串
//}
//
//int main()
//{
//    char *p1 = "abb";
//	char *p2 = "abcd";
//	char *ret = my_strstr(p1,p2);
//
//	if(ret == NULL)
//	{
//	     printf("子串不存在\n");
//	}
//	else
//	{
//	     printf("%s\n",ret);
//	}
//	return 0;
//}


////strtok函数
//
//int main()
//{
//     //192.168.31.121
//	 //192 168 31 121 - strtok
//	 //zpw@bitedu.tech
//	 //zpw bitedu tech
//
//	//char arr[] = "zpw@bitedu.tech";
//	//char* p = "@.";//第一个标记是@，第二个标记是.
//
//	//点分十进制的表示方式
//	char arr[] = "192.168.31.121";
//	char* p = ".";
//
//	char buf[1024] = {0};
//	strcpy(buf,arr);
//	//切割buf中的字符串
//
//	char* ret = NULL;
//
//
//	for(ret = strtok(arr,p); ret != NULL; ret = strtok(NULL,p))
//	{
//	        printf("%s\n", ret);
//	}
//	//char* ret =  strtok(arr,p);
//	//printf("%s\n",ret);
//
//	//ret = strtok(NULL,p);
//	//printf("%s\n",ret);
//
//	//ret = strtok(NULL,p);
//	//printf("%s\n",ret);
//
//     return 0;
//}


////strerror函数
//
//int main()
//{
//	//错误码 错误信息
//	//0 -    No error
//	//1 -    Operation not permitted
//	//2 -    No such file or directory
//	//....
//	//error 是一个全局的错误码的变量
//	//当c语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//
//	
//	//char* str = strerror(2);
//	//printf("%s\n",str);
//
//	//打开文件
//	FILE* pf = fopen("test.txt","r");//"r"表示读文件
//	if(pf == NULL)
//	{
//		//引用头文件#include<errno.h>
//	    printf("%s\n",strerror(errno));
//	}
//	else
//	{
//	    printf("open file success\n");
//	}
//     return 0;
//}


//字符分类函数
//字符转换函数
int main()
{
	//char ch = toupper('q');
	//putchar(ch);

	char arr[] = "I Am A Student";
	int i = 0;
	while(arr[i])
	{
	    if(isupper(arr[i]))
		{
		    arr[i] = tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n",arr);

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>

////strstr  -�����ַ���
//
//int main()
//{
//    char *p1 = "abcdefghidefg";
//	char *p2 = "defg";
//	char *ret = strstr(p1,p2);
//
//	if(ret == NULL)
//	{
//	     printf("�Ӵ�������\n");
//	}
//	else
//	{
//	     printf("%s\n",ret);
//	}
//	return 0;
//}


////�Լ���strstr
//
//char* my_strstr(const char *p1, const char *p2)
//{
//        assert(p1 != NULL);
//		assert(p2 != NULL);
//		
//
//		char *s1 = NULL;
//		char *s2 = NULL;
//		//cur��¼��ǰλ��
//		char *cur = (char*)p1;
//		//p2Ϊ'\0'
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
//		return NULL;//�Ҳ����Ӵ�
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
//	     printf("�Ӵ�������\n");
//	}
//	else
//	{
//	     printf("%s\n",ret);
//	}
//	return 0;
//}


////strtok����
//
//int main()
//{
//     //192.168.31.121
//	 //192 168 31 121 - strtok
//	 //zpw@bitedu.tech
//	 //zpw bitedu tech
//
//	//char arr[] = "zpw@bitedu.tech";
//	//char* p = "@.";//��һ�������@���ڶ��������.
//
//	//���ʮ���Ƶı�ʾ��ʽ
//	char arr[] = "192.168.31.121";
//	char* p = ".";
//
//	char buf[1024] = {0};
//	strcpy(buf,arr);
//	//�и�buf�е��ַ���
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


////strerror����
//
//int main()
//{
//	//������ ������Ϣ
//	//0 -    No error
//	//1 -    Operation not permitted
//	//2 -    No such file or directory
//	//....
//	//error ��һ��ȫ�ֵĴ�����ı���
//	//��c���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//
//	
//	//char* str = strerror(2);
//	//printf("%s\n",str);
//
//	//���ļ�
//	FILE* pf = fopen("test.txt","r");//"r"��ʾ���ļ�
//	if(pf == NULL)
//	{
//		//����ͷ�ļ�#include<errno.h>
//	    printf("%s\n",strerror(errno));
//	}
//	else
//	{
//	    printf("open file success\n");
//	}
//     return 0;
//}


//�ַ����ຯ��
//�ַ�ת������
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
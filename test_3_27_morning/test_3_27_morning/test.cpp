#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	printf("abc\n");//ת���ַ� \n,����
	printf("c;\test\32\test.c\n");//ת���ַ� \t,ˮƽ�Ʊ������Tab��Ч��һ��������һ�οհ�
	printf("c;\\test\\32\\test.c\n");
	printf("%d\n",strlen("c:\test\32\test.c"));
	
	printf("%c\n",'\132');
	//ת���ַ�ռһ���ַ���ת���ַ�\ddd,����\132����132��Ϊ�˽��ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ��Ӧ���ַ�
	
	printf("%c\n",'\x61');
	//ת���ַ�ռһ���ַ���ת���ַ�\xdd,����\x61����61��Ϊʮ�����ƴ�����Ǹ�ʮ�������֣���ΪASICC��ֵ��Ӧ���ַ�

	printf("%c\n",'\x62');

	printf("%s\n","\"");
	printf("%s\n","\"a\"");
	printf("%c\n",  '\'');
	return 0;
}

//int main()
//{
//   char arr1[] = "abc";  //����//�ַ�����ʵ����һ��'\0',�����ַ���������־
//   char arr2[] = {'a','b','c','\0'};
//   char arr3[] = {'a','b','c'};
//   printf("%s\n",arr1);
//   printf("%s\n",arr2);
//   printf("%d\n", strlen(arr1));
//   printf("%d\n", strlen(arr2));
//   printf("%d\n", strlen(arr3));
//return 0;
//}
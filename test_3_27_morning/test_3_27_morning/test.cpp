#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	printf("abc\n");//转义字符 \n,换行
	printf("c;\test\32\test.c\n");//转义字符 \t,水平制表符，与Tab键效果一样，产生一段空白
	printf("c;\\test\\32\\test.c\n");
	printf("%d\n",strlen("c:\test\32\test.c"));
	
	printf("%c\n",'\132');
	//转义字符占一个字符，转义字符\ddd,例如\132代表，132作为八进制代表的那个十进制数字，作为ASCII码值对应的字符
	
	printf("%c\n",'\x61');
	//转义字符占一个字符，转义字符\xdd,例如\x61代表，61作为十六进制代表的那个十进制数字，作为ASICC码值对应的字符

	printf("%c\n",'\x62');

	printf("%s\n","\"");
	printf("%s\n","\"a\"");
	printf("%c\n",  '\'');
	return 0;
}

//int main()
//{
//   char arr1[] = "abc";  //数组//字符串其实隐藏一个'\0',他是字符串结束标志
//   char arr2[] = {'a','b','c','\0'};
//   char arr3[] = {'a','b','c'};
//   printf("%s\n",arr1);
//   printf("%s\n",arr2);
//   printf("%d\n", strlen(arr1));
//   printf("%d\n", strlen(arr2));
//   printf("%d\n", strlen(arr3));
//return 0;
//}
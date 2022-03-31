#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//int MAX(int x,int y)
//{
//if(x>y)
//	return x;
//else
//	return y;
//}
//
//int main()
//{
//	int num1 = 20;
//	int num2 = 30;
//	int max = 0;
//	max=MAX(num1,num2);
//	
//	printf("输出较大值为：%d\n",max);
//	
//	
//	
//	
//return 0;
//}

int main()
{
	char arr[] = "qwer\tyui\0";
	int are[] = {1,2,3,4};
	printf("%d\n",strlen(arr));
	printf("%d\n",sizeof(arr));
return 0;
}
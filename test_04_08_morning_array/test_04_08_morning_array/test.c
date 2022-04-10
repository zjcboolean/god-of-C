#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main()
//{   char arr[] = "abcdefg";
//    int i = 0;
//	for(i=0;i<(int)strlen(arr);i++)//strlen默认返回一个无符号数，这用强制转换转为int
//	{
//	printf("%c ",arr[i]);
//	}
//
//return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6};
//	printf("%d",sizeof(arr)/sizeof(arr[0]));
//return 0;
//}

//数组的创建与初始化

int main()
{
	int arr1[][1] = {1,2,3,4,5,6,7};   //定义一维数组可以省略下标
	int arr2[7][4] = {{1,2},3,4,5,6,7};//定义二维数组不能省略列标，可以省略行标
	int i = 0;
	int j = 0;
	for(i=0;i<7;i++)
	{
	   for(j=0;j<4;j++)
	   {
		   printf("arr2[%d][%d]的地址为%p \n",i,j,&arr2[i][j]);
	   }
	   printf("\n");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main()
//{   char arr[] = "abcdefg";
//    int i = 0;
//	for(i=0;i<(int)strlen(arr);i++)//strlenĬ�Ϸ���һ���޷�����������ǿ��ת��תΪint
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

//����Ĵ������ʼ��

int main()
{
	int arr1[][1] = {1,2,3,4,5,6,7};   //����һά�������ʡ���±�
	int arr2[7][4] = {{1,2},3,4,5,6,7};//�����ά���鲻��ʡ���б꣬����ʡ���б�
	int i = 0;
	int j = 0;
	for(i=0;i<7;i++)
	{
	   for(j=0;j<4;j++)
	   {
		   printf("arr2[%d][%d]�ĵ�ַΪ%p \n",i,j,&arr2[i][j]);
	   }
	   printf("\n");
	}
	return 0;
}
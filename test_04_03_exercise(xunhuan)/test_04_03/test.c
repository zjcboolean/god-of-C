#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{ 

                 //n�Ľ׳�


//	int i = 0;
//	int n = 0;
//	int mul = 1;
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++)
//	{
//		mul = mul * i;
//	}
//	printf("%d\n",mul);
//return 0;
//}

//int main()
//{   

                 //1! + 2! + 3! +....+ n!(һ��ѭ��)



//    int i = 0;
//	int j = 0;
//	int n = 0;
//	int mul = 1;
//	int sum = 0;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//	mul = mul *i;
//	sum = sum + mul;
//	}
//	
//	printf("%d\n",sum);
//return 0;
//}


//int main()
//{
//	               //1! + 2! + 3! +....+ n!(����ѭ��)
//
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int mul = 1;
//	int  sum = 0;
//	scanf("%d",&n);
//
//	for(i=1;i<=n;i++)
//	{
//	mul = 1;
//		for(j=1;j<=i;j++)
//		{
//		mul = mul * j;
//		}
//	sum = sum + mul;
//	}
//	printf("%d\n",sum);
//return 0;
//}



//              �����в���һ�������±�(���β��ҷ�Ч�ʵͣ�����n��)

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int k = 0;
//	int si = sizeof(arr)/sizeof(arr[0]);
//	
//	for(i=0;i<si;i++)
//	{
//	if(arr[i] == k)
//	{printf("�ҵ���%d\n",arr[i]);
//	break;
//	}
//	}
//	if(i == si)
//	{
//	printf("�Ҳ���\n");
//	}
//
//return 0;
//}

               //�����в���һ�������±�(���ֲ��ҷ�Ч�ʸߣ�����log2n��)

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int left = 0;//���±�
//	int k = 1;
//    int si = sizeof(arr)/sizeof(arr[0]);
//    int right = si-1;//���±�
//	 
//	while(left<=right)
//{      int con = (left + right)/2;;
//	   if(arr[con] == k)
//	{
//	printf("�ҵ���,�±���%d\n",con);
//	break;
//	}
//	else if(arr[con] > k)
//	{
//	right = con-1;
//	}
//	else
//	{
//	left = con+1;
//	}
//	
//}
//	if(left>right)
//	{
//	printf("�Ҳ���");
//	}
//	return 0;
//}
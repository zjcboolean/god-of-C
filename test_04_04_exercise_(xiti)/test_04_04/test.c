#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>

//int main()
//
//{
//   //����ַ��������ƶ����м���
//
//	char arr1[] = "welcome to bit!!!!!!!";
//	char arr2[] = "*********************";
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while(left<=right)
//	{
//	arr2[left] = arr1[left];
//	arr2[right] = arr1[right];
//	printf("%s\n",arr2);
//	Sleep(1000);//������ʱ��λΪ����,ͷ�ļ�#include<windows.h>
//	system("cls");//ִ��ϵͳ�����һ��������cls-�����Ļ,ͷ�ļ�#include<stdlib.h>
//	left++;
//	right--;
//	}
//	return 0;
//}


//int main()
//{
//	//�û��������룬�����������
//	char arr[20] = "0";
//	int i = 0;
//	 
//	
//
//	for(i=0;i<3;i++)
//	{ 
//	  printf("���������룺>");
//	  scanf("%s",&arr);
//	  if(strcmp(arr,"123456") == 0)
//	  {
//			printf("����������ȷ����½�ɹ�\n");
//	        break;
//	  }
//	  else
//	  {
//	  printf("�����������\n");
//	  }
//	}
//	if(i==3)
//	{
//	printf("��������������˳�����\n");
//	}
//
//return 0;
//}

//int main()
//{
//	//���������Ӵ�С�����ߴ�С�������
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	printf("������������");
//	scanf("%d%d%d",&a,&b,&c);
//
//	if(a>b)
//	{
//	int mid = a;
//		a = b;
//		b = mid;
//	}
//	if(a>c)
//	{
//	int mid = a;
//		a = c;
//		c = mid;
//	}
//	if(b>c)
//	{
//	int mid = b;
//		b = c;
//		c = mid;
//	}
//	printf("%d %d %d\n",a,b,c);
//
//	
//
//return 0;
//}

//int main()
//{
////��ӡ3�ı�������
//	int i = 0;
//
//	for(i=1;i<+100;i++)
//	{
//	if(i%3==0)
//	{
//	printf("%d\n",i);
//	}
//	}
//	return 0;
//}

//int main()
//{
//    //�������������Լ��(շת�����)
//	int a = 0;
//	int b = 0;
//	int mid = 0;
//	int c = 0;
//	printf("������a,b");
//	scanf("%d%d",&a,&b);
//
//	if(a<b)
//	{
//	    mid = a;
//		a = b;
//		b = mid;
//	}
//	while(a%b != 0)
//	{
//	    c = a%b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n",b);
//	return 0;
//}


//int main()
//{    
//	//1.��ӡ1000�굽2000��֮�������,
//	//�ж��������
//	// 1.�ܱ�4�������Ҳ��ܱ�100����������
//	// 2.�ܱ�400����������
//	int year = 0;
//	int count = 0;
//	for(year=1000;year<=2000;year++)
//	{
//		if(year%4==0 && year%100!=0)
//		{
//	        printf("%d ", year );
//			count++;
//	    }
//		else if(year%400==0)
//		{
//		 printf("%d ", year );
//		 count++;
//		}
//	}
//	printf("%d ", count );
//return 0;
//}

//int main()
//{
//	//�ҵ�100��200֮�������
//	//1.�����жϹ����Գ���(Ч�ʽϲ�)������ֻ��1��������ᱻ����
//	//�Ż�1�����a=b*c,��b,c��������һ��С��sqrt(a)��дa/2Ҳ�ɣ�
//  //�Ż� 2�����Ż�1�Ļ����ϣ���i��ż���õ����ɼ�С�������
//	
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for(i=100;i<=200;i++)
//	{
//	   //for(j=2;j<i;j++)
//		 for(j=2;j<=sqrt(i);j++)
//	   {
//	      if(i%j==0)
//		  {
//		  break;
//		  }
//	   
//	   }
//	//if(i==j)
//	if(j>sqrt(i))
//	{
//	printf("%d ",i);
//	count++;
//	}
//	}
//	printf("\ncount = %d\n",count);
//
//return 0;
//}

//     �������Ż�2

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for(i=101;i<=200;i+=2)
//	{
//	   //for(j=2;j<i;j++)
//		 for(j=2;j<=sqrt(i);j++)
//	   {
//	      if(i%j==0)
//		  {
//		  break;
//		  }
//	   
//	   }
//	//if(i==j)
//	if(j>sqrt(i))
//	{
//	printf("%d ",i);
//	count++;
//	}
//	}
//	printf("\ncount = %d\n",count);
//
//
//return 0;
//}


//int main()
//{       //��1��100�����������г��ֶ��ٸ�����9
//	    int i = 0;
//		int count = 0;
//		
//		int sum;
//		for(i=1;i<=100;i++)
//	    {  
//		   if(i%10==9)
//		   {
//		   count++;
//		   }
//		   if(i/10==9)
//		   {
//		   count++;
//		   }
//		   
//		}
//		printf("count= %d\n",count);
//return 0;
//}


//int main()
//{    
//	//����1/1-1/2+1/3-1/4+1/5......+1/99-1/100
//	//����һ��ֱ���㷨
//
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//    for(i=1;i<=100;i++)
//	{
//	sum += flag*1.0/i;
//	flag = -flag;
//	}
//	printf("%lf",sum);
//
//return 0;
//}

//int main()
//{
//     //����1/1-1/2+1/3-1/4+1/5......+1/99-1/100
//	//����������ĸΪ��������� - ��ĸΪż�������
//
//	int i,j = 0;
//	double sum1 = 0.0;
//	double sum2 = 0.0;
//	double sum = 0.0;
//	for(i=1,j=2;i<=99,j<=100;i+=2,j+=2)
//	{
//	sum1 += 1.0/i;
//	sum2 += 1.0/j;
//	}
//	sum = sum1-sum2;
//	printf("%lf ",sum);
//}



//int main()
//{
//
//	//��10�������е����ֵ
//	int arr[] = {-1,-3,-7,-3,10,8,3,9};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int max = arr[0];
//	int i = 0;
//	for(i=1;i<=sz;i++)
//	{
//	   if(max<arr[i])
//	   {
//		 max = arr[i];
//	   }
//	}
//	printf("���ֵ��max=%d ",max);
//return 0;
//}

int main()
{
	//����Ļ�����9*9�˷��ھ���
	int i = 0;
	int j = 0;
	int a = 0;
	for(i=1;i<=9;i++)
	{
	for(j=1;j<=i;j++)
	{
		a=i*j;
	printf("%d*%d=%-2d ",i,j,a);//%2d��˼�Ǵ�ӡ��λ��%-2d��˼�Ǵ�ӡ��λ�������
	}
	printf("\n");
	}
return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>

//int main()
//{      //ָ�������
//	int aa[2][5] = {1,2,3,4,5,6,7,8,9,10};

//	int *ptr1 = (int*)(&aa +1);
//	int *ptr2 =(int *)(*(aa + 1));
//
//      //*(p+2) == p[2] == *(arr+2) ==arr[2] 
//	printf("%d %d\n",*(ptr1 - 1),*(ptr2 - 1));//ptrָ������Ϊint*,ptr-1��ʾ����4���ֽ�
//
//    return 0;
//}

//int main()
//{
//	char *a[] = {"work","at","alibaba"};
//	char **pa = a;
//
//	pa++;
//	printf("%s\n",*pa);//*pa��ʾȡ��pa���ŵĶ���
//    return 0;
//}


//int main()
//{
//	char *c[] = {"ENTER","NEW","POINT","FIRST"};
//	char**cp[] = {c+3,c+2,c+1,c};
//	char***cpp = cp;
//
//	printf("%s\n",**++cpp);//POINT
//	printf("%s\n",*--*++cpp + 3);//ER
//	printf("%s\n",*cpp[-2]+3);//ST
//	printf("%s\n",cpp[-1][-1] + 1);//EW
//
//    return 0;
//}


////��ҵ �����ַ���
//
//void reverse(char* str)
//{
//	//assert(str);//����
//
//	int len = strlen(str);
//	
//	char* left = str;
//	char* right = str + len - 1;
//
//	while(left<right)
//	{
//	char tmp = *left;
//	*left=*right;
//	*right = tmp;
//	left++;
//	right--;
//	}
//}
//
//int main()
//{
//	char arr[256] = {0};
//	scanf("%s",arr);//abcdef-->fedcba
//	//get(arr);//��ȡһ�У���ֹ�ַ����м��пո�,VS2010��֧��
//	//������
//	reverse(arr);
//	printf("�������ַ���%s\n",arr);
//
//   return 0;
//}


////��ҵ 
////��Sn=a+aa+aaa+aaaa+aaaaa��ǰ����֮�ͣ�����a��һ������
////���� 2+22+222+2222+22222
//
//int main()
//{
//	int a = 0;//����
//	int n = 0;//����
//	int i = 0;
//	int ret = 0;//ÿһ��
//	int sum = 0;//���
//	printf("������a,n =");
//	scanf("%d %d",&a,&n);
//
//	for(i=0;i<n;i++)
//	{
//	    ret = ret*10+a;
//		sum +=ret;
//	}
//
//	printf("%d\n",sum);
//    return 0;
//}

////��ҵ  ��ȡˮ�ɻ�����1-100000��
//
////һ��nλ����ÿһ��n�η�֮�͵���������
//
//int main()
//{
//	int i = 0;
//	for(i=0;i<=100000;i++)
//	{
//	    //�ж�i�Ƿ�Ϊˮ�ɻ�������������
//		//1.����i��λ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while(tmp/=10)
//		{
//		    n++;
//		}
//		//2.����iÿһλn�η�֮��
//		tmp = i;
//		while(tmp)
//		{
//		  sum += (int)pow(tmp%10,n);//pow������������Ϊdouble
//		  tmp /=10;
//		}
//		//3.�Ƚ�i == sum
//		if(i == sum)
//		{
//		   printf("%d ",i);
//		}
//	}
//
//    return 0;
//}


////��ҵ  ��ӡһ�����Σ�13��
////      *
////     ***
////	  *****
////   *******
////  *********
//// ***********
////*************
//// ***********
////  *********
////   *******
////    *****
////	   ***
////	    *
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	printf("���������� line= ");
//	scanf("%d",&line);//��ӡ7��
//	
//	//��ӡ�ϰ벿��
//	
//	for(i=0;i<line;i++)
//	{
//	     //��ӡ�ո�
//		int j = 0;
//		for(j=0;j<line-1-i;j++)
//		{
//		    printf(" ");
//		}
//	     //��ӡ*
//		for(j=0;j<2*i+1;j++)
//		{
//		   printf("*");
//		}
//		printf("\n");
//	}
//	
//	//��ӡ�°벿��
//	for(i=0;i<line-1;i++)
//	{
//		int j = 0;
//	     //��ӡ�ո�
//		for(j=0;j<i+1;j++)
//		{
//		   printf(" ");
//		}
//	     //��ӡ*
//		for(j=0;j<2*(line-1-i)-1;j++)
//		{
//		   printf("*");
//		}
//		printf("\n");
//	}
//    return 0;
//}


////��ҵ 
//// ����ˮ��һƿ��ˮһԪ��������ƿ��һԪ������ʮԪ���ȶ�����ˮ
////�㷨һ
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d",&money);
//	//���������ˮ�ȵ�
//	total = money;
//	empty = money;
//	//����������ˮ
//	while(empty>=2)
//	{
//	    total +=empty/2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("����%dƿ",total);
//
//
//    return 0;
//}


////����ˮ �㷨��
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d",&money);
//	if(money == 0)
//	{
//	    total = 0;
//	}
//	else
//	{
//	    total = 2 * money -1;
//	}
//
//	printf("%d",total);
//    return 0;
//}

////error ��ѭ��
//int main()
//{
//	int i = 0;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0;i<=12;i++)
//	{
//	    arr[i] = 0;
//		printf("hello bit\n");
//	}
//
//    return 0;
//}

////��������ż��˳�򣬵�������ʹ����ȫ����λ��ż��ǰ��

//void print(int arr[],int sz)
//{
//       int i = 0;
//	   for(i=0;i<sz;i++)
//	   {
//	      printf("%d ",arr[i]);
//	   }
//	   printf("\n");
//}
//
//int move(int arr[],int sz)
//{
//      int left = 0;
//	  int right = sz - 1;
//
//	  while(left<right)
//	  {
//	       //��ż��
//	  while((left<right) && arr[left]%2 == 1)//����ȫ��������Խ��
//	  {
//	     left++;
//	  }
//	  //������
//	  while((left<right) && arr[right]%2 == 0)//����ȫ��ż����Խ��
//	  {
//	     right--;
//	  }
//	  if(left<right)
//	  {
//	       int tmp = arr[left];
//		   arr[left] = arr[right];
//		   arr[right] = tmp;
//	  }
//	  }
//}
//
//int main()
//{
//
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//��Ϊ 1 3 5 7 9 2 4 6 8 10
//	move(arr,sz);
//	print(arr,sz);
//    return 0;
//}
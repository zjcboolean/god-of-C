#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	printf("�Ǻ�\n");
//	main();
//return 0;
//}

//void print(int n)
//{
//        if(n>9)
//		{
//		   print(n/10);
//		}
//		printf("%d ",n%10);
//}
//int main()
//{    //�ݹ�
//
//	//����һ����num=1234�������������ҵ�˳���ӡ����
//	int num = 0;
//	printf("������num= ");
//	scanf("%d",&num);
//
//	print(num);
//    return 0;
//}


//int my_strlen(char* str)
//{     
//	  int count = 0;
//      while(*str != '\0')
//	  {
//	       count++;
//		   str++;
//	  }
//	  return count;
//
//}
////  ������ʱ�����ķ������ַ�������
//
//int main()
//{
//	char arr[] = "bite";
//	int len = my_strlen(arr);
//	printf("�ַ����ĳ���= %d\n",len);
//return 0;
//}



//int my_strlen(char* str)
//{
//      if((*str) != '\0')
//		  return 1+my_strlen(str+1);
//	  else 
//		  return 0;
//}
//
//int main()
//{    //��������ʱ���������õݹ�ķ������ַ�������
//	  char arr[] = "bitr";
//	  int len = my_strlen(arr);
//	  printf("�ַ����ĳ���=%d\n",len);
//
//
//return 0;
//}


//int Fac(int n)
//{
//       int i = 0;
//	   int ret = 1;
//	   for(i=1;i<=n;i++)
//	   {
//	   ret = ret*i;
//	   }
//	   return ret;
//}
//int main()
//{
//	//ʹ��ѭ����n�Ľ׳�
//
//	int n = 0;
//	int ret = 0;
//	printf("������n=");
//	scanf("%d",&n);
//	ret =Fac(n);
//	printf("%d\n",ret);
//return 0;
//}


//int Fac(int n)
//{
//    if(n>=1) 
//	{
//		return n*Fac(n-1);
//	}
//	else
//	{
//	return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("������n=");
//	scanf("%d",&n);
//    ret = Fac(n);
//
//	printf("%d!=%d\n",n,ret);
//return 0; 
//}



//int Fib(int n)
//{
//      if(n>2)
//	  {
//	  return Fib(n-1)+Fib(n-2);
//	  }
//	  else
//	  return 1;
//}
//
////���n��쳲��������õݹ�Ч��̫��
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("�����룺n=");
//	scanf("%d",&n);
//	ret = Fib(n);
//
//	printf("��%d��쳲�������=%d\n",n,ret);
//return 0;
//}



//int Fib(int n)
//{
//      int a = 1;
//	  int b = 1;
//	  int c = 1;
//      while(n>2)
//	  {
//	  c = a+b;
//	  a = b;
//	  b = c;
//	  n--;
//	  }
//	  return c;
//}
//
//int main()
//{ 
//	//ʹ��ѭ���ķ������n��쳲�����������
//	int n = 0;
//	int ret = 0;
//	printf("������n=");
//	scanf("%d",&n);
//	ret = Fib(n);
//
//	printf("��%d��쳲�������=%d\n",n,ret);
//	return 0;
//}

//void test(int n)
//{
//     if(n<10000)
//	 {
//	     test(n+1);
//	 }
//}
//     //�ݹ�ʹ������������ջ���
//int main()
//{
//    test(1);
//	return 0;
//}


//int floor(int n)
//{
//      if(n>=2)
//	  {
//	  return 1+2*floor(n-1);//1.��A����n-1�������Ƶ�B��
//	  }                   //2.��A���ѵ�n�������Ƶ�C��
//	  else                //3.��B����n-1�������Ƶ�C��
//	  return 1;
//}
//
//int main()
//{     //λ��A��n�㺺ŵ������B����λ��C������Ҫ�ƶ����ٴ�
//	  //��ŵ��ÿ�ζ����´���С����
//	int n = 0;
//	int count = 0;
//	printf("�����뺺ŵ������n=");
//	scanf("%d",&n);
//	count = floor(n);
//
//	printf("��Ҫ�ƶ�%d��\n",count);
//    return 0;
//}


//int step(int n)
//{     if(n==1)//����쳲�������������ͬ��֮�ʹ�õݹ鷨Ч��̫�����ʺ�ѭ����
//        return 1;
//      else if(n==2)
//	  {
//        return 2;
//      }
//	  else
//		return step(n-1)+step(n-2);
//
//}
int step(int n)
{       int a = 1; //ѭ��������̨�׷���
        int b = 2;
		int c = 0;
      if(n>2)
	  {
		while(n>2)
	   {
	        c = a+b;
			a = b;
			b = c;
			n--;
	   }
	   return c;
	  }
	  else if(n==1)
	   return 1;
	  else
	  {
	   return 2;
	  }
}

int main()
{       //������̨�ף�ÿ�ο�����һ��̨�׻���������̨�ף������ϵ�n��̨���ж���������
	    // ������̨����λN;

//��N=1ʱ����Ȼֻ��1������;
//
//��N=2ʱ�����ܿ�����2��1�����1��2��,��2������
//
//��N=3ʱ������3��̨��ʱ�����ܿ���ѡ������1�㣬ʣ��2��̨�ף����Դ�ʱ������2��̨��ʱ����������2��;
//        ������ѡ���һ����2��̨��ʱ��ʣ��1��̨�ף���ʱ��1��̨��ʱ������
//        ����3��̨��ʱ�ķ�����: 2��̨�׵ķ���+ 1��̨�׵ķ�����
//
//��N=4ʱ����������Ϊ: 1������1��������1�㣬��ʣ��3�㣬����������3��̨�׵�������
//                   2�� ����2��������2�㣬��ʣ��2�㣬����������2��̨�׵�������
//                   ����4��̨�׵ķ���Ϊ: 3��̨�׵ķ���+2��̨�׵ķ�����
//
//�Դ����ƣ���N=nʱ��n��̨�׵ķ���Ϊ: n-1��̨�׵ķ���+ n-2��̨�׵ķ�����
	    // 
	int n;
	int count = 0;
	printf("������̨����n=");
	scanf("%d",&n);

    count=step(n);
	printf("������%d��̨����%d������\n",n,count);

return 0;
}
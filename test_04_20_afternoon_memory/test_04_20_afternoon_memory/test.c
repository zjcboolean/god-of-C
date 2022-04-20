#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<float.h>

//int check_sys()
//{
//	int a = 1;
//	//char* p= (char*)&a;
//	//返回1，小端
//	//返回0，大端
//	//return *p;
//	return *(char*)&a;//优化
//}
//int main()
//{
//	//写一段代码，告诉我们是大端还是小端存储
//	//返回1，小端
//	//返回0，大端
//	int ret = check_sys();
//	if(ret == 1)
//	{
//	    printf("小端存储\n");
//	}
//	else
//	{
//	    printf("大端存储\n");
//	}
//	
//	return 0;
//}

//int main()
//{
//
//	char a = -1;
//	//10000000 00000000 00000000 00000001
//	//补码11111111 11111111 11111111 11111111
//	//存储形式11111111
//	//输出为%d 整形提升11111111 11111111 11111111 11111111
//	//转换为原码为 -1
//	signed char b = -1;
//	unsigned char c = -1;
//	char d = -128;
//	char e = 128;
//	//存储形式11111111
//	//输出为%d 整形提升00000000 00000000 00000000 11111111
//	//高位补零
//	
//	printf("a=%d,b=%d,c=%d,d=%u,e=%u",a,b,c,d,e);//-1 -1 255 极大数 极大数
//	//%u - 打印十进制的无符号数字
//
//    return 0;
//}


//int main()
//{
//	int i = -20;
//	unsigned int j = -10;
//	//11111111 11111111 11111111 11101100补码
//	// +
//	//11111111 11111111 11111111 11110110补码
//	// = 
//  //1|11111111 11111111 11111111 11100010补码
//  //  11111111 11111111 11111111 11100001反码
//  //  10000000 00000000 00000000 00011110原码 -30
//
//	printf("%d\n",i+j);//-30
//    return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for(i=0;i<1000;i++)
//	{
//	   a[i] = -1 - i;
//	}
//	//-1 -2 ...-128 127 126 ...2 1 0
//	printf("%d", strlen(a));//遇到0就停止，除去0一共255个数
//    return 0;
//}

//1E10 = 1*10^10


int main()
{

	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n",n);
	printf("*pFloat的值为：%f\n",*pFloat);

	*pFloat = 9.0;
	printf("num的值为：%d\n",n);
	printf("*pFloat的值为：%f\n",*pFloat);
	//浮点型和整形的存取方式不同
	//
    return 0;
}
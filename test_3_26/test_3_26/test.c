
#include <stdio.h>

//int num1 = 10;//定义在{}之外的变量叫全局变量

int main()//主函数-程序入口，仅有一个
{
	
		int num1 = 0;
		int num2 = 0; 
		int sum = 0;
		 
		scanf("%d%d",&num1,&num2);//取地址符&
		sum = num1 + num2;
		
		printf("sum = %d\n",sum);
	//局部变量与全局变量名字最好不要一样
//printf("hehe\n");
	//long h = 4;
	//float zero = 5.0f;
	//double q = 13.0;
	//char ch = 'B';
	//int age = 24;
	//printf("%c\n",ch);
	//printf("%d\n",age);//decimal
	//printf("%d\n",h);
	//printf("%f\n",zero);
	//printf("%lf\n",q);
	//printf("%d\n",sizeof(double));
	//printf("%d\n",sizeof(long));
	//printf("%d\n",num1);
return 0;
}
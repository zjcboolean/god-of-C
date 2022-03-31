#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int sum = 0;
	printf("加入公司你会好好学习吗？\n");
	printf("会/不会 (0/1)");
	scanf("%d\n",sum);
	if(sum==1)
	{
	printf("好车好房，走上人生巅峰");
	}
	else
	{
	printf("乘早滚蛋");
	}

return 0;
}
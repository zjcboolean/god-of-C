#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	/*int i=1;
//	while(i<=100)
//	{
//	printf("%d\n",i);
//	i +=2;
//	
//	}*/
//
//	int i = 1;
//	while(i<=100)
//	{
//	if(i%2!=0)
//	
//	printf(" %d ", i);
//	i++;
//	}
//
//	
//return 0;
//}

//int main()
//{
//	int age = 8;
//	if(age<18)
//	{printf("δ����");
//	    printf(" ��׼�Ⱦ�\n ");
//	}
//	else if(age>=18 && age<30)
//		printf("����\n");
//	else if(age>=30 && age<50)
//		printf("׳��\n");
//	else
//		printf("����\n");
//return 0;
//}

//int main()
//{
//	int day;
//	printf("�����룺");
//	scanf("%d",&day);
//	switch(day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default :
//		printf("���޴���\n");
//		break;
//	}
//return 0;
//}

int main()
{
	int n = 1;
	int m = 2;
	switch(n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch(n)
		{
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n",m,n);
return 0;
}

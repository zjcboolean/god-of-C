#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int i = 1;
//
//	while(i<=10)
//	{
//		if(i==5)
//		{
//		continue; //��ֹ����ѭ������Ĵ��룬����ѭ���ʼ�жϳ�ֵ
//		}        //break,����ѭ��
//	printf("haha\n");
//	i++;
//	}
//
//return 0;
//}


//int main()
//{       int ch = 0;
//    while((ch = getchar()) != EOF)//�ļ���ֹ��ֵΪ-1
//	{                           //Ctrl Z�൱��EOF
//	printf("%c\n",ch);
//	putchar(ch);
//	
//	}
//return 0;
//}

//int main()
//{    char ch = 0;
//     char ret = 0;
//	char tse[20] = {0};
//	printf("����������:>");
//	scanf("%s",tse);
//	printf("��ȷ��������ȷ:(T/F)");
//	while((ret = getchar()) != '\n')
//	{
//	;
//	}
//	//getchar();//���ջ�������ȷ��scanf�Ļس���'\n'����getchar()���½����ַ�
//	ch = getchar();
//	if(ch == 'T')
//	{
//	printf("����������ȷ");
//	}
//	else
//	{
//	printf("�����������");
//	}
//
//return 0;
//}

//int main()
//{  char ch,ret;
//ch = getchar();
//getchar();//���ջ�������ȷ����һ��getchar()�Ļس���'\n'
//ret = getchar();
//return 0;
//}

//int main()
//{   char ch = 0;
//	while((ch = getchar()) != EOF);//error ���˷ֺŻᵼ������ѭ��
//	{
//    putchar(ch);
//	printf("%c",ch);
//	}
//return 0;
//}

//int main()
//{
//	int ch = 0;
//	while((ch = getchar()) != EOF)//�ж�����еĵ�ʽҪ������������
//	{
//	if(ch>'9' || ch<'0')//��ʾ�����ַ�
//	continue ;
//	putchar(ch);
//	}
//return 0;
//}

int main()
{
int i = 0;
for(i=1;i<=10;i++)
{
	if(i == 5)
		continue;
	printf("%d\n",i);
}
}


#define  CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
////����һ���ṹ�壨���Ӷ���Ȼ���г����ּ۸�
////struct Book
////{
////	char name[20];
////	short price;
///*}*/;//�����Ǽ�;
//
////int Add(int x, int y)
////{
////	int z = x + y;
////	return z;
////}
//
//
//
////int Max(int x, int y) 
////{
////	if (x > y)
////		return x;
////	else
////		return y;
////}
//
//
//
//
//
//
//
//
//
//int main()
//{
//	///*printf("Hello,World!");*/
//	//struct Book b1 = { "C���Գ������",55 };//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	//printf("������%s\n", b1.name);//���b1.��׺
//	//printf("�۸�%d\n", b1.price);
//	/*int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d", sum);*/
//	/*int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("Max=%d", max);
//*/
///*int a = 10;
//int b = 20;
//int max = (a > b ? a : b);
//printf("max=%d", max);*/


//
//#include  <stdio.h>
//int main()
//{
//
//	int age = 10;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//
//
//	
//	else
//	{
//	  if (age >= 18 && age < 28)
//	printf("����\n");
//	else if (age >= 28 && age < 50)
//	printf("����\n");
//	else if (age >= 50 && age<90)
//	printf("����\n");
//	else
//	printf("�ϲ���\n");
//	}
//	return 0;
//}

//#include  <stdio.h>

//#define MAX(X,Y)(X>Y?X:Y)
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
	/*int a = 10;
	int b = 20;
	int max = MAX(a, b);
	printf("max=%d\n", max);*/
	/*int a = 10;
	int b = 20;
	int max = Max(a, b);
	printf("max=%d\n", max);*/
	//#include  <stdio.h>
	//int main()
	//{
	//	int a = 100;
	//	printf(" % p\n", &a);
	//	int* p = &a;
	//	*p = 20;
	//	printf("%p\n",& *p);
	//
	//
	//
	//	return 0;
	//}

	//�Ժ���VS��ʹ��scanfӦ����scanf_s


	//#include  <stdio.h>
	//int main()
	//{
	////�ж�һ�����Ƿ�Ϊ����
	//	printf("������һ������");
	//	int a = 0;
	//	scanf_s("%d", &a);
	//	if (1 == a % 2)
	//		printf("����Ϊһ����������ֵΪ%d\n", a);
	//	else
	//		printf("����Ϊһ��ż��,��ֵΪ%d\n", a);
	//
	//	return 0;
	//}



	//�ж�һ�����Ƿ�Ϊ�����������г�1-100������

	//#include<stdio.h>
	//int main()
	//{
	//	int a = 1;
	//	while (a <= 100)
	//
	//	{
	//		if (1 == a % 2 && a <= 100)
	//		{
	//			printf("����Ϊ����,����ֵΪ%d\n", a);
	//			a++;
	//		}
	//		else
	//		{
	//			printf("����Ϊż��,����ֵΪ%d\n", a);
	//			a++;
	//		}
	//	}
	//
	//
	//	return 0;
	//}
	//#include<stdio.h>
	//int main()
	//{
	//	int day = 0;
	//	printf("������һ���е�ĳһ��\n(1,2,3,4,5,6,7,)>:");//   >:����ʾ����˼��������˫�����ڣ����ʽ����>:��ǰ��
	//	scanf_s("%d\n",&day); //ʹ��scanfʱ�����Ǽ�  &                                      //�÷�:(���ʽ)>:
	//	switch (day)
	//	{
	//	case 1://�����Ǽ�:    һ������£�ÿ��case�Ľ�β����break;
	//		printf("����һ\n");
	//		break;
	//	case 2:
	//		printf("���ڶ�\n");
	//		break;
	//	case 3:
	//		printf("������\n");
	//		break;
	//	case-4:
	//		printf("������\n");
	//		break;//��ֹ����˼������switch���
	//	case 5:
	//		printf("������\n");
	//		break;
	//	case 6:
	//		printf("������\n");
	//		break;
	//	case 7:
	//		printf("������\n");
	//		break;
	//	default://��������case�����ʹ��default
	//		printf("�����������������\n");
	//		break;
	//	}
	//	return 0;
	//
	//}
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	printf("������һ���е�ĳһ��\n(1,2,3,4,5,6,7)>:");
//	scanf_s("%d\n", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;//ֻҪ��ʹ��break������ͻ�һֱ������ȥ
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//
//	}
//
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if(5==i)
//		continue;//����continue֮��Ĵ��룬����switch������ѭ��
//		printf("%d\n", i);
//		i++;
//	}
//
//
//	return 0;
//}
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	int ch=getchar();//����һ���ַ�
//	putchar(ch);//���һ���ַ�
//	return 0;
//}
#include<string.h>
#include<stdio.h>
int main()
{
	int input = 0;
	printf("�������֮�������ú�ѧϰ��(1/0)>:");
	scanf_s("%d",&input);
	if (1 == input)
		printf("��offer");
	else
		printf("������");

	return 0;
}




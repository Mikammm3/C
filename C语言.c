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
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	printf("�������֮�������ú�ѧϰ��(1/0)>:");
//	scanf_s("%d",&input);
//	if (1 == input)
//		printf("��offer");
//	else
//		printf("������");
//
//	return 0;
////}


//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//
//int main()
//{
//
//	int ret = 0;
//	int ch = 0;
//	char password[20] = {0};
//	printf("����������\n");
//	scanf_s("%s\n",&password,20);
//	while((ch=getchar())!='\n');//�����������\n
//	{
//		;
//	}
//	printf("��ȷ������(Y/N)>:\n");
//	ret=getchar();
//	if (ret == ' Y')
//
//		printf("ȷ�ϳɹ�\n");
//
//	else if (ret == 'N')
//		printf("����ȷ��\n");
//	else
//		printf("error\n");
//	return 0;
//}



//int main()
//{
//	//����p������ϰ��
//
//	float r = 0.1;
//	int n = 10;
//	float p = pow(1+r,n);
//	printf("%f",p);
//	return 0;
//
//}


//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//��ctrl+z����ѭ��
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}


//��ӡ1-10
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>



//int main()
//{
//	int i = 0;
//	for (i = 1 ; i <= 10 ; i++)
//	{//  ��ʼ��      �ж�   ���� 
//		if (5 == i)
//			continue;//ȡ��ִ��continue����Ĵ��룬����for��䣬
//		             //break������forѭ��
//		printf("%d\n",i);
//
//	}
//
//
//	return 0;
//}





////û�õ���Ҫ�Ľ�����������г���������ţ�ƵĴ������
// ����n�Ľ׳�
//int main()
//{
//	int z = 0;
//	int i = 1;
//	for (i = 1; i >= i; i++)
//	{
//		z = i * (i + 1);
//		printf("%d ",z);
//	}
//	return 0;
//}




// ����a�Ľ׳�

//int main()
//{
//	int a = 0;
//	scanf_s("%d\n",&a);
//	int b = 0;
//	int c = 1;
//	for (b = 1; b <= a; b++)
//	{
//		c = b * c;
//
//	}
//	printf("%d\n",c);
//
//	return 0;
//}



//����1��+2��+3��+....+10��
//˼·�������һ�����Ľ׳ˣ�������ѭ�����ÿ�����Ľ׳ˣ���󽫽׳����
//      1*2*3*4*....*n


//int main()
//{
//	int a = 0;
//	int n = 0;
//	int b = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		b = 1;
//		for (a = 1; a <= n; a++)
//		{
//			b = a * b;
//
//		}
//		sum = sum + b;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//����:
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int a = 1; 
//	int sum = 0;
//		for (n = 1; n <= 10; n++)
//		{
//			a = a * n;
//			sum = sum + a;
//
//		}
//		printf("%d\n",sum);
//	return 0;
//}



//���ֲ��ҷ�:




//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//������7
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "#######################################";
//	char arr2[] = "HEY!!! YOU!!! WELCOME   TO   A521!!!!!!";
//	int left = 0;
//	//int sz = (sizeof(arr1) / sizeof(arr1[0]));
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("%s\n", arr1);
//		Sleep(1000);//��Ϣ1s      ����windows.h
//		system("cls");//�����Ļ     ����stdlib.h
//		left++;
//		right--;
//	}
//
//	printf("%s\n", arr1);
//	
//
//
//	return 0;
//}





//int main()
//{
//	char password[] = {0};
//	scanf_s(" %s ", &password,20);
//	if (strcmp(password, "123456") == 0)//  ==  ���������ж������ַ����Ƿ���ͬ��Ӧ��ʹ��strcmp
//		printf("��½�ɹ�\n");                               // �﷨��strcmp(    ,"   ")
//	return 0;
//}


//��ϰ1.���������Ӵ�С���

//#define MAX(X,Y)(X>Y?X:Y)
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d,%d,%d", &a, &b, &c);
//	int max1 = MAX(a, b);
//	int max2 = MAX(b, c);
//	int max3 = MAX(a, c);
//	if (max1 == max2 && a > c)
//		printf("%d>%d>%d", max1, a, c);
//	else if (max1 == max2 && a < c)
//		printf("%d>%d>%d", max1, c, a);
//	else if (max1 == max3 && b > c)
//		printf("%d>%d>%d", max3, b, c);
//	else if (max1 == max3 && b < c)
//		printf("%d>%d>%d", max3, c, b);
//	else if (max2 == max3 && b > a)
//		printf("%d>%d>%d", max2, b, a);
//	else
//		printf("%d>%d>%d", max2, a, b);
//
//	return 0;
//}




//������ϰ1��


//�ȴ�С��Ŀ���ȴ�ӡ��������
//�߼���a�ͷ����ֵ��b��֮��c���Ƿ���Сֵ
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d",&a,&b,&c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;//��a��b��ֵ����
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;//��a��c��ֵ����
//		c = tmp;
//
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;//��b��c��ֵ����
//		c = tmp;
//	}
//	//���ϲ�����֤aΪ���ֵ��b��֮��cΪ��Сֵ
//
//
//	printf("%d,%d,%d\n",a,b,c);
//	return 0;
//}


	

//��ϰ2.1-100,��ӡ���ı�������

//int main()
//{
//	int i = 0;
//	for (i = 1;i<=100; i++)
//	{
//		if ((i % 3) == 0)
//			printf("%d ",i);
//	}
//
//
//	return 0;
//}



//��ϰ3.����2���������������������Լ��


/*int main()
{
	
	int m = 0;
	int n = 0;
	scanf_s("%d%d",&m,&n);
	if (m > n)
	{
		int i = m % n;
		if (i == 0)
			printf("���Լ��Ϊ%d", n);
		if (i != 0)
		{
			for (i;; i++)
			{
				if (m % i == 0 && n % i == 0)
					printf("���Լ��Ϊ%d", i);
			}
		}
	}
	if (m < n)
	{
		int i = n % m;
		if (i == 0)
			printf("���Լ��Ϊ%d",m);
		if (i != 0)
		{
			for (i;; i++)
			{
				if (m % i == 0 && n % i == 0)
					printf("���Լ��Ϊ%d", i);
			}
		}
	}
	if (m==n)
		printf("���Լ��Ϊ%d", n);
	return 0;
}*/





//���棺շת�����

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d",&a,&b);
//	int r = 0;
//	while (a % b)
//	{
//		r = a % b;
//		a = b;
//		b = r;
//
//	}
//	printf("���Լ����%d\n",b);
//
//	return 0;
//}

//��ϰ3.��ӡ1000-2000������
//�ж����꣺
//    1.�ܱ�4���������ܱ�100����
//    2.�ܱ�400����


//int main()
//{
//	int a = 1000;
//	for (a = 1000; a <= 2000; a++)
//	{
//		if (a % 4 == 0 && a % 100 != 0)
//			printf("%d ", a);
//		if (a % 400 == 0)
//			printf("%d ", a);
//
//
//	}
//	return 0;
//}




//���棺

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0)&&(year % 100 != 0) || (year % 400 == 0))
//			printf("%d ", year);
//
//	}
//
//
//	return 0;
//}





//��ϰ4.��ӡ100-200������
// ����
//����:�Գ�����
//һ����ȥ��


//int main()
//{
//	int count = 0;
//	int j = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//
//		if (i == j)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}


//���棺��ӡ100-200������
//  i=a*b
//���裺i=16=2*8=4*4
//���ԣ�i��Լ��<=i������




//int main()
//{
//	int j = 0;
//	int i = 0;
//	for (i = 100; i <200; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//
//		}
//
//		if (j > sqrt(i))
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}





//��ϰ5.1-100�г��ֶ��ٸ�����9
int main()
{
	int i = 0;
	int count = 0;
	for (i = 90; i <100; i++)
	{
		printf("%d ", i);
		count++;
	}


	return 0;
}






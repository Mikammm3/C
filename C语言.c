#define  _CRT_SECURE_NO_WARNINGS

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
#include<time.h>



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


//��ϰ5.�������
//����1/1-1/2+1/3-1/4+1/5.......+1/99-1/100��ֵ


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//		{
//			j = j+(1 / i);
//		}
//		if (i % 2 == 0)
//		{
//			j = j - (1 / i);
//		}
//		//��������������õ���Ҳ��������                            ��1/2=0  -->  1/i==0
//		//�����Ҫ������������õ�С��,��ôֻҪ������������һ��С�����ɣ����Ϊ  1.0/i!=0
//	}
//
//	printf("sum=%d\n", j);
//
//	return 0;
//}





//������ϰ5���������


//int main()
//{
//	int i = 0;
//	float j = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//		
//			j = j + (1.0 / i);
//		
//		if (i % 2 == 0)
//		
//			j = j - (1.0 / i);
//		
//		
//	}
//
//	printf("sum=%f\n", j);
//
//	return 0;
//}




//���棺

//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum +=flag*(1.0 / i);
//		flag = -flag;
//
//	}
//
//	printf("sum=%f\n", sum);
//
//	return 0;
//}


//��ϰ6.�����ֵ
//��10�������е����ֵ
//˼·������һ�����飬���ȡ��������Ϊ1-10���������е����ֵ
//�ٶ���һ��max���������е���һ һ��max�Ƚϣ��ж�˭���󣬽�ֵ��ֵ��max


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz ; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//
//	}
//	printf("max=%d", max);
//	return 0;
//}


//��ϰ7.�˷��ھ���
//����Ļ�����9*9�˷��ھ���

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int z = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (i == 1)
//		{
//			for (j = 1; j < 10; j++)
//			{
//				z = i * j;
//				printf("\n%d=%d*%d ", z, i, j);
//			}
//		}
//		else if (i == 2)
//		{
//			for (j = 1; j < 10; j++)
//			{
//				z = i * j;
//				printf("\n%d=%d*%d ", z, i, j);
//			}
//		}
//		else if (i == 3)
//		{
//			for (j = 1; j < 10; j++)
//			{
//				z = i * j;
//				printf("\n%d=%d*%d ", z, i, j);
//			}
//		}
//		else if (i == 4)
//		{
//			for (j = 1; j < 10; j++)
//			{
//				z = i * j;
//				printf("\n%d=%d*%d ", z, i, j);
//			}
//		}
//		else if (i == 5)
//		{
//			for (j = 1; j < 10; j++)
//			{
//				z = i * j;
//				printf("\n%d=%d*%d ", z, i, j);
//			}
//		}
//		else if (i == 6)
//		{
//			for (j = 1; j < 10; j++)
//			{
//				z = i * j;
//				printf("\n%d=%d*%d ", z, i, j);
//			}
//		}
//		else if (i == 7)
//		{
//			for (j = 1; j < 10; j++)
//			{
//				z = i * j;
//				printf("\n%d=%d*%d ", z, i, j);
//			}
//		}
//		else if (i == 8)
//		{
//			for (j = 1; j < 10; j++)
//			{
//				z = i * j;
//				printf("\n%d=%d*%d ", z, i, j);
//			}
//		}
//		else 
//		{
//			for (j = 1; j < 10; j++)
//			{
//				z = i * j;
//				printf("\n%d=%d*%d ", z, i, j);
//			}
//		}
//	}
//	return 0;
//}




//���Լ򻯣�



//int main()
//{
//	int i = 0;
//	int j = 0;
//	int z = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < 10; j++)
//		{
//			z = i * j;
//			printf("%d*%d=%d\n",i,j,z);
//
//		}
//
//	}
//
//	return 0;
//}


//���棺


//int  main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//			//��%��d�з����ֱ�ʾ��ӡnλ�����֣���%2d����ʾ��ӡ2λ���֣��������ÿո��ϣ������ұ߶���
//			//%-2d  ͬ�ϣ��������
//
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//��ϰ8.���ֲ��ң����������������в���һ�������ҵ�������ҵ��ˣ��±���   û�ҵ�����Ҳ���

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	scanf_s("%d", &i);
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < i)
//
//			left = mid + 1;
//
//		else if (arr[mid] > i)
//
//			right = mid - 1;
//
//
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//
//		printf("�Ҳ���\n");
//
//
//	return 0;
//}


//     �ิϰ�׳˵ļ��㣡������
//����1��+2!+3!+.....+10!
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	int d = 0;
//	for (b = 1; b <= 10; b++)
//	{
//		int c = 1;
//		for (a = 1;a<=b; a++)
//		{
//			c = c * a;
//
//		}
//		d = d + c;
//	}
//
//	printf("sum=%d\n", d);
//	return 0;
//
//}


//int main()
//{
//	char arr[] = { 0 };
//	scanf_s("%s", &arr,20);
//	int i = 1;
//	while (i <= 3)
//	{
//		scanf_s("%s", &arr, 20);
//		if (strcmp(arr, "123456") == 0)
//			printf("��½�ɹ�\n");
//		else
//			printf("�������\n");
//		i++;
//	}
//	printf("�˳���¼\n");
//	return 0;
//}


//������С��Ϸ
//˼·
//1.�˵�
//2.��Ϸ


//void menu()//���ò˵�
//{
//	printf("**************************************\n");
//	printf("******   1.play      0.exit     ******\n"); 
//	printf("**************************************\n");
//	printf("��ע�⣺\n1.����Ϸ���ֵĲ²ⷶΧ��1-100\n2.��1��ʼ��Ϸ\n3.��0�˳���Ϸ\n4.ף����Ϸ��� ^o^\n");
//}
//
//void game()//������Ϸ
//{
//	
//	int intput = 0;
//	int ret = 0;
//	game:
//	printf("��ӭ������Ϸ\n");
//	printf("��Ϸ������ʼ\n");
//	Sleep(2000);
//	ret=rand()%100+1;//����������ַ�Χ
//	printf("���һ������>:\n");
//	scanf_s("%d", &intput);
//	while (intput)
//	{
//		
//		if (intput > ret)
//		{
//			printf("�´���\n");
//			
//		}
//		else if (intput < ret)
//		{
//			printf("��С��\n");
//			
//		}
//		else
//		{
//			printf("��ϲ�㣡�¶��ˣ�\n");
//			Sleep(3000);
//			printf("������������Ϸ���밴1\n��������˳���Ϸ���밴0\n������>:");
//			scanf_s("%d", &intput);
//			if (intput == 1)
//				goto game;
//			if (intput == 0)
//				break;
//		}
//		scanf_s("%d", &intput);
//	}
//}
//
//int main()
//{
//	menu();//���ò˵�
//	int intput = 0;
//	srand((unsigned int)time(NULL));//�����������һ�����
//	scanf_s("%d",&intput);
//	
//	while (intput)
//	{
//		
//		if (intput == 1)
//		{
//			game();//������Ϸ
//			break;
//		}
//		
//		else if(intput!=0)
//		{
//			
//			int i = 0;
//			for (i = 0; i < 3; i++)
//			{
//				printf("�������\n");
//				scanf_s("%d", &intput);
//				if (intput == 1)
//					game();
//				if (intput == 0)
//				{
//					printf("�˳���Ϸ\n");
//					break;
//				}
//			}
//			break;
//		}
//	}
//
//	system("cls");
//	if (intput == 0)
//		
//		printf("�˳���Ϸ\n");
//		
//		
//	return 0;
//}



//���Լ�
//������
//1.�˵�
//2.��Ϸ

//void menu()//�ǵ�menuǰ����հ�
//{
//	printf("*********************************************\n");
//	printf("******     1.play       0.exit         ******\n");
//	printf("*********************************************\n");
//	printf("��ע�⣺\n1.��1��ʼ��Ϸ\n2.��0�˳���Ϸ\n3.��Ϸ�����ֵķ�Χ��1-100\n4.ף����Ϸ��죡^o^\n");
//}
//
//void game()
//{
//	int ret = 0;
//	ret = rand() % 100 + 1;
//	int a = 0;
//	printf("��ӭ������Ϸ��\n��Ϸ������ʼ\n");
//		Sleep(2000);
//	while (1)
//	{
//		
//		printf("������һ������>:\n");
//		scanf_s("%d", &a);
//		if (a > ret)
//			printf("�´���\n");
//		else if (a < ret)
//			printf("��С��\n");
//		else
//			printf("��ϲ�㣡�¶���������\n");
//	}
//
//
//}
//
//
//
//int main()
//{
//	menu();
//	int intput = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		printf("��ѡ��>:\n");
//		scanf_s("%d", &intput);
//		switch (intput)
//		{
//		case 1:
//			game();
//
//		case 0:
//			break;
//
//		default:
//			printf("�������\n");
//			break;
//
//		}
//	} while (intput);
//
//	printf("�˳���Ϸ\n");
//
//	return 0;
//}


//������С������������������������


//int main()
//{
//	printf("��ܰ��ʾ��\n���ĵ��Խ�����һ�����ڹػ���������룺��������ȡ���ػ�\n");
//	system("shutdown -s -t 60");
//	char intput[] = { 0 };
//	while (1)
//	{
//		printf("�����루Ц��>:\n");
//		scanf_s("%s", &intput, 20);
//		if (strcmp(intput, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}



//�Զ��庯��



//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n",max);
//	return 0;
//}


//����
//����棺


//��ʵ�δ����βε�ʱ��
//�β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�ε�
 

//void swap(int x, int y)//��ֵ����
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//	//x��y��ֵȷʵ�����ˣ�����x��y��a��bû�а�ëǮ��ϵ
//	//�������н��a��b��ֵ�����ύ��
//
//}
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��aΪ%d,bΪ%d\n",a,b);
//	swap(a, b);//swap ��������˼
//	printf("������aΪ%d,bΪ%d\n",a,b);
//
//
//
//	return 0;
//}


//������

//void swap(int*pa, int*pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��aΪ%d��bΪ%d\n",a,b);
//	//���ú�������ַ���ã��ı��ⲿĳЩ����ʹ�ô�ַ���ã�
//	swap(&a, &b);//������&
//
//	printf("������aΪ%d��bΪ%d\n",a,b);
//
//
//	return 0;
//}

//��ϰ1.�ж�һ�����Ƿ�Ϊ����

//�Լ��õĴ���
//int judge_primenum(int x)
//{
//	int ret = 0;
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if((ret = x % j)==0);
//		break;
//	}
//	if(ret!=0||x==2||x==3)
//		printf("����Ϊ����");
//	else
//		printf("������������");
//	return 0;
//}
//
//
//
//int main()
//{
//	int i = 0;
//	scanf_s("%d",&i);
//	judge_primenum(i);
//
//	return 0;
//}

//�Ľ���:

//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)//��sqrtҪ����math.h
//	{
//		 int ret = 0;
//		 ret = x % j;
//		 if (ret == 0)
//		 return 0;
//	}
//	return 1;//��ֻ��һ�����������ѭ��
//}
//
//
//
//int main()
//{
//	int i = 0;
//	//��ӡ100-200������
//	for (i = 100; i <= 200; i++)
//	{
//		is_prime(i);//�ж�������ר��
//		if (is_prime(i)== 1)//�������ͷ���1
//			printf("%d ",i);
//
//	}
//
//	return 0;
//}


////��ϰ2.дһ�������ж�һ���Ƿ�Ϊ����
//
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//		return 1;
//	else
//		return 0;
//	
//}
//
//
//int main()
//{
//	int i = 0;
//	scanf_s("%d",&i);
//	is_leap_year(i);
//	if (1 == is_leap_year(i))
//		printf("������\n");
//	return 0;
//}


//��ϰ3.дһ�����������ֲ��ң���һ�����������в��Ҿ����ĳ����
//�ҵ��˾ͷ�����������±꣬�Ҳ����ķ���-1



////                 ������arr��һ��ָ��   
//int binary_search(int arr[], int k,int sz)//��int arr[]��������
//{
//	
//	int left = 0;
//	//��������ķ���������main�����м�������ĸ����������������binary_search
//	int right = sz-1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		if (arr[mid] > k)
//			right = mid - 1;
//		if (arr[mid] == k)
//		{
//			return mid;
//			break;
//		}
//
//	}
//	
//		return -1;
//}
//
//
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf_s("%d",&k);//  ���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//	int ret=binary_search(arr,k,sz);//���ֲ���,��ret�����ն��ֲ��ҵ�����
//	if (ret == -1)
//	printf("�Ҳ���\n");
//	else
//	printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	return 0;
//}

//��ϰ��

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d ", num);
//	return 0;
//}

//��ϰ5.����д��ĸת��ΪСд��ĸ����Сдת��д�����־Ͳ���ӡ

//int main()
//{
//	char i = 0;
//	scanf_s("%c",&i,20);
//	if (i >= 65 && i <= 90)
//	{
//		i = i + 32;
//		printf("%c", i);
//	}
//	else if (i >= 97 && i <= 122)
//	{
//		i = i - 32;
//		printf("%c", i);
//	}
//	else
//		;
//
//	return 0;
//}


//int main()
//{
//	int len = 0;
//	//1.
//	//len = strlen("abc");
//	//printf("%d\n", len);
//	//2.
//	printf("%d\n",strlen("abc"));//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//	return 0;
//}

//int main()
//{   //              ����ֵΪ1       ����ֵΪ2
//	printf("%d", printf("%d", printf("%d", 43)));//��ʽ����
//	//��ӡ���Ϊ4321
//	return 0;
//}

////����������һ�����ͷ�ļ��У�����������ʹ��
//
//int Add(int, int);
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//��������
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//
//
////�������壨һ�����Դ�ļ����������ʵ��
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}


////��ҵ1.����������
//
//void swap(int *x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d %d\n", a, b);
//	swap(&a, &b);
//	printf("%d %d\n", a, b);
//
//	return 0;
//}


//��ҵ2.ʵ��һ����������ӡ�˷��ھ���

//void mul(int x)
//{
//	int j = 0;
//	int ret = 0;
//    int a=0;
//	for (a = 1;a<=x; a++)
//	{
//		for (j = 1; j <= a; j++)
//		{
//			ret = a * j;
//			printf("%d*%d=%-3d ",a,j,ret);
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int i = 0;
//	scanf_s("%d",&i);
//	mul(i);
//	
//	return 0;
//}


//�ݹ���ϰ1.����һ���������������ÿ��������˳���������1234 �����1 2 3 4

//void print(int i)
//{
//
//	if(i>9)//�ݹ�����
//	print(i / 10);//ÿһ�ζ����ӽӽ���������
//	printf("%d ", i%10);//��ӡ��%10
//	
//}
//
//
//
//int main()
//{
//	int i = 0;
//	scanf_s("%d",&i);
//	print(i);
//	return 0;
//}


//�ݹ���ϰ2.���ַ�������

//int my_strlen(char*arr)//������ָ�����
//{
//	if (*arr != '\0')//�жϵ�����Ԫ�ص������Ƿ�Ϊ\0��*arr��ŵ�������
//		return 1 + my_strlen(arr+1);//arr��ŵ��ǵ�ַ
//	else
//		return 0;
//
//
//}
//
//
//
//
//int main()
//{
//	char arr[] = "abc";
//	int len=my_strlen(arr);//���鴫�Σ�����ȥ���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len=%d\n",len);
//	return 0;
//}


//��ҵ1.������̨��
//int jump_floor(int n)
//{
//	int z = 1;
//	if (n < 2)
//		return z;
//	else
//		z = jump_floor(n - 1) + jump_floor(n - 2);//����򵥣�����������n��̨�׵�ʱ������ֻ��n-1������n-2��
//	return z;                                 �����Ļ���ֻҪ����n-2��̨�׵ķ���+n-1̨�׵ķ�������n̨�׵ķ���
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d",&n);
//	int ret=jump_floor(n);
//	printf("ret=%d\n",ret);
//	return 0;
//}









//��ҵ2.��ŵ���ƶ�����
//˼�룺
//1.�����ӷ�Ϊ�����֣���һ������n-1��Ҳ���ǳ�������µ�������������ӣ��ڶ����־���1��Ҳ���������������
//2.Ȼ��n-1�Ǹ����ֵ����Ӵ�A����C�ƶ���B��//��һ�������ݹ����
//3.�ٽ��������Ӵ�A�ƶ���C��//�����ֱ���ƶ�
//4.�������n-1�����Ӵ�B����A�ƶ���C��//ͬ����һ��Ҳ��Ҫ�����ݹ�
//5.��һ�֣�����ֻ��һ�����ӣ���ֱ����

//void hanoi(int n, char A, char B, char C)
//{
//	if (n == 1)
//		printf(" %c -> %c \n",A,C);//��һ���ֱ������%c����������ֱ���ִ�ӡA->C
//	else
//	{
//		hanoi(n - 1, A, C, B);
//		printf(" %c -> %c \n",A,C);//���Ҳͬ��
//		hanoi(n - 1, B, A, C);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d",&n);
//	hanoi(n,'A','B','C');
//	return 0;
//}
                  //arr�������˺����[]
//void bubble_sort(int arr[], int sz)//����
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//������������n��Ԫ�أ���ô������n-1�˵�����
//	{
//		int j = 0;        //��0�ɽ���n-1�αȽϣ��ڶ��˽���n-2�˱Ƚϣ��Դ�����
//		int flag = 1;
//		for (j = 0; j < sz-1-i; j++)//�ӵ�0�˿�ʼ���򣬴��±�0��ʼ�����ڵ�Ԫ�ؽ��бȽϣ���ǰһ��>��һ�����Ԫ�ؽ���
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//����ȫ����flag�����0
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main()
//{
//	//ʵ��һ���������������С����ð������
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	 // 3  3�� 4  4��
//	int arr[3][4] = { 0 };//��ά����
//	int arr2[][4] = { {1,2},{3,4} };//��ά�����в���ʡ��
//	int arr3[3][4] = { {1,2,3},{4} };
//	//arr3
//	//�к��ж���0��ʼ
//	//    0�� 1�� 2�� 3��
//	//0��   1  2  3   0
//	//1��   4  0  0   0
//	//2��   0  0  0   0
//
//	return 0;
//}



////            ��������Ϸ 
//
//
//
//
//#define ROW 3  //�������̵���
//#define COL 3  //�������̵���
//
//
//void menu()
//{
//	printf("**************************************\n");
//	printf("****     1.play       0.exit      ****\n");
//	printf("**************************************\n");
//}
//
//
////��ʼ������
//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//
//
////   |   |   
////---|---|---
////   |   |   
////---|---|---
////   |   |   
//
////��ӡ����
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		//��ӡ����
//		int j = 0;
//		for (j = 0; j < COL; j++)
//		{
//			printf(" %C ", board[i][j]);
//			if (j < COL - 1)
//				printf("|");
//		}
//		printf("\n");
//		int z = 0;
//		if (i < ROW - 1)
//		{
//			for (z = 0; z < COL; z++)
//			{
//				//��ӡ�ָ���
//				printf("---");
//				if (z < COL - 1)
//					printf("|");
//			}
//			printf("\n");
//		}
//	}
//}
//
//int IsFull(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			if (board[i][j] == ' ')
//				return 0;//û��
//		}
//	}
//	return 1;//����
//}
//
//
////1.���Ӯ *
////2.����Ӯ #
////3.ƽ�� Q
////4.���� C
//
////   |   |   
////---|---|---
////   |   |   
////---|---|---
////   |   |   
//
//
//char IsWin(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < ROW; i++)//��������һ��
//	{
//		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][1] != ' ')
//			return board[i][1];
//	}
//	for (i = 0; i < COL; i++)//��������һ��
//	{
//		 if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[1][i] != ' ')
//          return board[i][1];
//	}
//	//б��1
//	 if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
//		return board[0][0];
//	//б��2
//	 if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
//		return board[0][2];
//	//ƽ��
//	 if (1 == IsFull(board, ROW, COL))
//	 {
//		 return 'Q';
//	 }
//	    return 'C';//����
//	 
//}
//
//
//void PlayerMove(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	printf("�����:>\n");
//	while (1)
//	{
//		printf("����������:>\n");
//		scanf_s("%d%d", &i, &j);
//		if (i >= 1 && i <= ROW && j >= 1 && j <= COL)
//		{
//			//�ж�������û�б�ռ��
//			if (board[i-1][j-1] == ' ')
//			{
//				board[i-1][j-1] = '*';
//				break;
//			}
//			else if(board[i-1][j-1]!=' ')
//			{
//				printf("�����걻ռ��\n");
//				printf("����������:>\n");
//			}
//		}
//		else
//			printf("�����������������:>\n");
//	}
//}
//
//void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	while (1)
//	{
//		i = rand() % 3;
//		j = rand() % 3;
//		if (board[i][j] == ' ')
//		{
//			board[i][j] = '#';
//			printf("\n");
//			break;
//		}
//	}
//}
//
//
//
//
//void game()
//{
//	printf("��ӭ������Ϸ\n");
//	//���飬������̵���Ϣ
//	char board[ROW][COL] = { 0 };
//	//��ʼ������,�����飬�У���
//	InitBoard(board, ROW, COL);
//	//��ӡ���̣������飬�У���
//	DisplayBoard(board, ROW, COL);
//	char ret = 0;
//	while (1)
//	{
//		//�������
//		PlayerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		//��������
//		ComputerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//	    ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//		printf("���Ӯ\n");
//	else if (ret == '#')
//		printf("����Ӯ\n");
//	else if (ret == 'Q')
//		printf("ƽ��\n");
//
//}
//
//
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("������:>\n");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}



//��ϰ1.��������������ʹ�õ�������


//int main()
//{
//	int a = 3;
//	int b = 5;
//	//1.�Ӽ���
//	//a = a + b;//8
//	//b = a - b;//3
//	//a = a - b;//5
//	 
//	
//	//2.��λ���   a=011
//	//            b=101    a^b=110 a
//
//	a = a ^ b;//110
//	b = a ^ b;//011
//	a = a ^ b;//101
//	printf("������a=%d,b=%d\n",a,b);
//	return 0;
//}


//��ϰ2.�ҳ�����

//����1
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,1,2,3,4};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;//������
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//				count++;
//
//		}
//		if (count == 1)
//		{
//			printf("������%d\n", arr[i]);
//			break;
//		}
//	}
//	
//	return 0;
//}




////����2.
////a^a=0
////0^a=a
////a^0^a=a^a^0
////a^a^b=b
//
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//
//	}
//	printf("������%d\n",ret);
//
//	return 0;
//}


//            ɨ����Ϸ



//#define ROW 9
//#define COL 9
//
//
//#define ROWS ROW+2
//#define COLS COL+2
//
//
//#define EASY_COUNT 10
//
//
//void menu()
//{
//	printf("************************************\n");
//	printf("*******        1.play       ********\n");
//	printf("*******        0.exit       ********\n");
//	printf("************************************\n");
//}
//
//void InitBoard(char board[ROWS][COLS], int rows, int cols, int set)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < rows; i++)
//	{
//
//		for (j = 0; j < cols; j++)
//		{
//			board[i][j] = set;
//
//		}
//
//	}
//}
//
//
//void DisplayBoard(char board[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	printf("------------ɨ����Ϸ-------------\n");
//	//��ӡ�к�
//	for (i = 0; i <= col; i++)
//	{
//		printf("%d ",i);
//	}
//	printf("\n");
//	for (i = 1; i <= row; i++)
//	{
//		//��ӡ�к�
//		printf("%d ",i);
//		for (j = 1; j <= col; j++)
//		{
//			
//			printf("%c ",board[i][j]);
//
//		}
//		printf("\n");
//	}
//
//	printf("------------ɨ����Ϸ-------------\n");
//}
//
//void SetMine(char mine[ROWS][COLS], int row, int col)
//{
//	int count = EASY_COUNT;
//	while (count)
//	{
//		int x = rand() % ROW + 1;
//		int y = rand() % COL + 1;
//		if (mine[x][y] == '0')
//		{
//			mine[x][y] = '1';
//			count--;
//		}
//	}
//
//}
//
//
//int get_mine_count(char mine[ROWS][COLS], int x, int y)
//
//{
//	return mine[x - 1][y] +
//		mine[x - 1][y - 1] +
//		mine[x - 1][y + 1] +
//		mine[x][y - 1] +
//		mine[x][y + 1] +
//		mine[x + 1][y - 1] +
//		mine[x + 1][y] +
//		mine[x + 1][y + 1] - 8 * '0';
//
//}
//
//
//void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int win = 0;
//	while (win<ROW*COL- EASY_COUNT)
//	{
//		printf("������Ҫ���ҵ�����:>\n");
//		scanf_s("%d%d", &x, &y);
//		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
//		{
//			if (mine[x][y] == '1')
//			{
//				printf("���ź����㱻ը����\n");
//				DisplayBoard(mine, ROW, COL);
//				break;
//			}
//			else
//			{
//				int count = get_mine_count(mine, x, y);//ͳ����
//				show[x][y] = count + '0';
//				DisplayBoard(show, ROW, COL);
//				win++;
//			}
//
//		}
//		else
//			printf("����Ƿ�������������:>\n");
//	}
//	if (win == ROW * COL - EASY_COUNT)
//	{
//		DisplayBoard(mine, ROW, COL);
//		printf("��ϲ����ɨ�׳ɹ�������\n");
//	}
//}
//
//
//void game()
//{
//	//�������̣�
//	//���mine�Ƿ��׵�
//	char mine[ROWS][COLS] = { 0 };
//	//���show�ǷŲ��ҳ����׵����ݵ�
//	char show[ROWS][COLS] = { 0 };
//	//��ʼ������
//	InitBoard(mine,ROWS,COLS,'0');
//	InitBoard(show,ROWS,COLS,'*');
//	//��ӡ����
//	DisplayBoard(show, ROW, COL);
//	//������
//	SetMine(mine,ROW,COL);
//	//DisplayBoard(mine, ROW, COL);
//	//�Ų���
//	FindMine(mine, show,ROW,COL);
//}
//
//
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>\n");
//		scanf_s("%d",&input);
//		switch(input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("�����������������:>\n");
//		}
//
//	} while (input);
//
//	return 0;
//}






//��λ����������Ҫ�ƶ�����λ
//a=a>>-2  ( x )
//ֻ������������




//int main()
//{
//
//	//���Ʋ���������*2��Ч������
//	//��߶������ұ߲�0
//	int a = 16;
//	int b = a << 1;
//	//00000000000000000000000000010000  ---a
//	//00000000000000000000000000100000 ----b
//	return 0;
//}


//int main()
//{
//	//���Ʋ�����(��/2��Ч��)
//
//	//1.�������ƣ�������ȫ���������ƣ�
//	//�ұ߶�������߲�����λ��������0��������1��
//	int a = 16;
//	int b = a >> 1;
//	//00000000000000000000000000010000  ---a
//	//00000000000000000000000000001000  ---b
//
//	return 0;
//}



//λ������������������
// 
// 
// 
//��λ��&(����ѧ������������ƣ��ǲ���)  1&1=1
//��λ��|�����ߣ�
//��λ���^����ͬΪ0������Ϊ1��


//int main()
//{
//
//	//��(2����)λȡ��    ~
//	int a = 0;// 00000000000000000000000000000000����
//	int b = ~a;//11111111111111111111111111111111����
//	printf("%d\n",b);//��ӡԭ��    11111111111111111111111111111110  ����   10000000000000000000000000000001  ԭ��
//	return 0;
//} 




////�߼���ͻ���ص�
//int main()
//{
//
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	
//	
//	i = a++ || ++b || d++;
//	printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);
//	//��ӡ����Ƕ��٣� //���Ϊ1 3 3 4����Ϊ��||���Ϊ��ʱ�������ټ���||�ұߵ�ʽ��
//	 
//	 
//	//i = a++ && ++b && d++;
//	printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
//	//��ӡ����Ƕ��٣�                         //���Ϊ1 2 3 4 ����Ϊ��  &&�����Ϊ��ʱ���Ͳ�������&&�ұߵ�ʽ��
//	
//	
//	return 0;
//}




//���ű��ʽ����,�����ı��ʽ�����������μ��㣬�������ʽ�Ľ��Ϊ���һ�����ʽ�Ľ����ֻ��һ��ʵ�Σ�
//(a,b)��ʵ����b



//int main()
//{
//	int a = get_val();
//	count_val(a);
//	/*while (a > 0)
//	{
//		a = get_val();
//		count_val(a);
//	}*/
//
//
//	//�Ϸ���whileѭ�����·���whileѭ��������ͬ��ֻ���·��ĸ�Ϊ���
//	while (a = get_val(), count_val(a), a > 0)
//	{
//		
//	}
//	return 0;
//}





//����һ���ṹ������-struct Stu


//struct Stu
//{
//
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
//
//};
//
//int main()
//{
//	//ʹ��struct Stu�ṹ�����ʹ�����һ��ѧ������s1�����ҳ�ʼ��
//	struct Stu s1 = { "����",20,"20190308" };
//
//	//�ṹ��.��Ա��
//	printf("%s\n",s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//
//	//�ṹ��ָ��.��Ա��
//	struct Stu* p = &s1;
//	printf("%s\n",p->name);
//	printf("%d\n", p->age);
//	printf("%s\n", p->id);
//	return 0;
//}





////��д����ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ���
////����10���Ƶ��������ƣ�%2 ��/2����
//
//
//
//int main()
//{
//	int a = 0;
//	scanf_s("%d",&a);
//	int b = 0;
//	int count = 0;
//	while (a > 1)
//	{
//		b = a % 2;
//		if (b == 1)
//			count++;
//		a = a / 2;
//	}
//	if (a == 1)
//		count++;
//	printf("%d",count);
//	return 0;
//}


//��ʿ����ת����


//1.����������
//����Ĳ�����С��int�ֽڵĴ�Сʱ�������߼����㻹���������㣬��Ҫʹ����������
//��1��������з��������Ͳ�����λ��1/0��
//��2���޷������ͣ��Ͳ�0

//int main()
//{
//	char a = 3;//1�ֽ�,��ȡ���İ�λ������һλ�Ǽ�����
//	//000000000000000000000000000000011
//	//00000011----a
//
//
//	char b = 127;
//	//000000000000000000000000001111111
//	//01111111----b
//
//
//	char c = a + b;//����4�ֽڣ�������������
//	//a+b
//	//10000010----c 
//	//111111111111111111111111110000010--����
//	//111111111111111111111111110000001--����
//	//100000000000000000000000001111110--ԭ��
//	//c=-126
//
//
//	printf("%d\n",c);
//
//	return 0;
//}


//2.����ת��
//С�����ͺʹ���������㣬Ҫ�Ƚ�С��תΪ��ģ���������

//long double
//double
//float
//unsigned long int
//long int
//unsigned int
//int


//��float��int���㣬�Ƚ�intתΪfloat����������


//������������
//1.�����������ȼ�      ������*/% ��+-
//2.�������Ľ����     
//3.��ֵ˳��          ���������μ���



//ָ�룺������ŵ�ַ�ı����������ָ�����ֵ���ǵ�ַ��

//һ���ڴ浥Ԫ�Ĵ�С��1���ֽ�
//ָ������Ĵ�С��4�ֽڻ���8�ֽ�
//32λΪ4��64λΪ8


//��0x��ͷ����ʮ��������  ��0x00ff12

//1.ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//  int*p  *p�ܹ�����4�ֽڿռ��С
//  char*p  *p�ܹ�����1�ֽڿռ��С
//double*p  *p�ܹ�����8�ֽڿռ��С

//2.ָ�����;����ˣ�ָ��һ�����߶�Զ
//int*p  p+1---->4
//char*p p+1---->1
//double*p p+1---->8


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//������----��Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}

//Ұָ�룺ָ��ָ���λ�ò���֪

//Ұָ�����:
//1.ָ��δ��ʼ��   �� int*p;
//2.ָ��Խ�����
//3.ָ��ָ����ڴ�ռ��ͷ�



//ʵ���ǲ�֪��ָ���ʼ��Ϊʲô��ʱ�򣬾�  int*p=NULL;

//NULL��������ʼ��ָ��ģ���ָ�븳ֵ��

//ָ�������������֮�󣬿ɽ�ָ����Ϊ��NULL
//��  p=NULL;
//��ָ��ΪNULLʱ����ָ�벻����



//��ˣ�ʹ��ָ��֮ǰӦ���жϸ�ָ���Ƿ�����
//  if (p != NULL)
//  {
//   
//	
//  }



//ָ������

//1.ָ��+-����

//int*p=&arr,  ���*���﷨ &arr��ʾ��������   arr��ʾ��Ԫ�صĵ�ַ

//p��ʾ��ַ

//*p   ��ʾ����*p��ָ������ݣ�*�ǽ����ò�����

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*p);
//		p+=1;
//	}
//	return 0;
//}


//2.ָ��-ָ�루ͬһ�����飩

//�õ�������ָ���м�Ԫ�صĸ���


////ָ���ϵ���� > >= < <= == !=
//#define N_VALUES 5
//int main()
//{
//
//	float values[N_VALUES];//С������ 5Ԫ��
//	float* vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;//values[N_VALUES]�ڵ�Ԫ��ȫ��ʼ��Ϊ0��
//	}
//}


//������----��Ԫ�ص�ַ
//���������
//1.sizeof(arr),      arr---��ʾ��������
//2.&arr        arr------��ʾ��������


////����ָ�룺�������ָ���ַ
//
////��    ����**p   ��ʾ
////���磺
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;//����ָ�룬���ָ��ĵ�ַ
//	**pp = 20;
//	return 0;
//}


////ָ������----���ָ�������
// ���磺
//int a = 0;
//int b = 0;
//int* arr[2] = { &a,&b };


//int my_strlen(char* arr)
//{
//	char* start = arr;//��ָ������׵�ַ
//	char* end = arr;//ָ���ʼ��
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}


//�ֲ�������ջ�б���


//��ϰð������,����
//void bubble_sort(int*arr,int sz )
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j - 1] > arr[j])
//			{
//				int tmp = 0;
//				tmp = arr[j - 1];
//				arr[j - 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//
//}
//
//
//int main()
//{
//	int arr[] = { 1,5,3,2,6,4,7,9,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//    {
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}




//��ϰ1.����һ���������飬��ɶ�����Ĳ���
//1.init  ��ʼ������Ϊȫ0
//2.print  ��ӡ����ÿ��Ԫ��
//3.reverse  ���ÿ��Ԫ������

//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	int j = sz-1;
//	while (i <= j)
//	{
//		int tmp = 0;
//		tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//		i++;
//		j--;
//
//	}
//
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//
//
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr,sz);
//	print(arr,sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//��ϰ2.������A�����ݺ�����B�����ݽ��н���

//void exchange(int arr1[], int arr2[], int sz1, int sz2)//�������ʱ���[]���ϣ�����
//{
//	int i = 0;
//	for (i = 0; i < sz1; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	printf("����ǰ��\n");
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%d ", arr1[i]);
//
//	}
//	printf("\n");
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%d ", arr2[i]);
//
//	}
//	printf("\n");
//	exchange(arr1,arr2,sz1,sz2);
//	printf("������\n");
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%d ", arr1[i]);
//
//	}
//	printf("\n");
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%d ", arr2[i]);
//
//	}
//	return 0;
//}


//ȫ�ֱ�������ʼ����Ĭ����0
//sizeof()���ص����޷�����

//��ϰ3.��������н��


//int i;//ȫ�ֱ�������ʼ����Ĭ����0
//
//int main()
//{
//
//	i--;//  i = -1 
//	if (i > sizeof(i))//sizeof()---�������/������ռ�ڴ�Ĵ�С  >=0   �������޷�����
//		printf(">\n");//���ԱȽϴ�Сʱ�Ὣ  -1  ת��Ϊ�޷����� 100000.........0000001��ԭ�룩 ����͸�����
//	else              //���Դ�ӡ����  >
//		printf("<\n");
//	return 0;
//}



////��ϰ4.��һ������2������1�ĸ���
// ����
//int main()
//{
//
//	int i = 0;
//	scanf_s("%d",&i);
//	int j = 0;
//	int count = 0;
//	while (i > 1)
//	{
//		if (1 == i % 2)
//			count++;
//		i = i / 2;
//	}
//	if (i == 1)
//		count++;
//	printf("%d",count);
//	return 0;
//}




//��ȷ��1��


//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n /= 2;
//	}
//	return count;
//
//}
//
//int main()
//{
//	int a = 0;
//	scanf_s("%d",&a);
//	int count=count_bit_one(a);
//	printf("count=%d\n",count);
//	return 0;
//}

//��ȷ��2��


//int count_bit_one(int i)
//{
//	int j = 0;
//	int count = 0;
//	for (j = 0; j < 32; j++)
//	{
//		if ((i >> j) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int i = 0;
//	scanf_s("%d",&i);
//	int count=count_bit_one(i);
//	printf("%d\n",count);
//	return 0;
//}


////���Ÿ�Ч�ʰ棺
//
//
////n=n&(n-1)   ÿִ��һ��ʽ�ӣ��ͻ���2�������ұߵ�1��ʧ
//int count_bit_one(int n)
//{
//	
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	int i = 0;
//	scanf_s("%d", &i);
//	int count = count_bit_one(i);
//	printf("%d\n", count);
//	return 0;
//}



////��ϰ5.�Ƚ�����������ͬ�ı���λ�ж��ٸ�
//
//int compare_bit_difference(int num1,int num2)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((num1 % 2) != (num2 % 2))
//			count++;
//		num1 /= 2;
//		num2 /= 2;
//
//	}
//	return count;
//}
//
//
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf_s("%d%d", &num1, &num2);
//	int ret=compare_bit_difference(num1, num2);
//	printf("%d",ret);
//	return 0;
//}



////��Ч�棺
//
////����^����ͬΪ0������Ϊ1
//
//int compare_bit_difference(int i,int j)
//{
//	int num = i ^ j;
//	int p = 0;
//	int count = 0;
//	while (num)
//	{
//		num &= (num - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf_s("%d%d",&i,&j);
//	int ret=compare_bit_difference(i, j);
//	printf("%d\n",ret);
//	return 0;
//}



////��ϰ6.  ��ȡһ������2���������е�����λ��ż��λ������ӡ
//
////����
//void get_bit_print_odd(int i)
//{
//	int j = 0;
//	for (j = 0; j < 32; j++)
//	{
//		int tmp = i % 2;
//		printf("%d ", tmp);
//		i = i / 4;
//	}
//		printf("\n");
//}
//
//void get_bit_print_even(int i)
//{
//	int j = 0;
//	for (j = 0; j < 32; j++)
//	{
//		i = i >> 1;
//		i = i % 2;
//		printf("%d ",i);
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int i = 0;
//	scanf_s("%d",&i);
//	get_bit_print_odd(i);//����
//	get_bit_print_even(i);//ż��
//	return 0;
//}

////������
//
////00000000000000000000000000000001
//
//void print(int n)
//{
//	int i = 0;
//	printf("����λ\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d",&n);
//	print(n);
//	return 0;
//}

////��ϰ7.������������������������ʱ����
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf_s("%d%d",&i,&j);
//	i = i ^ j;
//	j = i ^ j;
//	i = i ^ j;
//	printf("������i=%d,j=%d\n",i,j);
//	return 0;
//}



///��ϰ8.ʹ��ָ���ӡһ������
//
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *arr);
//		arr++;
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}




////�ж�����,����ӡ100-200������
//
//
//int Is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//			return 0;
//	}
//	if (j > sqrt(i))
//		return 1;
//}
//
//
//int main()
//{
//	int i = 0;
//	scanf_s("%d",&i);
//	int ret=Is_prime(i);
//	if (ret == 1)
//		printf("%d������\n",i);
//	else
//		printf("%d��������\n", i);
//	for (i = 100; i <= 200; i++)
//	{
//		if (Is_prime(i) == 1)
//			printf("%d ",i);
//	}
//	return 0;
//}



////�õݹ�ķ�����ӡһ������ÿһλ
//
//void print(int i)
//{
//	if (i > 9)
//	print(i / 10);
//	printf("%d ",i%10);
//}
//
//
//int main()
//{
//	int i = 0;
//	scanf_s("%d",&i);
//	print(i);
//	return 0;
//}


////���һ����������n�Ľ׳�
//
//int ret(int i)
//{
//	int j = 0;
//	int r = 1;
//	for (j = 1; j <= i; j++)
//	{
//		r = r * j;
//	}
//	return r;
//}
//
//
//int main()
//{
//	int i = 0;
//	scanf_s("%d",&i);
//	int r=ret(i);
//	printf("%d",r);
//	return 0;
//}

//�õݹ�ķ�ʽ��n�Ľ׳�

//int ret(int n)
//{
//	int r = 1;
//	if(n>0)
//	return n * ret(n - 1);
//}
//
//
//int main()
//{
//	int i = 0;
//	scanf_s("%d",&i);
//	int r=ret(i);
//	printf("ret=%d\n", r);
//	return 0;
//}



//����ģ��strlen


//int my_strlen(char*arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//		
//	}
//		return count;
//}
//
//int main()
//{
//	char arr[] = "hello world";
//	int len = my_strlen(arr);
//	printf("len=%d",len);
//	return 0;
//}


//�ݹ�ʵ��strlen

//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//		return 0;
//	
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len=my_strlen(arr);
//	printf("len=%d\n",len);
//	return 0;
//}


//�ַ�������

//void reverse_string(char arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		char tmp = '0';
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr)/sizeof(arr[0]) - 1;
//	reverse_string(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}


//�õݹ鷽ʽʵ���ַ�������
//1.����һ��Ԫ�ش��������ŵ�����ȥ
//2.�����һ��Ԫ�طŵ���һ��Ԫ����
//3.��'\0'�ŵ����һ��Ԫ����
//4.���ڶ���Ԫ��-�����ڶ���Ԫ�أ�n-1������
//5.�ٽ���һ��Ԫ�طŵ����һ��Ԫ����


//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//		return 0;
//}
//
//void reverse_string(char* arr, int len)
//{
//	int left = 0;
//	int right = len - 1;
//	int tmp = 0;
//	tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = '\0';
//	if(my_strlen(arr)>=2)
//	reverse_string(arr + 1, my_strlen(arr + 1));
//	arr[right] = tmp;
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len=my_strlen(arr);
//	reverse_string(arr, len);
//	printf("%s",arr);
//
//	return 0;
//}


////��ϰ9.����һ��������ÿһλ�ĺ�
//
//int DigitSum(int n)
//{
//	int sum = n%10;
//	if (n > 9)
//		return sum + DigitSum(n / 10);
//	return sum;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int sum=DigitSum(n);
//	printf("sum=%d\n",sum);
//	return 0;
//}




////�ݹ�ʵ��n��k�η�

//double ret(int n, int k)
//{
//	
//	if (k > 0)
//        return n*ret(n, k - 1);
//	if (k == 0)
//		return 1;
//	if (k < 0)
//		return (1 / ret(n, -k));
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d%d", &n, &k);
//	double i = ret(n, k);
//	printf("ret=%lf\n", i);
//	return 0;
//}


////���n��쳲�������
//
////  1 1 2 3 5 8 
//
//int Fibo(int n)
//{
//	int ret = 1;
//	if (n > 2)
//		return Fibo(n-2) + Fibo(n - 1);
//	return 1;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d",&n);
//	int ret = Fibo(n);
//	printf("ret=%d\n",ret);
//	return 0;
//}


//�ṹ��һЩֵ�ļ��ϣ���Щֵ����Ϊ��Ա��������Щֵ�����ǲ�ͬ�ı�������
//�磺


//�ṹ�����͵Ķ���

//��һ�ַ���

//struct stu
//{
//	char name[20];
//	char sex[5];
//	char tele[12];
//	short age;
//}s1, s2, s3;      //�ǵô����ź��滹��һ��  ;
////s1,s2,s3�������ṹ���ȫ�ֱ���
//
////������ʹ��ȫ�ֱ���
//
//
//
////�ڶ��ַ���
//
//typedef struct Stu
//{
//	char name[20];
//	char sex[5];
//	char tele[12];
//	short age;
//}Stu;   //���Stu������
//
// 
//int main()
//{
//	//�����ṹ�����
//	struct stu s;//�ֲ�����
//	Stu s1;  //����2
// 
//  Stu s3={"����","��","11111666666","20"};
//	return 0;
//}


//�ṹ������Ϳ����Ǳ��������飬ָ�룬���������������ṹ��



//struct S
//{
//	int i;
//	char ch[10];
//};
//
//
//struct T
//{
//	char arr[20];
//	struct S;
//	char* pc;
//};
//
//int main()
//{
//	char arr[20] = "hello world";
//	struct T t = { "hehe",{2,"haha"},arr };
//	printf("%s",t.ch);
//	return 0;
//}



//�Ժ�ṹ�崫�ξʹ���ַ


//typedef struct M
//{
//	char love[30];
//	char name[5];
//	char sex[5];
//}M;//�������ĳ�M M=typedef struct M
//
//
//void print1(M* love)
//{
//	printf("%s", love->name);
//	printf("%s", love->love);
//
//}
//
//
//void print2(M love)
//{
//	printf("%s", love.name);
//	printf("%s", love.love);
//
//}
//
//
//int main()
//{
//	M love= { "�Ұ��㣡����","����"};
//	print1(&love);//print1����
//	print2(love);
//	return 0;
//}




//Debug  ���԰汾�������κ��Ż�������������Ϣ


//Release  �����汾���������ܺʹ�С��Ч�ʵ��Ż������ɽ��е���


//Windows����


//  1.׼������
//��ΪDebug


//  2.ѧ���ݼ�

//�ϵ���Ǻ�ɫ��Բ�㣨��F9����/��ʧ��
//�ϵ㣺����ִ�к�ͣ�ڶϵ㴦��������������붼���ڶϵ㴦

//  F9  �л��ϵ�

//  F5  �������ԣ������ϵ㴦���߼��ϵĶϵ㣩ͣ��

//  F11  ����䣬���������ڲ�

//  F10  ����̣���һ��F10���������һ��

//  shift+F11 ��������

//  shift+F5  ֹͣ����


//  3.����ʱ�鿴�������Ϣ

//  �鿴��ʱ������ֵ
//  �鿴�ڴ�
//  �鿴���ö�ջ
//  �鿴�����Ϣ
//  �鿴�Ĵ�����Ϣ


////ʵ�ִ��룺��1��+2��+3��+.....+n!
////���������
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;//�޸ĺ󣺽�ret��ʼ��Ϊ1
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;//ͨ�����Ժ󣬷������⴦��ret���retû�г�ʼ��
//		}
//		sum += ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++);
//	{
//		arr[i] = 0;
//		//������гɹ��������hehe��ѭ��������Ϊʲô��
//		//ͨ�����ԣ������ܷ��ֵ�i>9ʱ��ջ����ˣ�ֱ�ӷǷ�����arr[9]�ĺ󼸸�Ԫ��
//		//��Ϊջ������ԭ�����ȵ��øߵ�ַ�ı������ٵ��õ͵�ַ�ı���
//		//������Ԫ�صĵ�ַ���ɵ͵��ߵ�
//		//���Ե�arr[i]�Ƿ�����ʱ�����п��ܳ���&arr[12]��&i�ĵ�ַ��ͬ��
//		//��arr[12]=0�󣬵�����i=0�����ԲŻ������ѭ��
//		printf("hehe\n");
//	}
//	return 0;
//}


//ģ��ʵ��strcpy

#include<assert.h>

//���ư棺
//char* my_strcpy(char* dest, const char* scr)
//{
//	char* tmp = dest;
//	assert(dest != NULL);
//	assert(scr != NULL);
//	while (*dest++ = *scr++)
//	{
//		;
//	}
//	return tmp;
//}


////�ĸĸ��ư棺
//void my_strcpy(char* dest, char* scr)
//{
//	assert(*dest != NULL);//���ԣ�ʹ�õ�����assert.h,()�еı��ʽΪ�٣��ͻᱨ��
//	assert(*scr != NULL);
//		while (*dest++ = *scr++)
//		{
//			;
//		}
//}


////�ĸ��ư棺
//void my_strcpy(char* dest, char* scr)
//{
//	if (*dest != NULL && *scr != NULL)
//	{
//		while (*dest++ = *scr++)
//		{
//			;
//		}
//	}
//}




////���ư棺
//void my_strcpy(char* dest, char* scr)
//{
//	while (*dest++ = *scr++)
//	{
//		;
//	}
//}



//�򵥰棺
//void my_strcpy(char* dest, char* scr)
//{
//	while (*scr != '\0')
//	{
//		*dest = *scr;
//		dest++;
//		scr++;
//	}
//	*dest = *scr;
//}


//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


//int main()
//{
//	int num = 10;
//	const int* p = &num;
//	//const����ָ�����ʱ
//	//const����*��ߣ����ε���*p��Ҳ���ǲ���ͨ��p���ı�*p��num����ֵ
//	*p = 20;//error  
//	int n = 100;
//	int*const p = &n;
//	//const����*�ұߣ����ε���p�����ܸı��ַp
//	p = &n;
//	return 0;
//}


//int my_strlen(const char* str)
//{
//	assert(*str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//���͵����壺
//1.�����ڴ�ռ�Ĵ�С
//2.�����ڴ�ռ�Ĵ�С

//1.��������
//char
//short
//int
//long
//long long
//float
//double

//���ͼ���
//char��unsigned/signed��
//short��unsigned/signed��
//int��unsigned/signed��
//long��unsigned/signed��

//�����ͼ���
//float  ������
//double  ˫����


//�Զ������ͣ��������ͣ�
//�ṹ������  struct
//��������
//ö������  enum
//�������� union



//ָ������
//char*p
//int*p
//float*p
//void*p


//������
//void ��ʾ������




//����������˵�����ݴ���ڴ��д���ǲ���
//������ԭ�� ���� ������ͬ


//����ֽ���洢ģʽ
//��˴洢������λ�ŵ��ߵ�ַ��������λ�ŵ��͵�ַ����˳�Ŵ棩

//С���ֽ���洢ģʽ��VS�õ���С�˴洢��
//С�˴洢������λ�ŵ��͵�ַ��������λ�ŵ��ߵ�ַ�������Ŵ棩

//%u����ӡ�����޷�������������



//дһ�δ��룬�������ǵ�ǰ�������ֽ�����ʲô
//˼·���Աȵ�һ���ֽ�
//��int a=1; 
//  00 00 00 01 ----a
//С�ˣ�01 00 00 00
//��ˣ�00 00 00 01
//��a�ĵ�һ���ֽڱȽ�

////�����棺
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 00)
//		return 0;
//	else
//		return 1;
//}


////���װ棺
//int check_sys()
//{
//	int a = 1;        //        ��һ���ֽ�     00-> 0    01->1  
//	return *(char*)&a;//��aǿ������ת��Ϊchar*���ٽ��н����ò���������Ӧ��ֵ����
//}
//
//
//
//int main()
//{
//	int ret=check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//		printf("���\n");
//	return 0;
//}


////���н����ʲô��
//int main()
//{
//	char a = -1;
//	//11111111111111111111111111111111----����
//	//11111111--ȡ8λ����1Ϊ����λ
//	//11111111111111111111111111111111----����
//	//11111111111111111111111111111110-----����
//	//10000000000000000000000000000001----ԭ��   ���ԣ�a=-1��bͬ��
//	signed char b = -1;
//	unsigned char c = -1;
//	//11111111--ȡ8λ���޷���λ
//	//00000000000000000000000011111111----�����������޷���Ϊ��0���൱������������c=255
//	printf("a=%d,b=%d,c=%d\n", a, b, c);//��ӡ%d���ý�����������
//	return 0;
//}



////���н����ʲô��
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000---ԭ��
//	//11111111111111111111111101111111---����
//	//11111111111111111111111110000000---����
//	//10000000---ȡ8
//	//11111111111111111111111110000000---��/ԭ�루��Ҫ������������Ϊchar�з��ţ�
//	printf("%u\n", a);
//}
//
////���н����ʲô��
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);//���ͬ��128=127+1�����Ե���-128��127��2����+1���1Ϊ10000000---������ֱ����-128
//}


//�з��ŵ�char�ķ�Χ�ǣ�-128 -- 127
//�޷��ŵ�char�ķ�Χ�ǣ� 0 -- 255
//10000000 ���� -128
//01111111 ���� 127
//01111111 + 1= -128



////��������ʲô��
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d\n", i);//��ѭ������Ϊunsigned int i>=0�������ֻҪ��unsigned �����ͣ���������
//	}
//	return 0;
//}

//�޷��������׵�����ѭ��


////�������н����
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));//����255����Ϊ�з��ŵ�char�ķ�Χ��-128-127��ô�󣬶�-128-1=127������127+128=255
//	return 0;
//}



//�������Ĵ洢

//���磺
//float a=9.0;
//1001.0---a
//(-1) ^0 *1.001 *2^3  //��ѧ������
//(-1) ^S *M     *2^E
//s=0,������s=1������
//M����Ч����, 1<= M <2
//E��ָ��λ


//����float���ԣ�32��
//  1 bit    8 bit    23  bit
//   ��S      ��E       ��M

//����double���ԣ�64��
//  1 bit    11 bit   52  bit
//   ��S       ��E       ��M


//��M��ʱ��ֻ��С�����֣�Ҫȡ�����õ�ʱ���ٽ�С����ǰ���1�ں������ȥ
//��E������Ǽ����м�ֵ��E����ΪE�������0��ȡ��E����ʱ�ټ�ȥ�м�ֵ
//float  E=E+127
//double E=E+1023
// 
// 
//E���������1������E��8bitȫΪ0ʱ��8��0
//�涨�� E=1-127��float������ E=1-1023��double��
//����M���ټ���1�����ǻ�ԭ��0.xxxxxxxxxxx��С��
//���� float
//0 00000000 01100000000000000000000
//S=0
//M=0.011
//E=1-127=-126
//��ʾΪ
// ( -1 )^0 *0.011* 2^(-126)


//E���������2������E��8bitȫΪ1ʱ��8��1
//0 11111111 01100000000000000000000
//�Ͳ������㣬ֱ�ӱ�ʾΪ+-����������




//int main()
//{
//	float f = 5.5;
//	//101.1
//	//1.011* 2^2
//	//(-1)^0 *1.011* 2^2  //S=0 ,E=2+127=129,M�ճ�2��������С�����λ
//	//0 10000001 01100000000000000000000
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//0x40b00000
//	return 0;
//}



////��������н��
//
//int main()
//{
//	int n = 9;
//	//00000000000000000000000000001001
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);////////9
//	printf("pFloat��ֵΪ��%f\n", *pFloat);
//	//0 00000000 00000000000000000001001
//	//E=-126,  (-1)^0 * 0.00000000000000000001001* 2^(-126)  ������0.000000
//	*pFloat = 9.0;//��С��
//	//1001.0
//	//1.001* 2^3
//	//0 00000011 00100000000000000000000
//	//00000001100100000000000000000000  ����ԭ��������ͬ
//	printf("num��ֵΪ��%d\n", n);////////1091567616
//	printf("pFloat��ֵΪ��%f\n", *pFloat);///////9.0
//	return 0;
//}


//ָ���Ǹ���������������ŵ�ַ��
//ָ��Ĵ�С�̶���4/8���ֽڣ�32λ/64λ��
//ָ���������͵ģ�ָ������;�����ָ��+-�Ĳ����������ڴ�ռ�Ĵ�С
//ָ�������




////�ַ�ָ��
//
//int main()
//{
//	const char* p = "abcdef";//"abcdef"�ǳ����ַ��������ܱ����ģ����Եü�const����
//	printf("%c\n", *p);//p�������Ԫ�ص�ַ��%c��ӡһ���ַ�����ӡһ���ַ���Ҫ������
//	printf("%s\n", p);//ʹ��%s��ӡ���Զ������ã����Բ��ô�*p�����Ǵ�p��ʹ��%s���ܽ�һ�������������Ԫ�ش�ӡ����
//	return 0;
//}


////����������н����ʲô��
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}//��ӡhaha����Ϊarr1����Ԫ�ص�ַ��arr2����Ԫ�ص�ַ�ǲ�ͬ�ģ�����p1��p2��Ķ���ͬ���ĳ����ַ���������p1=p2


////ָ�����飺�Ǵ��ָ�������(���ַ������)
//
////�ͼ��÷�
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* parr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(parr[i]));//ֻ�д�ӡ%s�Ų���*�����ã�������Ҫ
//	}
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}



//����ָ�룺��������ָ�루��ַ��
//�磺
//int (*p)[5]=&arr   (*p)----��ʾָ��

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*p)[5] = &arr;//[5]��ָ��������Ԫ�ظ���
// //char*��ָ������������
//	return 0;
//}


//int main()//p����ǵ�ַ����*p������
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));//p�ǵ�ַ
//	}
//
//	/*int(*p)[10] = &arr;
//	int i = 0;*/
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*p + i));//  * �� &������ˣ�����   *p==arr(��Ԫ�ص�ַ)
//	//}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);//  (*p)==��������
//	}*/
//	return 0;
//}



////��ӡ��ά���飺����Ҫ����ά���������һά����--->������Ԫ�أ�ÿһ��Ԫ��������5��СԪ��
//void print(int(*p)[5], int x, int y)//p==arr
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//			printf("%d ", *(p[i] + j));
//			//printf("%d ", *(*(p + i) + j));//*(p+i)��ʾ��Ԫ�ص�ַ
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}



//int main()
//{
//	/*int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);*/
//	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr2;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//		printf("%d ", p[i]);
//		printf("%d ", *(p + i));//��Ϊ p=arr,������Ԫ�ص�ַ
//		printf("%d ", *(arr2 + i));//*(arr+i)== *(p+i)==arr[i]==p[i]
//	}
//	return 0;
//}



//һά���鴫�ε�ʱ�򣬿���д��������ʽ
//int arr[10]={0};
//void test(int arr[])
//void test(int arr[10])
//void test(int*arr)


//ָ�����鴫��ʱ������д��������ʽ
//int*parr[10]={0};
//void test(int**arr)//��������Ԫ�ص�ַ�����ַ��int*���ͣ��򴫲�ʱ��int**����
//void test(int*arr[10])


//��ά���鴫��
//int arr[3][5]={0};//�����һά���飬��������Ԫ�أ�ÿ��Ԫ�ض���һ������
//void test(int arr[3][5])
//void test(int arr[][5])
//void test(int(*p)[5])
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


//��ϰ2.дһ�������ж�һ���Ƿ�Ϊ����

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
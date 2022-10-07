#define  CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
////定义一个结构体（复杂对象）然后列出名字价格
////struct Book
////{
////	char name[20];
////	short price;
///*}*/;//别忘记加;
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
//	//struct Book b1 = { "C语言程序设计",55 };//利用结构体类型创建一个该类型的结构体变量
//	//printf("书名：%s\n", b1.name);//输出b1.后缀
//	//printf("价格：%d\n", b1.price);
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
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//
//
//	
//	else
//	{
//	  if (age >= 18 && age < 28)
//	printf("青年\n");
//	else if (age >= 28 && age < 50)
//	printf("中年\n");
//	else if (age >= 50 && age<90)
//	printf("老年\n");
//	else
//	printf("老不死\n");
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

	//以后在VS中使用scanf应换成scanf_s


	//#include  <stdio.h>
	//int main()
	//{
	////判断一个数是否为奇数
	//	printf("请输入一个整数");
	//	int a = 0;
	//	scanf_s("%d", &a);
	//	if (1 == a % 2)
	//		printf("该数为一个奇数，且值为%d\n", a);
	//	else
	//		printf("该数为一个偶数,数值为%d\n", a);
	//
	//	return 0;
	//}



	//判断一个数是否为奇数，并且列出1-100的奇数

	//#include<stdio.h>
	//int main()
	//{
	//	int a = 1;
	//	while (a <= 100)
	//
	//	{
	//		if (1 == a % 2 && a <= 100)
	//		{
	//			printf("该数为奇数,且数值为%d\n", a);
	//			a++;
	//		}
	//		else
	//		{
	//			printf("该数为偶数,且数值为%d\n", a);
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
	//	printf("请输入一周中的某一天\n(1,2,3,4,5,6,7,)>:");//   >:是提示的意思，输入在双引号内，表达式放在>:的前面
	//	scanf_s("%d\n",&day); //使用scanf时别忘记加  &                                      //用法:(表达式)>:
	//	switch (day)
	//	{
	//	case 1://别忘记加:    一般情况下，每个case的结尾都加break;
	//		printf("星期一\n");
	//		break;
	//	case 2:
	//		printf("星期二\n");
	//		break;
	//	case 3:
	//		printf("星期三\n");
	//		break;
	//	case-4:
	//		printf("星期四\n");
	//		break;//终止的意思，跳出switch语句
	//	case 5:
	//		printf("星期五\n");
	//		break;
	//	case 6:
	//		printf("星期六\n");
	//		break;
	//	case 7:
	//		printf("星期天\n");
	//		break;
	//	default://除了以上case的情况使用default
	//		printf("输入错误，请重新输入\n");
	//		break;
	//	}
	//	return 0;
	//
	//}
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	printf("请输入一周中的某一天\n(1,2,3,4,5,6,7)>:");
//	scanf_s("%d\n", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;//只要不使用break，代码就会一直运行下去
//	case 6:
//	case 7:
//		printf("休息日\n");
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
//		continue;//结束continue之后的代码，跳到switch语句继续循环
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
//	int ch=getchar();//接收一个字符
//	putchar(ch);//输出一个字符
//	return 0;
//}
#include<string.h>
#include<stdio.h>
int main()
{
	int input = 0;
	printf("加入比特之后，你打算好好学习吗(1/0)>:");
	scanf_s("%d",&input);
	if (1 == input)
		printf("好offer");
	else
		printf("卖红薯");

	return 0;
}




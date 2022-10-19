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
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	printf("加入比特之后，你打算好好学习吗(1/0)>:");
//	scanf_s("%d",&input);
//	if (1 == input)
//		printf("好offer");
//	else
//		printf("卖红薯");
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
//	printf("请输入密码\n");
//	scanf_s("%s\n",&password,20);
//	while((ch=getchar())!='\n');//清除缓冲区的\n
//	{
//		;
//	}
//	printf("请确认密码(Y/N)>:\n");
//	ret=getchar();
//	if (ret == ' Y')
//
//		printf("确认成功\n");
//
//	else if (ret == 'N')
//		printf("放弃确认\n");
//	else
//		printf("error\n");
//	return 0;
//}



//int main()
//{
//	//运算p，书上习题
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
//	while ((ch = getchar()) != EOF)//按ctrl+z结束循环
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}


//打印1-10
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
//	{//  初始化      判断   调整 
//		if (5 == i)
//			continue;//取消执行continue下面的代码，跳到for语句，
//		             //break则跳出for循环
//		printf("%d\n",i);
//
//	}
//
//
//	return 0;
//}





////没敲到想要的结果，但是运行程序看起来很牛逼的错误代码
// 计算n的阶乘
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




// 计算a的阶乘

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



//计算1！+2！+3！+....+10！
//思路：先求出一个数的阶乘，再利用循环求出每个数的阶乘，最后将阶乘相加
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

//简洁版:
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



//二分查找法:




//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//找坐标7
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
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
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
//		Sleep(1000);//休息1s      引用windows.h
//		system("cls");//清空屏幕     引用stdlib.h
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
//	if (strcmp(password, "123456") == 0)//  ==  不能用来判断两个字符串是否相同，应该使用strcmp
//		printf("登陆成功\n");                               // 语法：strcmp(    ,"   ")
//	return 0;
//}


//练习1.将三个数从大到小输出

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




//更正练习1：


//比大小题目：先打印，再排序
//逻辑：a就放最大值，b次之，c就是放最小值
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d",&a,&b,&c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;//将a，b的值交换
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;//将a，c的值交换
//		c = tmp;
//
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;//将b，c的值交换
//		c = tmp;
//	}
//	//以上操作保证a为最大值，b次之，c为最小值
//
//
//	printf("%d,%d,%d\n",a,b,c);
//	return 0;
//}


	

//练习2.1-100,打印三的倍数的数

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



//练习3.随便给2个数，求这两个数的最大公约数


/*int main()
{
	
	int m = 0;
	int n = 0;
	scanf_s("%d%d",&m,&n);
	if (m > n)
	{
		int i = m % n;
		if (i == 0)
			printf("最大公约数为%d", n);
		if (i != 0)
		{
			for (i;; i++)
			{
				if (m % i == 0 && n % i == 0)
					printf("最大公约数为%d", i);
			}
		}
	}
	if (m < n)
	{
		int i = n % m;
		if (i == 0)
			printf("最大公约数为%d",m);
		if (i != 0)
		{
			for (i;; i++)
			{
				if (m % i == 0 && n % i == 0)
					printf("最大公约数为%d", i);
			}
		}
	}
	if (m==n)
		printf("最大公约数为%d", n);
	return 0;
}*/





//简洁版：辗转相除法

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
//	printf("最大公约数：%d\n",b);
//
//	return 0;
//}

//练习3.打印1000-2000的闰年
//判断闰年：
//    1.能被4整除但不能被100整除
//    2.能被400整除


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




//简洁版：

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





//练习4.打印100-200的素数
// 素数
//方法:试除法：
//一个个去除


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


//简洁版：打印100-200的素数
//  i=a*b
//假设：i=16=2*8=4*4
//所以：i的约数<=i开根号




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


//练习5.分数求和
//计算1/1-1/2+1/3-1/4+1/5.......+1/99-1/100的值


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
//		//两个整数相除，得到的也是整数，                            如1/2=0  -->  1/i==0
//		//如果想要两个整数相除得到小数,那么只要两个整数中有一个小数即可，则改为  1.0/i!=0
//	}
//
//	printf("sum=%d\n", j);
//
//	return 0;
//}





//更正练习5，分数求和


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




//简洁版：

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


//练习6.求最大值
//求10个整数中的最大值
//思路：定义一个数组，随便取数，假设为1-10；求数组中的最大值
//再定义一个max，将数组中的数一 一与max比较，判断谁更大，将值赋值给max


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


//练习7.乘法口诀表
//在屏幕上输出9*9乘法口诀表

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




//尝试简化：



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


//简洁版：


//int  main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//			//在%与d中放数字表示打印n位的数字，如%2d，表示打印2位数字，不够的用空格补上，并向右边对齐
//			//%-2d  同上，向左对齐
//
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//练习8.二分查找，在整型有序数组中查找一个数，找到了输出找到了，下标是   没找到输出找不到

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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//
//		printf("找不到\n");
//
//
//	return 0;
//}


//     多复习阶乘的计算！！！！
//计算1！+2!+3!+.....+10!
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
//			printf("登陆成功\n");
//		else
//			printf("密码错误\n");
//		i++;
//	}
//	printf("退出登录\n");
//	return 0;
//}


//猜数字小游戏
//思路
//1.菜单
//2.游戏


//void menu()//设置菜单
//{
//	printf("**************************************\n");
//	printf("******   1.play      0.exit     ******\n"); 
//	printf("**************************************\n");
//	printf("请注意：\n1.该游戏数字的猜测范围是1-100\n2.按1开始游戏\n3.按0退出游戏\n4.祝您游戏愉快 ^o^\n");
//}
//
//void game()//设置游戏
//{
//	
//	int intput = 0;
//	int ret = 0;
//	game:
//	printf("欢迎进入游戏\n");
//	printf("游戏即将开始\n");
//	Sleep(2000);
//	ret=rand()%100+1;//设置随机数字范围
//	printf("请猜一个数字>:\n");
//	scanf_s("%d", &intput);
//	while (intput)
//	{
//		
//		if (intput > ret)
//		{
//			printf("猜大了\n");
//			
//		}
//		else if (intput < ret)
//		{
//			printf("猜小了\n");
//			
//		}
//		else
//		{
//			printf("恭喜你！猜对了！\n");
//			Sleep(3000);
//			printf("如果你想继续游戏，请按1\n如果你想退出游戏，请按0\n请输入>:");
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
//	menu();//调用菜单
//	int intput = 0;
//	srand((unsigned int)time(NULL));//设置随机数的一个起点
//	scanf_s("%d",&intput);
//	
//	while (intput)
//	{
//		
//		if (intput == 1)
//		{
//			game();//调用游戏
//			break;
//		}
//		
//		else if(intput!=0)
//		{
//			
//			int i = 0;
//			for (i = 0; i < 3; i++)
//			{
//				printf("输入错误\n");
//				scanf_s("%d", &intput);
//				if (intput == 1)
//					game();
//				if (intput == 0)
//				{
//					printf("退出游戏\n");
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
//		printf("退出游戏\n");
//		
//		
//	return 0;
//}



//尝试简化
//猜数字
//1.菜单
//2.游戏

//void menu()//记得menu前面带空啊
//{
//	printf("*********************************************\n");
//	printf("******     1.play       0.exit         ******\n");
//	printf("*********************************************\n");
//	printf("请注意：\n1.按1开始游戏\n2.按0退出游戏\n3.游戏猜数字的范围是1-100\n4.祝您游戏愉快！^o^\n");
//}
//
//void game()
//{
//	int ret = 0;
//	ret = rand() % 100 + 1;
//	int a = 0;
//	printf("欢迎进入游戏！\n游戏即将开始\n");
//		Sleep(2000);
//	while (1)
//	{
//		
//		printf("请输入一个数字>:\n");
//		scanf_s("%d", &a);
//		if (a > ret)
//			printf("猜大了\n");
//		else if (a < ret)
//			printf("猜小了\n");
//		else
//			printf("恭喜你！猜对啦！！！\n");
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
//		printf("请选择>:\n");
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
//			printf("输入错误\n");
//			break;
//
//		}
//	} while (intput);
//
//	printf("退出游戏\n");
//
//	return 0;
//}


//坑室友小利器，哈哈哈哈哈哈哈哈哈


//int main()
//{
//	printf("温馨提示：\n您的电脑将会在一分钟内关机，如果输入：我是猪，将取消关机\n");
//	system("shutdown -s -t 60");
//	char intput[] = { 0 };
//	while (1)
//	{
//		printf("请输入（笑）>:\n");
//		scanf_s("%s", &intput, 20);
//		if (strcmp(intput, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}



//自定义函数



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


//交换
//错误版：


//当实参传给形参的时候
//形参其实是实参的一份临时拷贝
//对形参的修改是不会改变实参的
 

//void swap(int x, int y)//传值调用
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//	//x，y的值确实交换了，但是x，y和a，b没有半毛钱关系
//	//所以运行结果a，b的值并不会交换
//
//}
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前，a为%d,b为%d\n",a,b);
//	swap(a, b);//swap 交换的意思
//	printf("交换后，a为%d,b为%d\n",a,b);
//
//
//
//	return 0;
//}


//更正版

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
//	printf("交换前，a为%d，b为%d\n",a,b);
//	//调用函数，传址调用（改变外部某些变量使用传址调用）
//	swap(&a, &b);//别忘记&
//
//	printf("交换后，a为%d，b为%d\n",a,b);
//
//
//	return 0;
//}

//练习1.判断一个数是否为素数

//自己敲的代码
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
//		printf("该数为素数");
//	else
//		printf("该数不是素数");
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

//改进版:

//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)//用sqrt要引用math.h
//	{
//		 int ret = 0;
//		 ret = x % j;
//		 if (ret == 0)
//		 return 0;
//	}
//	return 1;//就只有一种情况会跳出循环
//}
//
//
//
//int main()
//{
//	int i = 0;
//	//打印100-200的素数
//	for (i = 100; i <= 200; i++)
//	{
//		is_prime(i);//判断素数的专用
//		if (is_prime(i)== 1)//是素数就返回1
//			printf("%d ",i);
//
//	}
//
//	return 0;
//}


//练习2.写一个函数判断一年是否为闰年

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
//		printf("是闰年\n");
//	return 0;
//}


//练习3.写一个函数，二分查找，在一个有序数组中查找具体的某个数
//找到了就返回这个数的下标，找不到的返回-1



////                 本质上arr是一个指针   
//int binary_search(int arr[], int k,int sz)//用int arr[]接收数组
//{
//	
//	int left = 0;
//	//更正错误的方法就是在main函数中计算数组的个数，再主动传输进binary_search
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
//	scanf_s("%d",&k);//  传递过去的是数组arr首元素的地址
//	int ret=binary_search(arr,k,sz);//二分查找,用ret来接收二分查找的数字
//	if (ret == -1)
//	printf("找不到\n");
//	else
//	printf("找到了，下标是：%d\n", ret);
//	return 0;
//}

//练习四

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

//练习5.将大写字母转化为小写字母，将小写转大写，数字就不打印

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
//	printf("%d\n",strlen("abc"));//链式访问：将一个函数的返回值作为另一个函数的参数
//	return 0;
//}

//int main()
//{   //              返回值为1       返回值为2
//	printf("%d", printf("%d", printf("%d", 43)));//链式访问
//	//打印结果为4321
//	return 0;
//}

////函数声明（一般放在头文件中），先声明再使用
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
//	//函数调用
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//
//
////函数定义（一般放在源文件里），函数的实现
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}


////作业1.交换两个数
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


//作业2.实现一个函数，打印乘法口诀表

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


//递归练习1.输入一个数，把这个数的每个数按照顺序输出，如1234 则输出1 2 3 4

//void print(int i)
//{
//
//	if(i>9)//递归条件
//	print(i / 10);//每一次都更加接近限制条件
//	printf("%d ", i%10);//打印就%10
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


//递归练习2.求字符串长度

//int my_strlen(char*arr)//所以用指针接收
//{
//	if (*arr != '\0')//判断的是首元素的内容是否为\0，*arr存放的是内容
//		return 1 + my_strlen(arr+1);//arr存放的是地址
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
//	int len=my_strlen(arr);//数组传参，传过去的是第一个元素的地址
//	printf("len=%d\n",len);
//	return 0;
//}


//作业1.青蛙跳台阶
//int jump_floor(int n)
//{
//	int z = 1;
//	if (n < 2)
//		return z;
//	else
//		z = jump_floor(n - 1) + jump_floor(n - 2);//这个简单，就是跳到第n级台阶的时候，起点就只有n-1，或者n-2，
//	return z;                                 这样的话，只要把跳n-2个台阶的方法+n-1台阶的方法就是n台阶的方法
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









//作业2.汉诺塔移动盘子
//思想：
//1.将盘子分为两部分，第一部分是n-1，也就是除了最底下的盘子以外的盘子，第二部分就是1，也就是最下面的盘子
//2.然后将n-1那个部分的盘子从A借助C移动到B，//这一步借助递归调用
//3.再将最大的盘子从A移动到C，//这个就直接移动
//4.最后让那n-1个盘子从B借助A移动到C，//同理，这一步也需要借助递归
//5.另一种：就是只有一个盘子，就直接移

//void hanoi(int n, char A, char B, char C)
//{
//	if (n == 1)
//		printf(" %c -> %c \n",A,C);//这一部分必须得用%c来传，不能直接手打印A->C
//	else
//	{
//		hanoi(n - 1, A, C, B);
//		printf(" %c -> %c \n",A,C);//这个也同理
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
                  //arr别忘记了后面的[]
//void bubble_sort(int arr[], int sz)//升序
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//假设数组中有n个元素，那么将进行n-1趟的排序
//	{
//		int j = 0;        //第0躺进行n-1次比较，第二趟进行n-2此比较，以此类推
//		int flag = 1;
//		for (j = 0; j < sz-1-i; j++)//从第0趟开始排序，从下标0开始，相邻的元素进行比较，若前一项>后一项，则两元素交换
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//不完全有序，flag便会变成0
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main()
//{
//	//实现一个函数，将数组从小到大冒泡排序
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
//	 // 3  3行 4  4列
//	int arr[3][4] = { 0 };//二维数组
//	int arr2[][4] = { {1,2},{3,4} };//二维数组列不可省略
//	int arr3[3][4] = { {1,2,3},{4} };
//	//arr3
//	//行和列都从0开始
//	//    0列 1列 2列 3列
//	//0行   1  2  3   0
//	//1行   4  0  0   0
//	//2行   0  0  0   0
//
//	return 0;
//}



////            三子棋游戏 
//
//
//
//
//#define ROW 3  //定义棋盘的行
//#define COL 3  //定义棋盘的列
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
////初始化棋盘
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
////打印棋盘
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		//打印数据
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
//				//打印分割线
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
//				return 0;//没满
//		}
//	}
//	return 1;//满了
//}
//
//
////1.玩家赢 *
////2.电脑赢 #
////3.平局 Q
////4.继续 C
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
//	for (i = 0; i < ROW; i++)//三横行连一线
//	{
//		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][1] != ' ')
//			return board[i][1];
//	}
//	for (i = 0; i < COL; i++)//三纵列连一线
//	{
//		 if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[1][i] != ' ')
//          return board[i][1];
//	}
//	//斜线1
//	 if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
//		return board[0][0];
//	//斜线2
//	 if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
//		return board[0][2];
//	//平局
//	 if (1 == IsFull(board, ROW, COL))
//	 {
//		 return 'Q';
//	 }
//	    return 'C';//继续
//	 
//}
//
//
//void PlayerMove(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	printf("玩家走:>\n");
//	while (1)
//	{
//		printf("请输入坐标:>\n");
//		scanf_s("%d%d", &i, &j);
//		if (i >= 1 && i <= ROW && j >= 1 && j <= COL)
//		{
//			//判断坐标有没有被占用
//			if (board[i-1][j-1] == ' ')
//			{
//				board[i-1][j-1] = '*';
//				break;
//			}
//			else if(board[i-1][j-1]!=' ')
//			{
//				printf("该坐标被占用\n");
//				printf("请重新输入:>\n");
//			}
//		}
//		else
//			printf("输入错误，请重新输入:>\n");
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
//	printf("欢迎进入游戏\n");
//	//数组，存放棋盘的信息
//	char board[ROW][COL] = { 0 };
//	//初始化棋盘,传数组，行，列
//	InitBoard(board, ROW, COL);
//	//打印棋盘，传数组，行，列
//	DisplayBoard(board, ROW, COL);
//	char ret = 0;
//	while (1)
//	{
//		//玩家下棋
//		PlayerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		//电脑下棋
//		ComputerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//	    ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//		printf("玩家赢\n");
//	else if (ret == '#')
//		printf("电脑赢\n");
//	else if (ret == 'Q')
//		printf("平局\n");
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
//		printf("请输入:>\n");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


int main()
{



	return 0;
}
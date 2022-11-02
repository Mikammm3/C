#define  _CRT_SECURE_NO_WARNINGS

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


////练习2.写一个函数判断一年是否为闰年
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



//练习1.交换两个数，不使用第三变量


//int main()
//{
//	int a = 3;
//	int b = 5;
//	//1.加减法
//	//a = a + b;//8
//	//b = a - b;//3
//	//a = a - b;//5
//	 
//	
//	//2.按位异或   a=011
//	//            b=101    a^b=110 a
//
//	a = a ^ b;//110
//	b = a ^ b;//011
//	a = a ^ b;//101
//	printf("交换后：a=%d,b=%d\n",a,b);
//	return 0;
//}


//练习2.找出单身狗

//方法1
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,1,2,3,4};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;//计数器
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//				count++;
//
//		}
//		if (count == 1)
//		{
//			printf("单身狗：%d\n", arr[i]);
//			break;
//		}
//	}
//	
//	return 0;
//}




////方法2.
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
//	printf("单身狗：%d\n",ret);
//
//	return 0;
//}


//            扫雷游戏



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
//	printf("------------扫雷游戏-------------\n");
//	//打印列号
//	for (i = 0; i <= col; i++)
//	{
//		printf("%d ",i);
//	}
//	printf("\n");
//	for (i = 1; i <= row; i++)
//	{
//		//打印行号
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
//	printf("------------扫雷游戏-------------\n");
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
//		printf("请输入要查找的坐标:>\n");
//		scanf_s("%d%d", &x, &y);
//		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
//		{
//			if (mine[x][y] == '1')
//			{
//				printf("很遗憾，你被炸死了\n");
//				DisplayBoard(mine, ROW, COL);
//				break;
//			}
//			else
//			{
//				int count = get_mine_count(mine, x, y);//统计雷
//				show[x][y] = count + '0';
//				DisplayBoard(show, ROW, COL);
//				win++;
//			}
//
//		}
//		else
//			printf("坐标非法，请重新输入:>\n");
//	}
//	if (win == ROW * COL - EASY_COUNT)
//	{
//		DisplayBoard(mine, ROW, COL);
//		printf("恭喜您！扫雷成功！！！\n");
//	}
//}
//
//
//void game()
//{
//	//创建棋盘，
//	//这个mine是放雷的
//	char mine[ROWS][COLS] = { 0 };
//	//这个show是放查找出的雷的数据的
//	char show[ROWS][COLS] = { 0 };
//	//初始化棋盘
//	InitBoard(mine,ROWS,COLS,'0');
//	InitBoard(show,ROWS,COLS,'*');
//	//打印棋盘
//	DisplayBoard(show, ROW, COL);
//	//布置雷
//	SetMine(mine,ROW,COL);
//	//DisplayBoard(mine, ROW, COL);
//	//排查雷
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
//		printf("请选择:>\n");
//		scanf_s("%d",&input);
//		switch(input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("输入错误，请重新输入:>\n");
//		}
//
//	} while (input);
//
//	return 0;
//}






//移位操作符：不要移动负数位
//a=a>>-2  ( x )
//只能作用于整数




//int main()
//{
//
//	//左移操作符（有*2的效果）：
//	//左边丢弃，右边补0
//	int a = 16;
//	int b = a << 1;
//	//00000000000000000000000000010000  ---a
//	//00000000000000000000000000100000 ----b
//	return 0;
//}


//int main()
//{
//	//右移操作符(有/2的效果)
//
//	//1.算术右移（基本上全是算术右移）
//	//右边丢弃，左边补符号位（正数补0，负数补1）
//	int a = 16;
//	int b = a >> 1;
//	//00000000000000000000000000010000  ---a
//	//00000000000000000000000000001000  ---b
//
//	return 0;
//}



//位操作符：作用于整数
// 
// 
// 
//按位与&(与数学的真假命题相似，是并且)  1&1=1
//按位或|（或者）
//按位异或^（相同为0，相异为1）


//int main()
//{
//
//	//按(2进制)位取反    ~
//	int a = 0;// 00000000000000000000000000000000补码
//	int b = ~a;//11111111111111111111111111111111补码
//	printf("%d\n",b);//打印原码    11111111111111111111111111111110  反码   10000000000000000000000000000001  原码
//	return 0;
//} 




////逻辑与和或的特点
//int main()
//{
//
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	
//	
//	i = a++ || ++b || d++;
//	printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);
//	//打印结果是多少？ //结果为1 3 3 4，因为当||左边为真时，将不再计算||右边的式子
//	 
//	 
//	//i = a++ && ++b && d++;
//	printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
//	//打印结果是多少？                         //结果为1 2 3 4 ，因为当  &&的左边为假时，就不再运算&&右边的式子
//	
//	
//	return 0;
//}




//逗号表达式：用,隔开的表达式，从左到右依次计算，整个表达式的结果为最后一个表达式的结果（只有一个实参）
//(a,b)；实参是b



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
//	//上方的while循环与下方的while循环作用相同，只是下方的更为简洁
//	while (a = get_val(), count_val(a), a > 0)
//	{
//		
//	}
//	return 0;
//}





//创建一个结构体类型-struct Stu


//struct Stu
//{
//
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//
//};
//
//int main()
//{
//	//使用struct Stu结构体类型创建了一个学生对象s1，并且初始化
//	struct Stu s1 = { "张三",20,"20190308" };
//
//	//结构体.成员名
//	printf("%s\n",s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//
//	//结构体指针.成员名
//	struct Stu* p = &s1;
//	printf("%s\n",p->name);
//	printf("%d\n", p->age);
//	printf("%s\n", p->id);
//	return 0;
//}





////编写代码实现，求一个整数存储在内存中的二进制中1的个数
////与求10进制的数字类似，%2 再/2即可
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


//隐士类型转换：


//1.整型提升：
//运算的操作数小于int字节的大小时，无论逻辑运算还是算术运算，都要使用整型提升
//（1）如果是有符号数，就补符号位（1/0）
//（2）无符号类型，就补0

//int main()
//{
//	char a = 3;//1字节,截取最后的八位，看第一位是几补几
//	//000000000000000000000000000000011
//	//00000011----a
//
//
//	char b = 127;
//	//000000000000000000000000001111111
//	//01111111----b
//
//
//	char c = a + b;//不够4字节，进行整型提升
//	//a+b
//	//10000010----c 
//	//111111111111111111111111110000010--补码
//	//111111111111111111111111110000001--反码
//	//100000000000000000000000001111110--原码
//	//c=-126
//
//
//	printf("%d\n",c);
//
//	return 0;
//}


//2.算术转换
//小的类型和大的类型运算，要先将小的转为大的，再来运算

//long double
//double
//float
//unsigned long int
//long int
//unsigned int
//int


//如float和int运算，先将int转为float，再来运算


//操作符的属性
//1.操作符的优先级      比如先*/% 再+-
//2.操作符的结合性     
//3.求值顺序          从左到右依次计算



//指针：用来存放地址的变量（存放在指针里的值就是地址）

//一个内存单元的大小是1个字节
//指针变量的大小是4字节或者8字节
//32位为4，64位为8


//以0x开头的是十六进制数  如0x00ff12

//1.指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//  int*p  *p能够访问4字节空间大小
//  char*p  *p能够访问1字节空间大小
//double*p  *p能够访问8字节空间大小

//2.指针类型决定了，指针一步能走多远
//int*p  p+1---->4
//char*p p+1---->1
//double*p p+1---->8


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名----首元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}

//野指针：指针指向的位置不可知

//野指针成因:
//1.指针未初始化   如 int*p;
//2.指针越界访问
//3.指针指向的内存空间释放



//实在是不知道指针初始化为什么的时候，就  int*p=NULL;

//NULL是用来初始化指针的，给指针赋值的

//指针完成它的任务之后，可将指针置为空NULL
//如  p=NULL;
//当指针为NULL时，该指针不可用



//因此，使用指针之前应该判断该指针是否能用
//  if (p != NULL)
//  {
//   
//	
//  }



//指针运算

//1.指针+-整数

//int*p=&arr,  这个*是语法 &arr表示整个数组   arr表示首元素的地址

//p表示地址

//*p   表示的是*p所指向的内容，*是解引用操作符

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


//2.指针-指针（同一个数组）

//得到的是两指针中间元素的个数


////指针关系运算 > >= < <= == !=
//#define N_VALUES 5
//int main()
//{
//
//	float values[N_VALUES];//小数数组 5元素
//	float* vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;//values[N_VALUES]内的元素全初始化为0了
//	}
//}


//数组名----首元素地址
//例外情况：
//1.sizeof(arr),      arr---表示整个数组
//2.&arr        arr------表示整个数组


////二级指针：用来存放指针地址
//
////用    类型**p   表示
////例如：
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;//二级指针，存放指针的地址
//	**pp = 20;
//	return 0;
//}


////指针数组----存放指针的数组
// 例如：
//int a = 0;
//int b = 0;
//int* arr[2] = { &a,&b };


//int my_strlen(char* arr)
//{
//	char* start = arr;//用指针接收首地址
//	char* end = arr;//指针初始化
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


//局部变量在栈中保存


//复习冒泡排序,升序
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




//练习1.创建一个整型数组，完成对数组的操作
//1.init  初始化数组为全0
//2.print  打印数组每个元素
//3.reverse  完成每个元素逆置

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


//练习2.将数组A的内容和数组B的内容进行交换

//void exchange(int arr1[], int arr2[], int sz1, int sz2)//传数组的时候把[]带上！！！
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
//	printf("交换前：\n");
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
//	printf("交换后：\n");
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


//全局变量不初始化，默认是0
//sizeof()返回的是无符号数

//练习3.求程序运行结果


//int i;//全局变量不初始化，默认是0
//
//int main()
//{
//
//	i--;//  i = -1 
//	if (i > sizeof(i))//sizeof()---计算变量/类型所占内存的大小  >=0   所以是无符号数
//		printf(">\n");//所以比较大小时会将  -1  转化为无符号数 100000.........0000001（原码） 补码就更大了
//	else              //所以打印的是  >
//		printf("<\n");
//	return 0;
//}



////练习4.求一个数字2进制中1的个数
// 错误：
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




//正确版1：


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

//正确版2：


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


////最优高效率版：
//
//
////n=n&(n-1)   每执行一次式子，就会让2进制最右边的1消失
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



////练习5.比较两个整数不同的比特位有多少个
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



////高效版：
//
////利用^，相同为0；相异为1
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



////练习6.  获取一个整数2进制序列中的奇数位和偶数位，并打印
//
////错误
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
//	get_bit_print_odd(i);//奇数
//	get_bit_print_even(i);//偶数
//	return 0;
//}

////更正：
//
////00000000000000000000000000000001
//
//void print(int n)
//{
//	int i = 0;
//	printf("奇数位\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位\n");
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

////练习7.交换两个变量，不允许创建临时变量
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf_s("%d%d",&i,&j);
//	i = i ^ j;
//	j = i ^ j;
//	i = i ^ j;
//	printf("交换后：i=%d,j=%d\n",i,j);
//	return 0;
//}



///练习8.使用指针打印一个数组
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




////判断素数,并打印100-200的素数
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
//		printf("%d是素数\n",i);
//	else
//		printf("%d不是素数\n", i);
//	for (i = 100; i <= 200; i++)
//	{
//		if (Is_prime(i) == 1)
//			printf("%d ",i);
//	}
//	return 0;
//}



////用递归的方法打印一个数的每一位
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


////设计一个函数，求n的阶乘
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

//用递归的方式求n的阶乘

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



//函数模拟strlen


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


//递归实现strlen

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


//字符串逆序

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


//用递归方式实现字符串逆序
//1.将第一个元素存起来，放到外面去
//2.将最后一个元素放到第一个元素中
//3.将'\0'放到最后一个元素中
//4.将第二个元素-倒数第二个元素（n-1）逆序
//5.再将第一个元素放到最后一个元素中


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


////练习9.计算一个整数的每一位的和
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




////递归实现n的k次方

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


////求第n个斐波那契数
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


//结构是一些值的集合，这些值被称为成员变量，这些值可以是不同的变量类型
//如：


//结构体类型的定义

//第一种方法

//struct stu
//{
//	char name[20];
//	char sex[5];
//	char tele[12];
//	short age;
//}s1, s2, s3;      //记得大括号后面还有一个  ;
////s1,s2,s3是三个结构体的全局变量
//
////尽量少使用全局变量
//
//
//
////第二种方法
//
//typedef struct Stu
//{
//	char name[20];
//	char sex[5];
//	char tele[12];
//	short age;
//}Stu;   //这个Stu是类型
//
// 
//int main()
//{
//	//创建结构体变量
//	struct stu s;//局部变量
//	Stu s1;  //方法2
// 
//  Stu s3={"张三","男","11111666666","20"};
//	return 0;
//}


//结构体的类型可以是标量，数组，指针，甚至可以是其他结构体



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



//以后结构体传参就传地址


//typedef struct M
//{
//	char love[30];
//	char name[5];
//	char sex[5];
//}M;//改名，改成M M=typedef struct M
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
//	M love= { "我爱你！！！","罗夏"};
//	print1(&love);//print1更好
//	print2(love);
//	return 0;
//}




//Debug  调试版本，不做任何优化，包含调试信息


//Release  发布版本，做了性能和大小和效率等优化，不可进行调试


//Windows调试


//  1.准备环境
//改为Debug


//  2.学会快捷键

//断点就是红色的圆点（按F9产生/消失）
//断点：代码执行后停在断点处，基本上问题代码都是在断点处

//  F9  切换断点

//  F5  启动调试，跳到断点处（逻辑上的断点）停下

//  F11  逐语句，进到函数内部

//  F10  逐过程，按一个F10，代码就走一步

//  shift+F11 跳出函数

//  shift+F5  停止调试


//  3.调试时查看代码的信息

//  查看临时变量的值
//  查看内存
//  查看调用堆栈
//  查看汇编信息
//  查看寄存器信息


////实现代码：求1！+2！+3！+.....+n!
////不考虑溢出
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
//		ret = 1;//修改后：将ret初始化为1
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;//通过调试后，发现问题处在ret这里，ret没有初始化
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
//		//如果运行成功，会出现hehe死循环，这是为什么？
//		//通过调试，我们能发现当i>9时，栈溢出了，直接非法访问arr[9]的后几个元素
//		//因为栈区调用原则是先调用高地址的变量，再调用低地址的变量
//		//数组中元素的地址是由低到高的
//		//所以当arr[i]非法访问时，极有可能出现&arr[12]与&i的地址相同，
//		//将arr[12]=0后，导致了i=0，所以才会出现死循环
//		printf("hehe\n");
//	}
//	return 0;
//}


//模拟实现strcpy

#include<assert.h>

//完善版：
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


////改改改善版：
//void my_strcpy(char* dest, char* scr)
//{
//	assert(*dest != NULL);//断言：使用得引用assert.h,()中的表达式为假，就会报错
//	assert(*scr != NULL);
//		while (*dest++ = *scr++)
//		{
//			;
//		}
//}


////改改善版：
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




////改善版：
//void my_strcpy(char* dest, char* scr)
//{
//	while (*dest++ = *scr++)
//	{
//		;
//	}
//}



//简单版：
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
//	//const修饰指针变量时
//	//const放在*左边，修饰的是*p，也就是不能通过p来改变*p（num）的值
//	*p = 20;//error  
//	int n = 100;
//	int*const p = &n;
//	//const放在*右边，修饰的是p，不能改变地址p
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


//类型的意义：
//1.开辟内存空间的大小
//2.看待内存空间的大小

//1.内置类型
//char
//short
//int
//long
//long long
//float
//double

//整型家族
//char（unsigned/signed）
//short（unsigned/signed）
//int（unsigned/signed）
//long（unsigned/signed）

//浮点型家族
//float  单精度
//double  双精度


//自定义类型（构造类型）
//结构体类型  struct
//数组类型
//枚举类型  enum
//联合类型 union



//指针类型
//char*p
//int*p
//float*p
//void*p


//空类型
//void 表示空类型




//对于整型来说，数据存放内存中存的是补码
//正数的原码 补码 反码相同


//大端字节序存储模式
//大端存储：将低位放到高地址处，将高位放到低地址处（顺着存）

//小端字节序存储模式（VS用的是小端存储）
//小端存储：将低位放到低地址处，将高位放到高地址处（倒着存）

//%u，打印的是无符号数（正数）



//写一段代码，告诉我们当前机器的字节序是什么
//思路：对比第一个字节
//如int a=1; 
//  00 00 00 01 ----a
//小端：01 00 00 00
//大端：00 00 00 01
//与a的第一个字节比较

////基础版：
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 00)
//		return 0;
//	else
//		return 1;
//}


////进阶版：
//int check_sys()
//{
//	int a = 1;        //        第一个字节     00-> 0    01->1  
//	return *(char*)&a;//将a强制类型转换为char*，再进行解引用操作，将对应的值返回
//}
//
//
//
//int main()
//{
//	int ret=check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}


////运行结果是什么？
//int main()
//{
//	char a = -1;
//	//11111111111111111111111111111111----补码
//	//11111111--取8位，则看1为符号位
//	//11111111111111111111111111111111----补码
//	//11111111111111111111111111111110-----反码
//	//10000000000000000000000000000001----原码   所以，a=-1，b同理
//	signed char b = -1;
//	unsigned char c = -1;
//	//11111111--取8位，无符号位
//	//00000000000000000000000011111111----整型提升，无符号为则补0，相当于正数，所以c=255
//	printf("a=%d,b=%d,c=%d\n", a, b, c);//打印%d，得进行整型提升
//	return 0;
//}



////运行结果是什么？
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000---原码
//	//11111111111111111111111101111111---反码
//	//11111111111111111111111110000000---补码
//	//10000000---取8
//	//11111111111111111111111110000000---补/原码（需要整型提升，因为char有符号）
//	printf("%u\n", a);
//}
//
////运行结果是什么？
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);//这个同理，128=127+1，所以等于-128，127的2进制+1会进1为10000000---负数，直接是-128
//}


//有符号的char的范围是：-128 -- 127
//无符号的char的范围是： 0 -- 255
//10000000 等于 -128
//01111111 等于 127
//01111111 + 1= -128



////程序结果是什么？
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d\n", i);//死循环，因为unsigned int i>=0恒成立，只要是unsigned 的类型，都是正数
//	}
//	return 0;
//}

//无符号数容易导致死循环


////程序运行结果？
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));//答案是255，因为有符号的char的范围是-128-127这么大，而-128-1=127，所以127+128=255
//	return 0;
//}



//浮点数的存储

//例如：
//float a=9.0;
//1001.0---a
//(-1) ^0 *1.001 *2^3  //科学计数法
//(-1) ^S *M     *2^E
//s=0,正数，s=1，负数
//M是有效数字, 1<= M <2
//E是指数位


//对于float而言（32）
//  1 bit    8 bit    23  bit
//   存S      存E       存M

//对于double而言（64）
//  1 bit    11 bit   52  bit
//   存S       存E       存M


//存M的时候，只存小数部分，要取出来用的时候，再将小数点前面的1在后面加上去
//存E，存的是加上中间值的E，因为E必须大于0，取出E来用时再减去中间值
//float  E=E+127
//double E=E+1023
// 
// 
//E的特殊情况1，当存E的8bit全为0时，8个0
//规定了 E=1-127（float）或者 E=1-1023（double）
//并且M不再加上1，而是还原成0.xxxxxxxxxxx的小数
//例如 float
//0 00000000 01100000000000000000000
//S=0
//M=0.011
//E=1-127=-126
//表示为
// ( -1 )^0 *0.011* 2^(-126)


//E的特殊情况2，当存E的8bit全为1时，8个1
//0 11111111 01100000000000000000000
//就不再运算，直接表示为+-无穷大的数字




//int main()
//{
//	float f = 5.5;
//	//101.1
//	//1.011* 2^2
//	//(-1)^0 *1.011* 2^2  //S=0 ,E=2+127=129,M照抄2进制序列小数点后几位
//	//0 10000001 01100000000000000000000
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//0x40b00000
//	return 0;
//}



////求程序运行结果
//
//int main()
//{
//	int n = 9;
//	//00000000000000000000000000001001
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);////////9
//	printf("pFloat的值为：%f\n", *pFloat);
//	//0 00000000 00000000000000000001001
//	//E=-126,  (-1)^0 * 0.00000000000000000001001* 2^(-126)  所以是0.000000
//	*pFloat = 9.0;//存小数
//	//1001.0
//	//1.001* 2^3
//	//0 00000011 00100000000000000000000
//	//00000001100100000000000000000000  正数原反补码相同
//	printf("num的值为：%d\n", n);////////1091567616
//	printf("pFloat的值为：%f\n", *pFloat);///////9.0
//	return 0;
//}


//指针是个变量，是用来存放地址的
//指针的大小固定是4/8个字节（32位/64位）
//指针是有类型的，指针的类型决定了指针+-的步长，访问内存空间的大小
//指针的运算




////字符指针
//
//int main()
//{
//	const char* p = "abcdef";//"abcdef"是常量字符串，不能被更改，所以得加const修饰
//	printf("%c\n", *p);//p存的是首元素地址，%c打印一个字符，打印一个字符就要解引用
//	printf("%s\n", p);//使用%s打印会自动解引用，所以不用传*p，而是传p，使用%s就能将一个数组里的所有元素打印出来
//	return 0;
//}


////下面程序运行结果是什么？
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
//}//打印haha，因为arr1的首元素地址和arr2的首元素地址是不同的，但是p1和p2存的都是同样的常量字符串，所以p1=p2


////指针数组：是存放指针的数组(存地址的数组)
//
////低级用法
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
//		printf("%d ", *(parr[i]));//只有打印%s才不用*解引用，其他都要
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



//数组指针：存放数组的指针（地址）
//如：
//int (*p)[5]=&arr   (*p)----表示指针

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*p)[5] = &arr;//[5]是指向的数组的元素个数
// //char*是指向的数组的类型
//	return 0;
//}


//int main()//p存的是地址，而*p是内容
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));//p是地址
//	}
//
//	/*int(*p)[10] = &arr;
//	int i = 0;*/
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*p + i));//  * 与 &相抵消了，所以   *p==arr(首元素地址)
//	//}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);//  (*p)==整个数组
//	}*/
//	return 0;
//}



////打印二维数组：首先要将二维数组想象成一维数组--->有三个元素，每一个元素中又有5个小元素
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
//			//printf("%d ", *(*(p + i) + j));//*(p+i)表示首元素地址
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
//		printf("%d ", *(p + i));//因为 p=arr,都是首元素地址
//		printf("%d ", *(arr2 + i));//*(arr+i)== *(p+i)==arr[i]==p[i]
//	}
//	return 0;
//}



//一维数组传参的时候，可以写成下面形式
//int arr[10]={0};
//void test(int arr[])
//void test(int arr[10])
//void test(int*arr)


//指针数组传参时，可以写成下面形式
//int*parr[10]={0};
//void test(int**arr)//传的是首元素地址，其地址是int*类型，则传参时用int**接收
//void test(int*arr[10])


//二维数组传参
//int arr[3][5]={0};//想象成一维数组，则有三个元素，每个元素都是一行数组
//void test(int arr[3][5])
//void test(int arr[][5])
//void test(int(*p)[5])
//两数和
//#include<stdio.h>
//int main()
//{
//	int a=0,b=0;
//	int sum = a + b;
//	const int amount = 123;
//	scanf("%d %d", &a,&b);
//	printf("%d+%d-%d=%d\n",a,b,amount,a+b-amount);
//	return 0;
//}
 
//单位换算
//#include<stdio.h>
//int main()
//{
//	double foot=0,inch=0;
//	//double gc = 0.3048;
//	//double weight = (foot + inch / 12) * gc;
//	printf("请输入身高几尺几寸\n");
//	scanf("%lf %lf", &foot,&inch);
//	printf("你的身高是%f", (foot + inch / 12)*0.3048);
//	return 0;
//}

//时间差值判断
//欠缺手动输入Y/N，以及读取判断！！！
//#include<stdio.h>
//int main()
//{
//	int hour1 = 0, minute1 = 0;
//	int hour2 = 0, minute2 = 0;
//	int p = 0, q = 0;
//	
//	do
//	{
//		printf("请输入第一个时间\n");
//		scanf_s("%d %d", &hour1, &minute1);
//		while (hour1 > 24 || hour1 < 0 || minute1 > 60 || minute1 < 0 || hour1 > 23 & minute1 > 0)
//		{
//			printf("请输入正确的时间\n");
//			scanf_s("%d %d", &hour1, &minute1);
//		}
//		printf("您输入的第一个时间是\n%d小时%d分钟\n是否是您输入的时间，1/0(1是，0否)\n", hour1, minute1);
//		/*判断第一个时间正确性*/
//		scanf_s("%d", &p);
//	} while (p<1);
//	/*do while语句判断输入的和电脑接收的值是否相同*/
//
//	do
//	{
//		printf("请输入第二个时间\n");
//		scanf_s("%d %d", &hour2, &minute2);
//		while (hour2 > 24 || hour2 < 0 || minute2 > 60 || minute2 < 0 || hour2 > 23 & minute2 > 0)
//		{
//			printf("请输入正确的时间\n");
//			scanf_s("%d %d", &hour2, &minute2);
//		}
//		printf("您输入的第二个时间是\n%d小时%d分钟\n是否是您输入的时间，1/0(1是，0否)\n", hour2, minute2);
//		/*判断第二个时间正确性*/
//		scanf_s("%d", &q);
//	} while (q < 1);
//	/*do while语句判断输入的和电脑接收的值是否相同*/
//
//	int t1 = hour1 * 60 + minute1;
//	int t2 = hour2 * 60 + minute2;
//	int t3 = t1 - t2;
//	if (t3 < 0)
//	{
//		int hour3 = (-t3) / 60;
//		int minute3 = (-t3) % 60;
//		/*定义两个时间差*/
//		printf("两个时间相差\n%d小时%d分钟", hour3, minute3);
//	}
//	else
//	{
//		int hour3 = t3 / 60;
//		int minute3 = t3 % 60;
//		/*定义两个时间差*/
//		printf("两个时间相差\n%d小时%d分钟", hour3, minute3);
//	}
//	/*整个if else语句判断先后输入的时间差的正负*/
//
//	return 0;
//}

//求平均值
//#include<stdio.h>
//int main()
//{
//	double a = 0, b = 0;/*定义两数的浮点型型变量*/
//	printf("求两数平均数，请输入数字a的值\n");
//	scanf_s("%lf", &a);
//	printf("您输入的数字a是%f\n", a);
//
//	printf("请输入数字b的值\n");
//	scanf_s("%lf", &b);
//	printf("您输入的数字b是%f\n", b);
//
//	double t = (a + b) / 2;
//	printf("数字a,b的平均数是%f", t);
//	return 0;
//}

////比较大小
//#include<stdio.h>
//int main()
//{
//	double a = 0, b = 0, c = 0;
//	double max = 0;
//	printf("请输入三个整数\n");
//	scanf_s("%lf %lf %lf", &a, &b, &c);
//	if (a > b)
//	{
//		max = a;
//	}
//	else
//	{
//		max = b;
//	}
//	if (max > c)
//	{
//		printf("三个数中最大的是%f", max);
//	}
//	else
//	{
//		printf("三个数中最大的是%f", c);
//	}
//	return 0;
//}

////选择输出
//
//#include<stdio.h>
//int main()
//{
//	int t = 0;
//	scanf_s("%d",&t);
//	switch (t)
//	{
//	case 1:
//		printf("type=1");
//		break;
//	case 1+1:
//		printf("type=2");
//		break;
//	case 3:
//		printf("case=3");
//		break;
//	default:
//		break;
//	}
//	return 0;
//}

////计算华氏温度150°F对应的摄氏温度。计算公式：C=5×(F−32)/9，式中：C表示摄氏温度，F表示华氏温度，输出数据要求为整型。
//#include<stdio.h>
//int main()
//{
//	int F = 150;
//	int C = 5 * (F - 32) / 9;
//	printf("150华氏温度=%d摄氏度", C);
//	return 0;
//}

////计算函数值
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0, m = 0;
//	scanf_s("%d", &n);
//	m = abs(n);
//	if (n==0)
//	{
//		printf("f(x)=0");
//	}
//	else 
//	{	
//		switch (n / m)
//		{
//		case 1:
//			printf("f(x)=%d", 2 * n);
//			break;
//		case -1:
//			printf("f(x)=-1");
//			break;
//		default:
//			break;
//		}
//	}
//	return 0;
//}

////判断一个数是几位数
//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int n = 1;
//	printf("请输入判断位数的数字\n");
//	scanf_s("%d", &x);
//	while (x / 10 > 0)
//	{
//		n += 1; //== n=n+1
//		x /= 10;//== x=x/10
//	}
//	printf("您输入的是%d位数", n);
//	return 0;
//}

//判断一个数是几位数
//#include<stdio.h>
//int main()
//{
//	int x;
//	int n = 0;
//	printf("请输入想判断位数的数字\n");
//	scanf_s("%d", &x);
//	do
//	{
//		x /= 10;
//		n++;
//	} while (x > 0);
//	printf("您输入的是%d位数\n", n);
//	return 0;
//}

//猜数
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	int n = 0, count = 0;
//	srand(time(0));
//	int number = rand()%100+1;
//	printf("我已经想好了一个1-100的数字\n");
//	do
//	{
//		printf("猜猜我想的数字");
//		scanf_s("%d", &n);
//		count++;
//		if (n > number) 
//		{
//			printf("你猜的大了,请你再猜\n");
//		}
//		else if (n < number) 
//		{
//			printf("你猜的小了，请你再猜\n");
//		}
//	} while (n != number);
//	printf("恭喜你猜对了！您一共猜了%d次\n", count);
//	return 0;
//}

//求平均数
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int sum = 0;
//	int n = 0;
//	int m = 0;
//	do
//	{
//		printf("请输入要求平均数的数");
//		scanf_s("%d", &n);
//		if (n != -1)
//		{
//			sum = sum + n;
//			count++;
//		}
//	} while (n != -1);
//	m = sum / count;
//	printf("您输入的数的平均数是%f\n", 0.1 * m);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int number = 0;
//	int sum = 0;
//	int count = 0;
//	printf("请输入要求平均数的数");
//	scanf_s("%d", &number);
//	while (number != -1)
//	{
//		count++;
//		sum += number;
//		printf("请输入要求平均数的数");
//		scanf_s("%d", &number);
//	}
//	printf("您输入的数的平均数是%f\n", 1.0 * sum/count);
//	return 0;
//}
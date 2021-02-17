#include<stdio.h>
#define w0 "Please select the vegetable you want to buy\n"
#define w1 "How many pounds?\n"
#define w2 "Error input,retry\n"
#define w3 "your option:______.\b\b\b\b\b"
double discount(double x);
double weight(double y);
double cost(void);
void fun1(void);
void fun2(void);
main()
{
	char ch;
	double p, p1=0, p2=0, p3=0, s,s1,s2,s3;
	fun1();
	printf(w0);
	printf("a) 洋蓟\t\t\tb) 甜菜\nc) 胡萝卜\t\tq) qiut\n");
	fun1();
	printf(w3);
	while ((ch = getchar()) != 'q')
	{
		if (ch =='\n')
			continue;
	switch (ch) {
	case 'a':p1 += cost(); break;
	case 'b':p2 += cost(); break;
	case 'c':p3 += cost(); break;
	default:printf(w2); break;
	}
	}
	p = p1 + p2 + p3;
	s1 = p1 * 2.05; s2 = p2 * 1.15; s3 = p3 * 1.09;
	s = s1+s2+s3;
	fun2();
	printf("\n");
	printf("\t\t\t\t  购物清单\n");
	printf("\n");
	printf("商品名称\t\t重量\t\t\t售价\t\t\t费用\n");
	printf("1) 洋蓟\t\t\t%.2lf\t\t\t2.05$/pound\t\t%.2lf$\n", p1, s1);
	printf("2) 甜菜\t\t\t%.2lf\t\t\t1.15$/pound\t\t%.2lf$\n", p2, s2);
	printf("3) 胡萝卜\t\t%.2lf\t\t\t1.09$/pound\t\t%.2lf$\n", p3, s3);
	fun2();
	printf("订货的总重量(单位:磅):%.2lf\n",p);
	printf("订单的总费用:%.2lf$\n", s);
	printf("折扣:%.2lf$\n", discount(s));
	printf("运费与包装费:%.2lf$\n", weight(p));
	printf("费用总额:%.2lf$\n", s - discount(s) + weight(p));
	fun2();
}
double discount(double x)
{
	if (x >= 100)
		return x * 0.05;
	else
		return 0;
}
double weight(double y)
{
	if (y <= 0)
		return 0;
	else if (y <= 5)
		return 6.5;
	else if (y <= 20)
		return 14;
	else
		return 14 + 0.5 * (y - 20);

}
double cost()
{
	double pounds;
	printf(w1);
	(void)scanf("%lf", &pounds);
	printf(w3);
	return pounds;
}
void fun1()
{
	int i;
	for (i = 0; i < 50; i++)
		putchar('*');
	printf("\n");
}
void fun2()
{
	int i;
	for (i = 0; i < 90; i++)
		putchar('-');
	printf("\n");
}

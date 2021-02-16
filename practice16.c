#include<stdio.h>
#define bs1 8.75
#define bs2 9.33
#define bs3 10.00
#define bs4 11.20
#define tax1 0.15
#define tax2 0.20
#define tax3 0.25
void fun(double bs);
main()
{
	char ch;
	int i;
	for (i = 0; i < 70; i++)
		putchar('*');
	printf("\n\n");
	printf("Enter the number corresponding to the desired pay rate or actoin\n");
	printf("1) $8.75/hr\t\t\t2) $9.33/hr\n3) $10.00/hr\t\t\t4) $11.20/hr\n5) quit\n");
	for (i = 0; i < 70; i++)
		putchar('*');
	printf("\n");
	while ((ch = getchar()) != '5') {
		switch (ch) {
		case '1':
			fun(bs1);
			break;
		case '2':
			fun(bs2);
			break;
		case '3':
			fun(bs3);
			break;
		case '4':
			fun(bs4);
			break;
		case '5':break;
		default:printf("please select appropriate option:");
			break;
		}
	}
	printf("Done!");
}
 void fun( double bs)
{
	double hours,as, at;
		printf("enter the hours of you working:");
		(void)scanf("%lf", &hours);
		if (hours <= 40) {
			as = bs * hours;
			printf("工资总额=%-5.2f$\n", as);
		}
		else {
			as = bs * (40 + (hours - 40) * 1.5);
			printf("工资总额=%-5.2f$\n", as);
		}
		if (as <= 300) {
			at = as * tax1;
			printf("税金=%-5.2f$\n", at);
			printf("净收入=%-5.2lf$\n\n", as - at);
		}
		else {
			at = 300 * tax1;
			if (as <= 450) {
				at = at + (as - 300.0) * tax2;
				printf("税金=%-5.2lf$\n", at);
				printf("净收入=%-5.2lf$\n\n", (double)as - at);
			}
			else {
				at = at + 150 * tax2;
				at = at + (as - 450.0) * tax3;
				printf("税金=%-5.2f$\n", at);
				printf("净收入=%-5.2f$\n\n", (double)as - at);
			}
		}
	}

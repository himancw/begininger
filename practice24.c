#include<stdio.h>
#include<ctype.h>
double power(double x,int y);
main()
{
	double n;
	int m;
	while(scanf("%lf %d", &n, &m)==2)
	printf("%lf %lf\n", n, power(n,m));
}
double power(double x,int y)
{
	double s = 1;
	int i;
	if (x == 0)
		return 0;
	if (y > 0) {
		for (i = 0; i < y; i++)
			s *= x;
		return s;
	}
	else {
		for (i = 0; i > y; i--)
			s *= 1/x;
		return s;
	}
	return s;
}

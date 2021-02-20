#include<stdio.h>
void larger_of(double *x, double *y,double *z);
main()
{
	double n, m,p;
	(void)scanf("%lf %lf %lf", &n, &m,&p);
	larger_of(&n, &m,&p);
	printf("%lf %lf %lf", n, m,p);
}
void larger_of(double* x, double* y,double *z)
{
	double temp;
	if (*x > *y)
	{
		temp = *x;
		*x = *y;
		*y = temp;
	}
	if (*x > *z)
	{
		temp = *x;
		*x = *z;
		*z = temp;
	}
	if (*y > *z)
	{
		temp = *y;
		*y = *z;
		*z = temp;
	}
}

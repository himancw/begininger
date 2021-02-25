#include<stdio.h>
#define MONTHS 12
#define YEARS 5
main()
{
	const double rain[YEARS][MONTHS] = {
	{ 4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6 },
	{ 8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3 },
	{ 9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4 },
	{ 7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2 },
	{ 7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2 }
	};
	const double(*p)[12] = rain;
	int years, months;
	double subtot,total;
	for (years = 0,total=0; years < YEARS; years++)
	{
		for (subtot = 0, months = 0; months < MONTHS; months++) 
			subtot += p[years][months];
			printf("%d\t%.1lf\n", 2010 + years, subtot);
		    total += subtot;
	}
	printf("total=%.1lf\n", total/YEARS);
	printf("1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\n");
	for (months = 0; months < MONTHS; months++)
	{
		for (subtot = 0, years = 0; years < YEARS; years++)
			subtot += p[years][months];
		printf("%.1lf\t",subtot/YEARS);
	}
}

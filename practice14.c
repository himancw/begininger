#include<stdio.h>
main()
{
	double s1=100, s2=100;
	int year;
	for(year=0;s1>=s2;year++)
	s1 = s1 + 100 * 0.1,s2 = s2*(1 + 0.05);
	printf("%d\n%lf\n%lf\n", year,s1,s2);
}

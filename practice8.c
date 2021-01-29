#include<stdio.h>
#include<math.h>
main()
{
	double PI = 3.14159260000;
	double fl;
	(void)scanf("%lf", &fl);
	while (fabs(fl - PI) > 0.00000000001) {   
		printf("%.16lf\n", fabs(fl - PI));    //The data types 'double'and 'float' default 6 decimal places.
		(void)scanf("%lf", &fl);
	}
	printf("%.16lf\n", fabs(fl - PI));
}

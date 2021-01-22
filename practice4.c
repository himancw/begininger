#include<stdio.h>
main()
{   
	double a;
	int b,c;
	if (scanf("%lf %d %d", &a, &b, &c) == 3)            //The returned value of "scanf()" is equal to the number of the truely readed characters.
		printf("you are right!");
	else
		printf("you are wrong!");
}  

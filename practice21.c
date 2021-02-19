#include<stdio.h>
void alter(int *a, int *b);
main()
{
	int x=3, y=5;
	alter(&x, &y);
	printf("x=%d,y=%d", x, y);
}
void alter(int *a, int *b)
{
	int temp;
	temp= *a - *b;
	*a = *a + *b;
	*b = temp;
}

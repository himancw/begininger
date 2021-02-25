#include<stdio.h>
#define size 8
int fun(int *p,int n);
main()
{
	int arr[size] = { 1,21,34,47,15,63,78,18 };
	printf("max=%d\n", fun(arr,size));
}
fun(int* p)
{
	int i,max;
	for (i = 0, max = *p; size-1 > i; i++)
	{
		max = max > *++p ? max : *p;
		printf("max=%d\n", max);
	}
	printf("\n");
	return max;
}

#include<stdio.h>
copy_arr(double arr[], double arr1[],int n);
copy_ptr(double*arr, double*arr1,int n);
copy_ptrs(double*arr, double* arr1,double *n);
main()
{
	double source[5] = { 1.1,2.2,3.3,4.4,5.5 };
	double target1[5];
	double target2[5];
	double target3[5];
	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);
	copy_ptrs(target3, source, source + 5);
}
copy_arr(double arr[], double arr1[], int n)
{
	int i;
	for (i = 0; i < 5; i++)
		arr[i] = arr1[i];
}
copy_ptr(double*arr, double*arr1, int n)
{
	int i;
	for (i = 0; i < 5; i++) {
		*(arr+i)= *(arr1+i);
		printf("*arr[%d]=%.1lf\n",i,*arr);
	}
}
copy_ptrs(double*arr, double*arr1, double *n)
{
	int i;
	for (i = 0; n - arr1 > i; i++)
		*(arr + i) = *(arr1 + i);
}

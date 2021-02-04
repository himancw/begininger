#include<stdio.h>
#include<math.h>
main()
{
	int i,n;
	double sum=0.0;
	printf("enter the number of terms:");
		(void)scanf("%d", &n);
		while (n > 0) {
			for (sum=0.0,i = 1; i <= n; i++)
			{
				sum = sum + (float)(1.0 / i);
			}
			printf("sum=%f\n", sum);

			for (sum=0.0,i = 1; i <= n; i++)
			{
				sum = sum + (1.0 / i * pow((double)-1, (double) i + 1));   //double pow(double x,double y)
				//if(i%2==0）sum=sum-1.0/i;
				//else sum = sum + 1.0 / i;
			}
			printf("sum=%f\n", sum);
			for (sum = 0, i = 1; i <= n; i++)
			{
				if (i % 2 != 0)
				sum = sum + 2.0 / i ;
			} 
			printf("sum=%f\n", sum);


			printf("enter the number of terms:");
			(void)scanf("%d", &n);
		}
		
}

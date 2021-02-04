#include<stdio.h>
main()
{
	int min, max, sum, i;
	printf("Enter lower and upper integer limits:");
scanf("%d %d", &min, &max);
	while (min < max) {
		for (i = min, sum = 0; i <= max; i++)
		{
			sum += i * i;
		}
		printf("The sum of the squares from %d to %d is %d\n", min * min, max * max, sum);
		printf("Enter lower and upper integer limits:");
		scanf("%d %d", &min, &max);
}
	printf("Done!");
}

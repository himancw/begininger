#include<stdio.h>
main()
{
	int i, j,n;
	printf("enter a number:");
	(void)scanf("%d", &i);
	for (i;i>1;i--)
	{
		n = 1;
		for (j = 2; j <= i / 2; j++) {
			if (i % j == 0) {
				n = 0;
				break;
			}
		}
			if (n == 1)
				printf("%d\n", i);
	}
}

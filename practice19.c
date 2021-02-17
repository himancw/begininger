#include<stdio.h>
main()
{
	char ch;
	double ic;
	double tax;
	printf("select the type of tax and basic income(enter q to quit):");
	while (scanf("%c%lf", &ch, &ic) == 2)
	{
		rewind(stdin);  //Clear keyboard buffer.
		switch (ch)
		{
		case 'd':if (ic <= 17850) tax = 0.15 * ic;
				else
			tax = 0.15 * 17850 + 0.28 * (ic - 17850);
			printf("tax=%.2lf\n", tax); break;
		case 'h':if (ic <= 23900) tax = 0.15 * ic;
				else
			tax = 0.15 * 23900 + 0.28 * (ic - 23900);
			printf("tax=%.2lf\n", tax);  break;
		case 'y':
			if (ic <= 29750) tax = 0.15 * ic;
			    else 
			tax = 0.15 * 29750 + 0.28 * (ic - 29750);
			printf("tax=%.2lf\n", tax); break;
		case 'l':if (ic <= 14875) tax = 0.15 * ic;
				else
			tax = 0.15 * 14875 + 0.28 * (ic - 14875);
			printf("tax=%.2lf\n", tax);  break;
		default:break;
		}
	}
	printf("Done!");
}

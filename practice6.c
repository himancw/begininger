#include<stdio.h>
main()
{
	int i = 0;
	int s = 0;
	while (i++ < 5) {
		if (i % 2)
			continue;        //Returning to the test condition'i++<5' of the 'while()'.
		else;
		s = s + i;
	}
	printf("%d", s);
}

#include<stdio.h>
#define ROWS 6
#define CHARS 10
main()
{
	int row;
	char ch;
	for (row = 0; row < ROWS; row++)              //outer loop
	{
		for (ch = 'A'; ch < ('A' + CHARS); ch++)  //inner loop
			printf("%c", ch);
		printf("\n");                             
	}
	return 0;
}

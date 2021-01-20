#include<stdio.h>
main()
{
	char ch;
	while ((ch = getchar()) != '\n')
		printf("%c", ch+1);
}

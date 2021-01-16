#include<stdio.h>
main()
{
	char ch;
	while ((ch = getchar()) != '\n')
		printf("%c", ch+1);
		//等同上式putchar(ch+1);
}
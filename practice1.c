#include<stdio.h>
main()
{
	char ch;
	while ((ch = getchar()) != '\n')
		printf("%c", ch+1);
	//The "getchar()" in the loop body can continuously read every word separated by " "(space) but the "scanf()" is adverse to it.
	char str[30];
	(void)scanf("%s", str);
	printf("%s", str);
}

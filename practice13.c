#include<stdio.h>
#include<string.h>
main()
{
	char str[256];
	int i=0;
	printf("input a word:");
	while ((void)scanf("%c", &str[i]), str[i++] != '\n');   
	for (; i>=0; i--)
		printf("%c", str[i]);
}

#include<stdio.h>
#define BLURB "MAKE CHINA GREAT AGAIN!"
main()
{
	printf("[%s]\n", BLURB);
	printf("[%2s]\n", BLURB);
	printf("[%24s]\n", BLURB);
	printf("[%023.9s]\n", BLURB);
	printf("[%30.9d]\n", 6);
	printf("[%-30.9d]\n", 6);
	printf("[*% d*% d]\n", 6,6);
	printf("[%7.4f]\n",3.1415926);
	printf("[%010.4f]\n", 3.1415926);
	printf("[%12.4e]\n", 3.1415926*1.e7);
} 
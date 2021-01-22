#include<stdio.h>
#define BLURB "MAKE CHINA GREAT AGAIN!"
#define NUMBER 100
#define PI 3.1415926
main()
{
	printf("[%s]\n", BLURB);                //'%s' symbolizes output as a string. 
	printf("[%2s]\n", BLURB);               //'2' symbolizes two character length.
	printf("[%24s]\n", BLURB);              //Defaulting right juastifing.
	printf("[%023.9s]\n", BLURB);           /*'9' symbolizes the first nine characters in the string "BLURB".*/
	printf("[%30.9d]\n", NUMBER);           //Defaulting right juastifing.
	printf("[%-30.9d]\n", NUMBER);          /*'-' symbolizes left justifing.*/
	printf("[*% d*% d]\n", NUMBER, NUMBER); /*'% d'can generate "leading space".*/
	printf("[%7.4f]\n", PI);                /*'.4' symbolizes 4 decimal places(if practical decimal places is larger than '4',it will be rounded.*/
	printf("[%010.4f]\n", PI);              /*'%0' can generate "leading zero".*/
	printf("[%12.4e]\n", PI * 1.e7);        /*'%e' symbolizes output as the 'e' notation.*/
	printf("%4c\n", '1');                   //Defaulting right juastifing.
	printf("%#4x\n", NUMBER);               //decimal to hexadecimal
	printf("%#4o\n", NUMBER);               //decimal to octal
	printf("%04d\n", 0144);                 //octal to decimal
	printf("%04d\n", 0x64);                 //hexadecimal to decimal
	printf("%04c\n", '\144');               //octal to decimal(ASCII)
	printf("%04c\n", '\x64');               //hexadecimal to decimal(ASCII)
	printf("%d%%", NUMBER);                 /*'%%' can print out '%'.*/
	printf("\"%d\"", NUMBER);               /*'\"' can print out '"'.*/
	int number;                             
	(void)scanf("[%*s %d]\n", &number);     //'%*' symbolizes skipping the intput in the 'scanf()'.
	printf("%*s",strlen(BLURB)+3,BLURB);    //'%*' can specify the field width in the 'printf()'.
}

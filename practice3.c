#include<stdio.h>
#define WORD "you are right!"
main()
{
size_t A;
A= sizeof(WORD);                    
printf("A=%zd\n", A);
//printf("A=%zd\n",sizeof(WORD));  //sizeof(WORD)=15(including '\n')
size_t B;
B = strlen(WORD);
printf("B=%zd", B);
//printf("B=%zd",strlen(WORD));    //strlen(WORD)=14
	
char str[40] ="The world!";
printf("%zd\n", sizeof(str));      //sizeof(str)=40;
printf("%zd", strlen(str));        //strlen(str)=10;
	
int a;
a = printf("MAKE ""CHINA"          //The returned value of "printf()" is assigned to the variate"a".
    " GREAT"" AGAIN!\n");
printf("MAKE CHINA\
  GREAT AGAIN!\n");                //The codes of the last row are bound to follow the codes from the begining of next row.
printf("%d", a);

int b,c,d;
b = scanf("%d %d", &c, &d);        //The returned value of "scanf()" is assigned to the variate"b".
printf("%d", b); 
	
	

}

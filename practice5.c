#include<stdio.h>
int pound(int n);                 //Function Declaration
main()
{
	int times = 5;
	char ch = '!';
	float f = 6.0;
	
	pound(times);
	printf("%d\n", pound(times));
	pound(ch);                    //With the funcation of Function Declaration 'int pound(int n)',the data type'char' of variate'ch' will be automatically converted to 'int'.    
	printf("%d\n", pound(ch));   
    pound(f);                     //As above
	printf("%d\n", pound(f));    
	return 0;
}
int pound(int n)
{
	n = n + 1;
	return n;
}

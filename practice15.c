#include<stdio.h>
main()
{
	char ch;
	int count=0,m=0;
	while ((ch = getchar()) != '#') {
		switch (ch) {
		case 'e':m = 1;
			break;
		case 'i':if(m==1)
			count++;
			break;
		default:m = 0;
			break;
		}
	}
		printf("\ncount=%d", count);
	
}
	

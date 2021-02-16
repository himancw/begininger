#include<stdio.h>
main()
{
	int i=0,n=0,s=0;
	char ch;
	while ((ch = getchar()) != '#'){
		switch (ch) {
		case 'e':i = 1; break;
		case 'd':if (i)
		{
			s = 1; i = 0;
		} break;
		case 'g':if (s)
		{
			s = 0; n++;
		}
				break;
		default:i = 0;s=0; break;
		}
	}
	printf("n=%d", n);
}

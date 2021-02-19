#include<stdio.h>
void meau(void);
int fun(int x, int y);
main()
{
 int res;
 meau();
 while ((res=fun(1, 4)) != 4)
 {
	 printf("I like choice %d.\n",res);
	 meau();
 }
}
void meau()
{
	printf("\nPlease choose one of the following:\n");
	printf("1) copy files\t\t2) move files\n3) remove files\t\t4) quit\n");
	printf("Enter the number of your choice :");
}
int fun(int x, int y)
{
	int num;
	if (scanf("%d", &num) != 1)
	{
		return 4;
	}
	while(x > num || num > y)
	{
		meau();
		if (scanf("%d", &num) != 1)
		{
			return 4;
		}
	}
	return num;
}

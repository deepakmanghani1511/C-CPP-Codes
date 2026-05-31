#include<conio.h>
#include<stdio.h>
main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 10:
		case 12:
			printf("31 days");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 days");
			break;
		case 2:
			printf("28/29 days");
			break;
		default:
			printf("Invalid Input");
			break;
		getch();
	}
	
	
	getch();
}

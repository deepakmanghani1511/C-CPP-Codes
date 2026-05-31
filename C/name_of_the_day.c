#include<conio.h>
#include<stdio.h>
main() {
	int N;
	printf("Enter a number: ");
	scanf("%d",&N);
	if(N==1)
		printf("Monday");
	else if(N==2)
		printf("Tuesday");
	else if(N==3) 
		printf("Wednesday");
	else if(N==4)
		printf("Thrusday");
	else if(N==5)
		printf("Friday");
	else if(N==6)
		printf("Saturday");
	else if(N==7)
		printf("Sunday");
	else
		printf("Default");
		
	getch();
}

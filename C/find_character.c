#include<conio.h>
#include<stdio.h>
main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
		printf("Lower case");
	else if(ch>='A' && ch<='Z') 
		printf("Upper case");
	else if(ch==32) 
		printf("Space");
	else if(ch>='0' && ch<='9')
		printf("Numbers");
	else
		printf("Symbols");
	getch();
}

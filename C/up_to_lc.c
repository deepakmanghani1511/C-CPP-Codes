#include<conio.h>
#include<stdio.h>
main()
{	
	//M1
//	char ch,Ch;
//	printf("Enter a character:");
//	scanf("%c",&ch);
//	if(ch>='A' && ch<='Z')
//		ch=ch+32;
//	printf("%c",ch);
//	getch();
		
//	//M2
	int ch,Ch;
	printf("Enter a character:");
	scanf("%d",&ch);
	if(ch>=65 && ch<=90)
		ch=ch+32;
	printf("%c",ch);
	getch();
}

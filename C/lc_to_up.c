#include<stdio.h>
#include<conio.h>
main() 
{
	//M1
//	char Ch;
//	printf("Enter a character:");
//	scanf("%c",&Ch);
//	if(Ch>='a' && Ch<='z')
//		Ch=Ch-32;
//	printf("%c",Ch);
//	getch();
	
	//M2
	int ch;
	printf("Enter a charachter:");
	scanf("%d",&ch);
	if(ch>=97 && ch<=122)
		ch=ch-32;
	printf("%c",ch);
	getch();
}
	

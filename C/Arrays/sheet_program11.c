#include<stdio.h>
#include<conio.h>
#include<math.h>
#define size 5
#define m 8

int main()
{
	static int b[]={10,20,30,40,50};
	int i;
	for(i=0;i<=4;i++)
		printf("%d",b[i]);
	return 0;
	getch();	
}

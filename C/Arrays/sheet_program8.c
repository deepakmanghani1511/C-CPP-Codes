#include<stdio.h>
#include<conio.h>
#include<math.h>
#define size 5
#define m 8

int main()
{
	int a[5],i;
	static int b[5];
	for(i=0;i<5;i++)
		printf("%d %d %d\n",i,a[i],b[i]);
	return 0;
	getch();	
}

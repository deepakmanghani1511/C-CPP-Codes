#include<stdio.h>
#include<conio.h>
#include<math.h>
#define size 5
#define m 8

int main()
{
	int array[26],i;
	for(i=0;i<=25;i++)
	{
		array[i]='A'+i;
		printf("\n%d %c",array[i], array[i]);
	}
	return 0;
	getch();	
}

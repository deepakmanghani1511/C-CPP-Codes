#include<stdio.h>
#include<conio.h>
#include<math.h>
#define size 5
#define M 8

int main()
{	
	int a[5]={5,1,15,20,25};
	int i,j,k=1,m;
	i=++a[1];
	j=a[1]++;
	m=a[i++];
	printf("\n%d %d %d",i,j,m);
	return 0;
	getch();	
}

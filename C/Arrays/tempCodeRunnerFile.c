#include<stdio.h>
#include<conio.h>
#include<math.h>
#define SIZE 5
#define m 8

int main()
{
	const int size=10;
	int i,arr[size];
	for(i=1;i<=size;i++){
		scanf("%d",&arr[i]);
		printf("\n%d",arr[i]);
	}	
	return 0;
	getch();	
}

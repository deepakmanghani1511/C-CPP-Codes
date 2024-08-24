#include<stdio.h>
#include<conio.h>
#include<math.h>
#define size 5
#define m 8

int main()
{
	int n;
	int a[10];
//	printf("Enter a no:");
//	scanf("%d\n",&n);
	//Input
	printf("Enter 1st element");
	scanf("%d\n",a[0]);
	printf("Enter 2nd element");
	scanf("%d\n",a[1]);
	printf("Enter 3rd element");
	scanf("%d\n",a[2]);
	printf("Enter 4th element");
	scanf("%d\n",a[3]);
	printf("Enter 5th element");
	scanf("%d\n",a[4]);
	//Output
	printf("%d\t",a[0]);
	printf("%d\t",a[1]);
	printf("%d\t",a[2]);
	printf("%d\t",a[3]);
	printf("%d\t",a[4]);
	
	return 0;
	getch();	
}

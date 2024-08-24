#include<stdio.h>
#include<conio.h>
#include<math.h>
#define size 5
#define m 8

int main()
{
	int n,i;
	int a[10];
	printf("Enter a num: ");
	scanf("%d",&n);
	//Input
	for(i=0;i<n;i++)
	{
		printf("Enter element %d :",i+1);
		scanf("%d",&a[i]);
	}
	//Output
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
	getch();	
}

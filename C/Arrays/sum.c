#include<stdio.h>
#include<conio.h>
#include<math.h>
#define size 5
#define m 8

int main()
{
	int i,n,sum;
	int a[10];
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	//Input
	for(i=0;i<n;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(sum=0,i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum is =%d",sum);
	return 0;
	getch();	
}

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,b,t,n;
	int a[10];
	printf("Enter no of elements: ");
	scanf("%d",&n);
	
	//Input
	for(i=0;i<n;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	
	//Left shift by one
	for(b=0;b<=1;b++)
	{

		for(i=0,t=a[i];i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		a[i]=t;
			}
	printf("%d",i);
	//Output
	printf("New array by left shift by 1 is \n");
	for(i=0;i<n;i++)
	{
		printf("%d	",a[i]);
	}
	getch();
	return 0;
}

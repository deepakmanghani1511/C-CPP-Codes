#include<conio.h>
#include<stdio.h>
int main()
{
	int i,t,n,b;
	int a[10];
	printf("Enter a number: ");
	scanf("%d",&n);
	//Input
	for(i=0;i<n;i++)
	{
		printf("Element %d = ",i+1);
		scanf("%d",&a[i]);
	}
	
	//Right shift by 1,2,3
	for(b=1;b<=3;b++)
	{
		
		for(i=n-1,t=a[i];i>0;i--)
		{
			a[i]=a[i-1];
		}
		a[i]=t;
	}
		
	//Output
	printf("The new array by 03 times right shift is: ");
	for(i=0;i<n;i++)
	{
		printf("%d	",a[i]);
	}
	getch();
	return 0;
}

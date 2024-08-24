#include<conio.h>
#include<stdio.h>
int main()
{
	int i,t,n,u;
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
	
		t=a[n-1];
		u=a[n-2];
		for(i=n-1;i>1;i--)
		{
			a[i]=a[i-2];
		}
		a[i]=t;
		a[i-1]=u;
	
		
	//Output
	printf("The new array by 02 times right shift is: ");
	for(i=0;i<n;i++)
	{
		printf("%d	",a[i]);
	}
	getch();
	return 0;
}

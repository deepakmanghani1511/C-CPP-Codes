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
	
	//Left shift by 2
		for(i=0,t=a[i],u=a[i+1];i<n-2;i++)
		{
			a[i]=a[i+2];
		}
		a[i]=t;
		a[i+1]=u;
	//Output
	printf("The new array by 02 times left shift is: ");
	for(i=0;i<n;i++)
	{
		printf("%d	",a[i]);
	}
	getch();
	return 0;
}

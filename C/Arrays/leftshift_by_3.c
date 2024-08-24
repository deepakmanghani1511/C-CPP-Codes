#include<conio.h>
#include<stdio.h>
int main()
{
	int i,t,n,u,v;
	int a[10];
	printf("Enter a number: ");
	scanf("%d",&n);
	
	//Input
	for(i=0;i<n;i++)
	{
		printf("Element %d = ",i+1);
		scanf("%d",&a[i]);
	}
	
	//Left shift by 3
		for(i=0,t=a[i],u=a[i+1],v=a[i+2];i<(n-3);i++)
		{
			a[i]=a[i+3];
		}
		a[i]=t;
		a[i+1]=u;
		a[i+2]=v;
	//Output
	printf("The new array by 03 times left shift is: ");
	for(i=0;i<n;i++)
	{
		printf("%d	",a[i]);
	}
	getch();
	return 0;
}

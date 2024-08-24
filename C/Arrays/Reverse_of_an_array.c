#include<stdio.h>
#include<conio.h>
int main()
{	//Revrse of an array
	int n,i,t,u;
	int a[10];
	printf("Enter a number: ");
	scanf("%d",&n);
	//Input
	for(i=0;i<n;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	//Reverse of an array
//	for(i=0;i<n/2;i++)
//		{
//			t=a[i];
//			a[i]=a[n-1-i];
//			a[n-1-i]=t;
//		}
		
	
//		for(i=n-1;i>n/2;i--)
//		{
//			t=a[i];
//			a[i]=a[n-1-i];
//			a[n-1-i]=t;
//		}
	
	
//		for(i=0;i<n/2;i++)
//		{
//			a[i] = a[i] + a[n-1-i];
//			a[n-1-i] = a[i] - a[n-1-i];
//			a[i] = a[i] - a[n-1-i];
//		}

		for(i=0;i<n/2;i++)
		{
			a[i] = a[i]*a[n-1-i];
			a[n-1-i] = a[i]/a[n-1-i];
			a[i] = a[i]/a[n-1-i];
		}
	//Output
	printf("The new array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d	",a[i]);
	}
	getch();
	return 0;
}

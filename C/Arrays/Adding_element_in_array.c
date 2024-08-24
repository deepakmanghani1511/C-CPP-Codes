#include<stdio.h>
#include<conio.h>
int main()
{	
	//Adding an element in an array
	
	int n,i,given_num,given_place;
	int a[10];
	printf("Enter number of elements of an array: ");
	scanf("%d",&n);
	printf("Enter the element and place: ");
	scanf("%d %d",&given_num,&given_place);
	
	//Input						
	for(i=0;i<n;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&a[i]);
	}									//10 20 30 50 60 70
	
	//Adding an element
	for(i=n-1;i>=given_place;i--)
	{
		a[i+1]=a[i];
	}
	
	a[given_place-1] = given_num;
	
	printf("The new array after adding element %d at  %d place is: ",given_num,given_place);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	getch();
	return 0;
}

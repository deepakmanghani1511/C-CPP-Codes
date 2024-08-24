#include<stdio.h>
#include<conio.h>
int main()
{
	int i,max,n=5;
	int a[10];
	//Input
	for(i=0;i<n;i++)
	{
		printf("Enter elements %d",i+1);
		scanf("%d",&a[i]);
	}
	//Output
	max=a[i];
	for(i=0;i<n;i++)
	{
		if(a[i+1]>max)
			max=a[i+1];
	}
	printf("Max of an array elements are %d",max);
	getch();
	return 0;
}










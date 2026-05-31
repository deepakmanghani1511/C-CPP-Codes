#include<conio.h>
#include<stdio.h>
main()
{
	int a,b,max,smax;
	printf("Enter 02 nos: ");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
		max=a;
		smax=b;
	}
	else
	{
		max=b;
		smax=a;
	}
	printf("Max=%d\n",max);
	printf("SMax=%d\n",smax);
	getch();
}

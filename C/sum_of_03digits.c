#include<conio.h>
#include<stdio.h>
main()
{
		
	//M1
	int a,b,c,n,sum;
	printf("Enter a no :");
	scanf("%d",&n);
	a=n%10;
	n=n/10;
	b=n%10;
	c=n/10;
	sum=a+b+c;
	printf("Sum of 03-digits no is = %d",sum);
	getch();

	//M2
//	int n,sum;
//	printf("Enter a no :");
//	scanf("%d",&n);
//	sum= n%10 + (n/10)%10 + ((n/10)/10) ;
//	printf("Sum of a 03-digit no is = %d",sum);
//	getch();

}

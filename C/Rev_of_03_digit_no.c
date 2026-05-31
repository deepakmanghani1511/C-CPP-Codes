
#include<stdio.h>
main()
{
	//M1
	int Rev,n,a,b,c;
	printf("Enter a no: ");
	scanf("%d",&n);
	a=n%10;
	n=n/10;
	b=n%10;
	c=n/10;
	Rev=a*100+b*10+c;
	printf("%d",Rev);
	getch();
	
	//M2
//	int n,rev;
//	printf("Enter a number :");
//	scanf("%d",&n);
//	rev=(n%10)*100 + ((n/10)%10)*10 + ((n/10)/10);
//	printf("Reverse of 03-digit no is = %d",rev);
//	getch();
}

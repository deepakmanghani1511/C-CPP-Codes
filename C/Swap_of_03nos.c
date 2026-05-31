#include<conio.h>
#include<stdio.h>
main() {
	int a,b,c,d;
	printf("Enter 03 nos: ");
	scanf("%d %d %d",&a,&b,&c);
	
	//M1
//	d=a;
//	a=b;
//	b=c;
//	c=d;
//	printf("\n");
//	printf("a=%d b=%d c=%d",a,b,c);
//	getch();
	
//	//M2
//	a=a+b+c;
//	c=a-b-c;
//	b=a-b-c;
//	a=a-b-c;
//	printf("a=%d b=%d c=%d",a,b,c);
//	getch();
//	
	//M3
	a=a*b*c;
	c=a/(b*c);
	b=a/(b*c);
	a=a/(b*c);
	printf("a=%d b=%d c=%d",a,b,c);
	getch();
}

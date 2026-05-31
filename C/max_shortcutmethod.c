#include<conio.h>
#include<stdio.h>
main() {
	int a,b,c,d,e,max;
	printf("Enter 05nos");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	max=a;
	if(b>max)
		max=b;
	if(c>max)
		max=c;
	if(d>max)
		max=d;
	if(e>max)
		max=e;
	printf("Max is = %d",max);
	getch();
}

#include<conio.h>
#include<stdio.h>
main() {
	int a,b;
	printf("Enter 02 nos:");
	scanf("%d %d",&a,&b);
	if(a>b)
		printf("Max is a");
	else
		printf("Max is b");
	getch();
}

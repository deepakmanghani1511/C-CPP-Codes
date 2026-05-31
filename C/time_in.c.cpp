#include<conio.h>
#include<stdio.h>
main() {
	int ts,h,m,s;
	printf("Enter time in hours, minutes and seconds:");
	scanf("%d %d %d",&h,&m,&s);
	ts=h*3600 + m*60 + s;
	printf("Total seconds = %d",ts);
	getch();
}

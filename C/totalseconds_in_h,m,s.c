#include<conio.h>
#include<stdio.h>
main() {
	int ts,h,m,s;
	printf("Enter time in total seconds: ");
	scanf("%d",&ts);
	h=ts/3600;
	ts=ts%3600;
	m=ts/60;
	s=ts%60;
	printf("Hours= %d Minutes= %d Seconds= %d",h,m,s);
	getch();
}

#include<conio.h>
#include<stdio.h>
#define Male M
#define Female F

int main() {
	int per;
	char ch;
	printf("Enter percentage of student:");
	scanf("%d",&per);
	if(per>=90)
		ch='A';
	else if(per>=70 && per<90)
		ch='B';
	else if(per>=50 && per<70)
		ch='C';
	else if(per<50 && per>40 )
		ch='D';
	else
		ch='F';
	printf("Grade = %c",ch);
	
	getch();
	return 0;
}

#include<stdio.h>
#include<conio.h>
int main() {
	int n;
	printf("Enter a no: ");
	scanf("%d",&n);
	while(n) {
		printf("%d\t",n); 		
		//  printf("%d\n",n);
		n--;
		//	n-=2;
	}
	getch();
}

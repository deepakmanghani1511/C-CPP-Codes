#include<stdio.h>
#include<conio.h>
int main() {
	int i=1,n;
	printf("Enter a no: ");
	scanf("%d",&n);
	while(i<n) {
		printf("%d\t",i); 		
		//  printf("%d\n",n);
		i+=2;
		//	n-=2;
	}
	getch();
}

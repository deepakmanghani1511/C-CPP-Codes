#include<stdio.h>
#include<conio.h>
int main() {
	int i=1,a=-1,n;
	printf("Enter a no: ");
	scanf("%d",&n);
	while(i<=n) {
		a=-a;
		printf("%d\t",i*a); 	//  printf("%d\n",n); 		
		i+=2;
	}
	getch();
}

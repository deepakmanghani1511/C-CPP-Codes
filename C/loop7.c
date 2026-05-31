#include<stdio.h>
#include<conio.h>
int main() {
	int i=0,n;
	printf("Enter a no: ");
	scanf("%d",&n);
	while(i<=n) {
		printf("%d\t",i*i); 		
		//  printf("%d\n",n);
		i++;
		//	n-=2;
	}
	getch();
}

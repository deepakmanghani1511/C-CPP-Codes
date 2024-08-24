#include<stdio.h>
#include<conio.h>
int main() {
	int i=1,n,a=1;
	printf("Enter a no: ");
	scanf("%d",&n);
	while(i<=n) {
		printf("%d\t",a); 	//  printf("%d\n",n); 		
		a=a*10+1;
		i++;
	}
	getch();
}

#include<conio.h>
#include<stdio.h>
main()
{
	int a=5,b=5;
	a++;
	++b;
	printf("%d\n",a);
	printf("%d\n",b);
	
	printf("%d\n",a++);		//Here %d is near to a of post increment so a will give value first then increase self value.
	printf("%d\n",++b);		//Here %d is away from b of pre incerment then b will give value after increasing his value.
	
	printf("%d\n",sizeof(a)); 	//We used sizeof() keyword to print size of int, float, char and double.
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(double));
	
	printf("%f\n",b);		//Here b is of int type and we used float format type to print b.
	printf("%f\n\n\n",(float)b);		//Here we changed the variable type.
	
	
	printf("%d\n",5>4);
	printf("%d\n",4>5);
	printf("%d\n",5>=5);
	printf("%d\n",5<=10);
	printf("%d\n",5==5);
	printf("%d\n",5==4);
	printf("%d\n",5!=4);
	printf("%d\n",5!=5);
	printf("%d\n",!5);
	printf("%d\n",!0);
	
}

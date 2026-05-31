#include<conio.h>
#include<stdio.h>
main() {
	int a,b,c,d,max;
	printf("Enter 04 nos:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	{
		if(a>c)
			{
				if(a>d)
					max=a;
				else
					max=d;
			}
		else 
			{
				if(c>d)	
					max=c;
				else
					max=d;
			}		
	}
		
	else
		{
			if(b>c)
				{
					if(b>d)
						max=b;
					else
						max=d;
				}
			else 
				{
					if(c>d)
						max=c;
					else
						max=d;
				}
		}
		
	printf("MAX of 04 nos = %d",max);
	getch();
}

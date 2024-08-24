#include<iostream>
#include<math.h>

using namespace std;

int main() {
	
int n;
cout<<"Enter a binary num: ";
cin>>n;

int i = 0,ans = 0;

	while(n) 
	{
		int bit = n%10;
		ans = ans + bit*pow(2,i);
		n = n/10;
		i++;
	}
	cout<<"\nDecimal no = "<<ans;
	
	return 0;
}



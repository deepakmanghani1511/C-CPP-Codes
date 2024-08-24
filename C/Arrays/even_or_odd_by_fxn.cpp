#include<iostream>
using namespace std;

void evenorodd(int n) {
	
	cout<<"Enter number"<<endl;
	cin>>n;
	
	if( n%2==0 )
		cout<<"Even number";
	else
		cout<<"Odd number";

}

int main() {

	int n;
	int num1,num2,num3,num4,num5;
	
	num1=evenorodd(n);	
	
	num2=evenorodd(n);

	num3=evenorodd(n);
	
	num4=evenorodd(n);
	
	num5=evenorodd(n);
	
	return 0;
}

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
	int flag;
    for(int i = 2 ; i < n ;i++)
        {
            if(n%i==0){
			//cout<<"Not a prime no"<<endl;
        	flag=1;
			break;
			}
			else
				flag=0;
    	}
    	
    if(flag)
    	cout<<"Not a prime no";
    else
    	cout<<"Prime no";
    	
    return 0;
}

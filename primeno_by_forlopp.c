#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i = 2 ; i < n-1 ;)
        {
            if(n%i==0){
			cout<<"Prime no"<<endl;
        	break;
			}
			else
				i++;
    	}
    return 0;
}

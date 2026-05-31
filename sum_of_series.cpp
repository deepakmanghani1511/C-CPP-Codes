#include<iostream>
using namespace std;

int sum( int n) {
    
    int Sum = 0, i = 1;
    while(n) {
        if(i%2!=0) {
            Sum = Sum + i;
        } else {
            Sum = Sum - i;
        }
        i++;
        n--;
    }
    return Sum;
}

int main() {
    
    int n1 = 10, n2 = 25, n3 = 37;
    int ans;
    ans = sum(n1);
    cout << "The sum of the series upto " << n1 << "th term is = " << ans << endl;
    ans = sum(n2);
    cout << "The sum of the series upto " << n2 << "th term is = " << ans << endl;
    ans = sum(n3);
    cout << "The sum of the series upto " << n3 << "th term is = " << ans << endl;
    return 0;
}
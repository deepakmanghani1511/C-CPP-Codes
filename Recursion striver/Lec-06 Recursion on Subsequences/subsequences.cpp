#include<bits/stdc++.h>
using namespace std;

int main(){
    

    int arr[3]={3,1,2};
    int n=3;
    vector<int> v;
    int a=0;
    while(a < n) {
    
        for(int i=a;i<n;i++){
            v.push_back(arr[i]);
            cout << v.at(i) << " ";
        } cout<<endl;

        for(int i=0;i<n-a;i++){
            v.pop_back();
            for(int j:v) {
                cout << j << " ";
            }
            if(i == n-1)
                cout << "{}" << endl;            
            cout << endl;
        }
        v.clear();
        a++;
    }

    return 0;
}

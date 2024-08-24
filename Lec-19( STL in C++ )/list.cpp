#include<iostream>
#include<list>

using namespace std;

int main() {

    
    list <int> l;
    list <int> a(l);     // Copying the list in l
    list <int> L(50,1);


    for(int i:L){
        cout << i << " ";
    } cout << endl;


    cout << "Empty or not -> " << l.empty() << endl;
    cout << "Size-> " << l.size() << endl;


    l.push_back(10);
    l.push_front(20);
    l.push_front(90);
    l.push_back(30);


    for(int j:l){
        cout<<j<<" ";
    } cout<<endl;


    l.pop_back();
    for(int j:l){
        cout<<j<<" ";
    } cout<<endl;


    l.pop_front();
    for(int j:l){
        cout<<j<<" ";
    } cout<<endl;


    l.erase(l.begin());
    for(int j:l){
        cout<<j<<" ";
    } cout<<endl;


    cout << "Size of list-> " << l.size() << endl;
    return 0;
    
}
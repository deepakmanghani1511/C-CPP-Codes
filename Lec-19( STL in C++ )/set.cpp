#include<iostream>
#include<set>

// Only unique elements are stored only that means repitation of elements are not possible 
// You can insert or delete the elements only
// When we fetch elements, sorted set provides elements in sorted way and unsorted set provides random elements 

using namespace std;
int main() {
    
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(7);
    s.insert(7);    
    s.insert(9);
    s.insert(9);
    s.insert(0);
    s.insert(1);

    for( auto i:s ){
        cout << i << endl;
    } cout << endl;
    
    s.erase(s.begin());
    s.erase(s.begin());

    for( auto j:s){
        cout << j << " ";
    } cout << endl;

    set<int>:: iterator it = s.begin();
    it++;
    s.erase(it);
    for( auto i:s){
        cout << i << " ";
    } cout<< endl;
    
    cout << "5 is present or not->" << s.count(5) << endl;
    cout << "1 is present or not->" << s.count(1) << endl;
    
    set<int>::iterator itr = s.find(5);
    for( auto it = itr; it != s.end(); it++){
        cout << *it << " ";
    } cout << endl;
    
    return 0;
}
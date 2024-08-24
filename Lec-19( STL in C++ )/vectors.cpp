#include <iostream>
#include <vector>
// It is a dynamic array... (noted in copy)
using namespace std;

int main()
{

    vector<int> v;
    cout << "Size-> " << v.capacity() << endl;

    v.push_back(10);
    cout << "Size-> " << v.capacity() << endl;

    v.push_back(20);
    cout << "Size->" << v.capacity() << endl;

    v.push_back(30);
    cout << "Size-> " << v.capacity() << endl;

    cout << "How many elements are allocated-> " << v.size() << endl;

    cout << "Element at 2nd index-> " << v.at(2) << endl;

    cout << "Front element-> " << v.front() << endl;
    cout << "Last element-> " << v.back() << endl;

    cout << "Before pop" << endl;
    for( int i:v ) {
        cout << i << " ";
    } cout << endl;

    v.pop_back(); // Used to delete the last element
    cout << "Size-> " << v.capacity() << endl;
    cout << "How many elements are allocated-> " << v.size() << endl;

    cout << "After pop" << endl;
    for( int j:v) {
        cout << j << " ";
    } cout << endl;

    // Another method of initializing vector
    vector<int> a(10,5);  
    // 10 times 5
    cout << "Size-> " << a.capacity() <<endl;
    cout << "How many elements are allocated in a" << a.size() << endl;

    for( int i:a){
        cout << i << " ";
    } cout << endl;

    vector<int> b(25);
    cout << "Size-> " << b.capacity() << endl;
    cout << "How many elements are allocated in b " << b.capacity() << endl;

    for( int j:b){
        cout << j << " ";
    } cout << endl;

    vector<int> first(b);
    vector<int> second(a);

    for(int j:first){
        cout<<j<<" ";
    } cout<<endl;

    for( int i:second){
        cout<<i<<" ";
    } cout<<endl;

    return 0;
}
#include<iostream>
#include<deque>

using namespace std;
int main() {
    
    deque<int> d;
 
    d.push_back(5);
    d.push_front(6);
    d.push_back(7);
    d.push_back(9);
    d.push_front(10);
    d.push_back(8);

    for(int i:d){
        cout << i << " ";
    } cout << endl; 
    cout << "How many no of elements are allocated before deletion ->" << d.size() << endl;

    d.pop_back();
    cout << "How many no of elements are allocated after deletion ->" << d.size() << endl;
    
    for( int j:d){
        cout << j << " ";
    } cout << endl;

    cout << "Empty or not->" << d.empty() << endl;

    cout << "First element->" << d.front() << endl;
    cout << "Last element->" << d.back() << endl;

    cout << "Print element at 0 index->" << d.at(0) << endl;
    
    cout << "Before erase-> " << d.size() << endl;

    // This is used to the elements 

    d.erase(d.begin()); // Erasing the begining element
    d.erase(d.begin()+3); // Erasing the 3rd element
    d.erase(d.begin(),d.begin() + 1);  // +3 defines erasing upto 03 elements
    
    cout << "After erase-> " << d.size() << endl;
    for(int j:d){
        cout << j << " ";
    } cout << endl;

    // deque<int> d;

    // d.push_back(67);
    // d.push_back(89);
    // d.push_front(11);
    // d.push_back(235);
    // d.push_front(25);
    
    // cout<<d.size()<<endl;
    
    // for(int j:d){
    //     cout<<j<<" ";
    // } cout<<endl;

    // d.pop_back();
    
    // for(int j:d){
    //     cout<<j<<" ";
    // } cout<<endl;
    
    // cout<<d.size()<<endl;

    // cout << "First element->" << d.front() << endl;     
    // cout << "Last element->" << d.back() << endl;
    // cout << "Empty->" << d.empty() << endl;

    // d.erase(d.begin(),d.begin()+3);
    // cout<<"Element at index 0->" << d.at(0) <<endl;

    return 0;
}
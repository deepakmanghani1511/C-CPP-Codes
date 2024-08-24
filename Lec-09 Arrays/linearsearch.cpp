//Linear search
#include<iostream>
using namespace std;

bool found(int arr[], int n, int item) {

    for( int i=0; i<n; i++)
    {
        if(item == arr[i]) { 
            return 1;
        }
    }
    return 0;
}

void print( bool ans, int item)
{
    if(ans)
        cout << " Yes the " << item << " item exists" << endl;
    else
        cout<< " No the " << item << " item doesn't exist" << endl;
}
    
int main() {

    int first[] = {-10, 20, 35, 40, 90, 200};
    int second[] = {-5,-4,3,-2,-1,0};
    int third[] = {0,1,2,3,4,5};

    int key1 = 90, key2 = 3, key3 = 10;
    bool ans;
    ans = found( first, 6, key1);
    print( ans, key1);
    ans = found( second, 6, key2);
    print( ans, key2);  
    ans = found( third, 6, key3); 
    print( ans, key3);      

    return 0;
}
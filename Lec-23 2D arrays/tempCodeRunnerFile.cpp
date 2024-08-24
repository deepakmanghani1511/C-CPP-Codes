#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>> matrix
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
      
    vector<int> ans;

    int rstart = 0;
    int rend = matrix.size();
    int cend = matrix[0].size();

    while( rstart <= rend ){

        for(int col=rstart; col<cend; col++){

            if(col == cend-1)
                for(int row=rstart; row<=rend; row++)
                ans.push_back(matrix[row][col]);                          
            else
                ans.push_back(matrix[rstart][col]);
        }
        

        for(int col=cend-2; col>=rstart; col--){

            if( col == rstart )
                for( int row=rend; row>rstart; row--)
                ans.push_back(matrix[row][col]);        
            else
                ans.push_back(matrix[rend][col]);
            }
        
    rstart++;
    rend--;
    cend--;
    }

    for( int i:ans) {
        cout<<i<<" ";
    } 

    return 0;
}
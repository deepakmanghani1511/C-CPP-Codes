                       //Maximum occuring character


#include<iostream>
using namespace std;

void check(string s, int n, int j, int brr[]){

    char arr1[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char arr2[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    for(int i=0; i<sizeof(arr1); i++){
        if((s[j]==arr1[i]) || (s[j]==arr2[i])){
            brr[i]++;
        }
    }
}

void getMax( int numb[] , int n )
{
    int  max = -32768;
    char array[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for( int i = 0; i<n; i++)
    {
        // 2 20 45 30 50 -10 
        if( numb[i] > max)
            max = numb[i];    
    }
    for(int j-0; j<n; j++){
        if(max==)
        
        }
    cout << "Maximum occuring element of the string = " << max <<endl;
}


// void getmax( int first[], int n)
// {
//     int maxi;
//     for(int i = 0; i<n; i++){
//         maxi = max( maxi, first[i]); 
//     }

//     char array[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
//     for(int i=0; i<n; i++){
//         if(maxi==first[i])
//             cout<<endl<<array[i]<<"element occurs is"<<maxi<<endl;
//     }
    
    
//     // char array2[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
// }


int main(){

    string s="deepak";
    int n=s.length();
    
    int brr[26]={0};
    int m=sizeof(brr);
    for(int j=0;j<n;j++){
        check(s,n,j,brr);
    }

    int maxi;
    for(int i=0; i<26;i++){
        cout<<brr[i]<<" ";
    }

    getmax(brr,26);

    return 0;
}

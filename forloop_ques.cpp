#include<iostream>
using namespace std;

int main() {
   // Q1

    for(int i=0; i<=5; i++)
    {
        cout<< i << " ";    //0 2 4 
        i++;
    }

    //Q2
    for(int i=0; i<=5; i--)
    {
        cout<< i << " ";    //0 0 0... infinite 
        i++;
    }

    //Q3*
    for(int i=0; i<=15; i+=2)
    {
        cout<< i << " ";    //0 3 5 7 9 11 13 15
        
        if( i&1 ) {
            continue;
        }

        i++;
    }
    cout<<endl;

    //Q4
    for(int i=0; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
           cout<< i << " "<<j<<endl;    // 0 1
                                        // 0 2
                                        // 0 3
                                        //..
                                        //0 5

                                        //1 1
                                        //..
                                        //1 5

                                        //2 1
                                        //..
                                        //2 5

                                        //3 1
                                        //..
                                        //3 5

                                        //4 1
                                        //..
                                        //4 5

                                        //5 1
                                        //..
                                        //5 5
        }
    }

    //Q5

    for(int i=0; i<5; i++)
    {
        for(int j=1; j<=5; j++)
        {
           if(i+j ==10 )
           {
            break;
           }
        cout<< i << " "<<j<<endl;    // 0 1
                                     // 0 2
                                     // 0 3
                                     // 0 4
                                     // 0 5
                                     // 1 1
                                     // 1 2
                                     // 1 3
                                     // 1 4
                                     // 1 5
                                     // 2 1
                                     // 2 2
                                     // 2 3
                                     // 2 4
                                     // 2 5
                                     // 3 1
                                     // 3 2
                                     // 3 3
                                     // 3 4
                                     // 3 5
                                     // 4 1
                                     // 4 2
                                     // 4 3
                                     // 4 4
                                     // 4 5
        }
    }
    return 0;
}
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout<<"enter first number:";
    cin>> a;
    cout<<"enter second number:";
    cin>> b;
    
    if (a>b){
        cout<< a; cout<<" > "; cout<< b;
        
    }
    else if (a==b){
        cout<< a; cout<<"=="; cout<< b;
        
    }
    else {
        cout<< a>b;
    }

    


    return 0;
}




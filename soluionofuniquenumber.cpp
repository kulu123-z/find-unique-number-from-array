/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int findUnique(int a[], int n){
    
    int one=0;
    int two=0;
    int no_three=0;
    for(int i=0;i<n;i++){
        cout<<"\n";
        two|=(one&a[i]);
        cout<<two<<" ";
        one^=a[i];
        cout<<one<<" ";
        no_three=~(one&two);
        cout<<no_three<<" ";
        one&=no_three;
        cout<<one<<" ";
        two&=no_three;
        cout<<two<<" ";
    }
    return one;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\n";
    cout<<findUnique(a,n);
    return 0;
}

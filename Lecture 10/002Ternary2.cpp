#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int j;
    // if (n%2==0)
    // {
    //     j=1;
    // }
    // else{
    //     j=0;
    // }
    int j = n%2==0 ? 1 : 0;
    cout<<j;

    return 0;
    
}
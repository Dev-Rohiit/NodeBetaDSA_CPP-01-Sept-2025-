/*
 1******
 12*****
 123****
 1234***
 12345**
 123456*
 1234567
 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        //numbers
        int j = 1;
        while(j<=i){
            cout<<j;
            j++;
        }
        //stars
        int k = 1;
        while (k<=n-i)
        {
            cout<<"*";
            k++;
        }
    cout<<endl;
    i++;
        
    }
}
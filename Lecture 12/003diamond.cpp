#include<iostream>
using namespace std;
int main(){
    int n = 9;
    int m = n-n/2;
    for (int i = 1; i <=m; i++)
    {
        //print the 'm-i' spaces...
        for (int j = 1; j <=m-i; j++)
        {
            cout<<" ";
        }
        //print the '2*i-1' stars...
        for (int j = 1; j <=2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //print the lower half of the diamond..
    for (int i = 1; i <=m-1; i++)
    {
        //print the 'i' spaces..
        for (int j = 1; j <=i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 2*(m-i)-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;  
    }
    
    
    return 0;
}
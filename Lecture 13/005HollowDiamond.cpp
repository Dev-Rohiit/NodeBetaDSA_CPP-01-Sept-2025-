#include<iostream>
using namespace std;
int main(){
    int n = 9;
    int m = n/2;
    //upper 1st line to print 'n' stars
    for (int i = 1; i <=n; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    //upper middle part
    for (int i = 1; i <=m; i++)
    {
        //left half
        for (int j = 1; j <=m-i+1; j++)
        {
            cout<<"*";
        }
        //middle spaces
        for (int j = 1; j <=2*i-1; j++)
        {
            cout<<" ";
        }
        //right half
        for (int j = 1; j <=m-i+1; j++)
        {
            cout<<"*";
        }
    cout<<endl;
        
    }

    //lower middle part
    for (int i = 1; i <=m-1; i++)
    {
        // lower left half to print 'i+1' stars
        for (int j = 1; j <=i+1; j++)
        {
            cout<<"*";
        }
        //print '2(m-i)-1' spaces
        for (int j = 1; j <=2*(m-i)-1; j++)
        {
            cout<<" ";
        }
        //print 'i+1' lower right half
        for (int j = 1; j <= i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
        
    }

    //to print the 'n' stars on the last line
    for (int i = 1; i <=n; i++)
    {
        cout<<"*";
    }
    
    return 0;
}
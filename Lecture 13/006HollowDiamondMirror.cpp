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
    for (int i = m-1; i>=1; i--)
        {
            //left half to print 'm-i-1' stars
            for (int j = 1; j <=m-i+1; j++)
            {
                cout<<"*";
            }
            //to print the 2*i-1 middle spaces 
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

    //to print the 'n' stars on the last line
    for (int i = 1; i <=n; i++)
    {
        cout<<"*";
    }
    
    return 0;
}
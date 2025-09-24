#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m = n/2;
    for (int i = 1; i <=m+1 ; i++)
    {
        //spaces...
        for (int j = 1; j <= n-2*i+1; j++)
        {
            cout<<"  ";
        }
        //numbers..
        for(int j = i; j >= 1 ; j--)
        {
            cout<<j<<" ";
        }

        //middle space..
        for (int j = 1; j<=2*i-3; j++)
        {
            cout<<"  ";
        }
        //Numbers...
        for (int j = 1; j <=i; j++)
        {
            if (i==1)
            {
                break;
            }else{
                cout<<j<<" "; 
            }
            
        }
    cout<<endl;
}          
////////////////////////////////////////
for (int i = m; i >=1 ; i--)
    {
        //spaces...
        for (int j = 1; j <= n-2*i+1; j++)
        {
            cout<<"  ";
        }
        //numbers..
        for(int j = i; j >= 1 ; j--)
        {
            cout<<j<<" ";
        }

        //middle space..
        for (int j = 1; j<=2*i-3; j++)
        {
            cout<<"  ";
        }
        //Numbers...
        for (int j = 1; j <=i; j++)
        {
            if (i==1)
            {
                break;
            }else{
                cout<<j<<" "; 
            }
            
        }
    cout<<endl;
}          
    return 0;

}
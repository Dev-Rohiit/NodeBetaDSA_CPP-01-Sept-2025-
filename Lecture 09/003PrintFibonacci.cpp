#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int a = 0;
    int b = 1;
    int i = 2;
    if (n==0)
    {
        cout<<a<<endl;
        return 0;//EXIT
    }
    
    while (i<=n)
    {
        int c = a+b;
        a = b;
        b = c;
        i++;
    }
    cout<<b<<endl;
    return 0;
}
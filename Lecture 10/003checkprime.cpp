#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 2;
    while (i<=n-1)
    {
        if(n%i==0){
            cout<<"Not Prime";
            return 0;//exit
        }
        i = i+1;
    }
        cout<<"Prime";

    return 0;
}
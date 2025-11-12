#include<iostream>
using namespace std;
bool isprime(int n){
    int i = 2;
    while (i<=n-1)
    {
        if (n%i==0)
        {
            return false;
        }
        i++;    
    }
    return true;
    
}
int main(){
    int n = 5;
    if(isprime(n)){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }
    return 0;
}
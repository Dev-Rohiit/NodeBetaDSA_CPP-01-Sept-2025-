#include<iostream>
using namespace std;
int main(){
    int a = 2, b = 6, c = 4;
    if (a>b && a>c)
    {
        cout<<a <<": is Largest"<<endl;
    }else if(b>c){
        cout<<b<<": is Largest"<<endl;
    }else{
        cout<<c<<": is Largest"<<endl;
    }
    return 0;
}
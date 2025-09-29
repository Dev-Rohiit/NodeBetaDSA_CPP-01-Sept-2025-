#include<iostream>
using namespace std;
int main(){
    int n = 42;
    int k = 3;

    if (1<<k&n)
    {
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    
    return 0;
}
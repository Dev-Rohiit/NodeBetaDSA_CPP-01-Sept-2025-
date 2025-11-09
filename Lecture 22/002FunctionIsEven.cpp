#include <iostream>
using namespace std;

void isEven(int a){
    if(a%2==0){
        cout<<a<<" is even"<<endl;
    }
    else{
        cout<<a<<" is odd"<<endl;
    }
}

int main(){
    // int x = 11;
    isEven(11);
    return 0;
}
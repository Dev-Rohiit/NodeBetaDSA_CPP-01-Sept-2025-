#include<iostream>
using namespace std;
void increment(int a){
    cout<<"Inside increment Function before increment: "<<a<<endl;
    a++;
    cout<<"Inside increment Function after increment: "<<a<<endl;
}


int main(){
    int a = 0;
    cout<<"Inside main Function before increment: "<<a<<endl;
    increment(a);
    cout<<"Inside main Function after increment: "<<a<<endl;
    return 0;
}
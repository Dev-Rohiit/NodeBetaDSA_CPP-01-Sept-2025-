#include<iostream>
using namespace std;
void myswap(int& a, int& b){
    swap(a, b);
}
int main(){
    int a = 10;
    int b = 5;
    cout<<"a is Before swap: "<<a<<" b is Before swap: "<<b<<endl;
    myswap(a, b);
    cout<<"a is After swap: "<<a<<" b is after swap: "<<b;
    return 0;
}
#include<iostream>
using namespace std;
int y = 100; //global scope
int main(){

    int x = 10; //local scope
    cout<<x<<" "<<y<<endl;
    // cout<<x<<" "<<::x<<endl;

    return 0;
}
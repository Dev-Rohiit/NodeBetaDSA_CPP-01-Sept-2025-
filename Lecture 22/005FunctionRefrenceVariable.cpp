#include<iostream>
using namespace std;
int main(){
    // int x = 10;
    // int y = x;
    // x++;
    // cout<<"Value of x: "<<x<<endl;
    // cout<<"Value of y: "<<y<<endl;

    // int x = 10;
    // int& y = x;
    // x++;
    // cout<<"Value of x: "<<x<<endl;
    // cout<<"Value of y: "<<y<<endl;


    int x = 10;
    x = 20;
    int& y = x;
    x++;
    cout<<"Value of x: "<<x<<endl;
    cout<<"Value of y: "<<y<<endl;
    return 0;
}
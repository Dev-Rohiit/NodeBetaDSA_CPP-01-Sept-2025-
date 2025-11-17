#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int* xptr  = &x;
    cout<<xptr<<endl;
    xptr++;
    cout<<xptr;
    return 0;

}
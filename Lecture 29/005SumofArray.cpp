#include<iostream>
using namespace std;
int f(int* x, int n, int i){
    //base case
    if(i == n-1){
        return x[n-1];
    }
    //recursive case...
    //compute sum of array from index i to n-1 [0...n-1]
    //1. compute sum of array from index i+1 to n-1
    int A = f(x,n, i+1);
    return x[i] + A;
}

int main(){
    int X[] = {10,20,30,40,50};
    int n = sizeof(X)/sizeof(int);
    cout<<f(X, n, 0);

    return 0;
}
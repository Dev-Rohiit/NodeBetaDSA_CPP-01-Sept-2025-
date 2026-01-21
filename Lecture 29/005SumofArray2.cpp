#include<iostream>
using namespace std;
int f(int* x, int i){
    //base case
    if(i == 0){
        return x[0];
    }
    //recursive case...
    //compute sum of array from index i to n-1 [0...n-1]
    //1. compute sum of array from index 0 to n-2
    int A = f(x, i-1);
    return A + x[i];

}
int main(){
    int X[] = {10,20,30,40,50};
    int n = sizeof(X)/sizeof(int);
    cout<<f(X, n-1);

    return 0;
}
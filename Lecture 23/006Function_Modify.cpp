#include<iostream>
using namespace std;
void computesum(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        arr[i]+=1;
    }
    
}
int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);
    computesum(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
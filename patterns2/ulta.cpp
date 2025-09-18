#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int i = 1;
    while(i<=n){
        //spaces
        int j = 1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        //numbers
        int k = 1;
        int no = i;
        while(k<=i){
            cout<<no;
            no++;
            k++;
        }
    cout<<endl;
    i++;
    }
    return 0;
}
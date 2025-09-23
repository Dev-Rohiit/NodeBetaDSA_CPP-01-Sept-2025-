#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        //numbers
        int j = 1;
        int no = 1;
        while(j<=i){
            cout<<no<<" ";
            no++;
            j++;            
        }
    cout<<endl;
    i++;
    }
}
/*
1 
1 4 
1 4 9 
1 4 9 16 
1 4 9 16 25 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        int no = 1;
        while(j<=i){
            cout<<no*no<<" ";
            no++;
            j++;
            
        }
    cout<<endl;
    i++;
    }
}
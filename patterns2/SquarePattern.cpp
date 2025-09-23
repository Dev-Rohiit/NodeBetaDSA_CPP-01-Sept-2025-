/*
1 2 3 4 5 
2 2 3 4 5 
3 3 3 4 5 
4 4 4 4 5 
5 5 5 5 5 
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
        while(j<=n){
            if(no<i){
                cout<<i<<" ";
            }else{
                cout<<no<<" ";
            }
            no++;
            j++;
        }
    cout<<endl;
    i++;
    }
}
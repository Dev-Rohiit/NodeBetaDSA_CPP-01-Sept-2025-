#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    int no;
    while (i<=n)
    {
        if (i%2==0)
        {
            //even
            no = 0;
        }else{
            //odd
            no = 1;
        }
        int j = 1;
        while (j<=i){
            cout<<no;
            no = 1- no; //toggle
            j = j+1;

        }
        cout<<endl;
        i = i+1;
    }
    return 0;
    
}
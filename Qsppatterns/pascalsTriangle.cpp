#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        // //spaces
        // int j = 1;
        // while (j<=n-i)
        // {
        //     cout<< " ";
        //     j++;
        // }
        //pascal's numbers
        int k = 1;
        int num = 1; //first number is 1
        while (k<=i)
        {
            cout<<num<< " ";
            num = num*(i-k)/k;
            k++;
        }
        cout<<endl;
        i++;
        
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n = 9;
    int m = n-n/2;
    int i = 1;
    //print the upper half of the pattern
    while (i<=m){
        int j = 1;
        while (j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    //print the lower half of the pattern....
     i = m-1;
    while (i>=1){
        int j = 1;
        while (j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i--;
    }

    return 0;
}
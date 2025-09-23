/*
0 
1    1 
2    3     5 
8   13    21    34
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a = 0;
    int b = 1;
    int i = 1;
    while (i<=n)
    {
     int j = 1;
     while (j<=i)
     {
        cout<<a<<"\t";

        int c = a+b;
        a = b;
        b = c;
        j++;
     }
    cout<<endl;
    i++;
        
    }
    return 0;

}
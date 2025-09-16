#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev = 0;
    while (n>0)
    {
    //extract the last digit 
        int ld = n%10;
    //calculate the reverse number  
        rev = rev*10+ld;
    //update the n i.e remove last digit
        n = n/10; 
    }
    cout<<"Reverse number is: "<<rev<<endl;
    return 0;
}
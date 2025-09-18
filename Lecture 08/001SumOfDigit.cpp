#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    while(n>0){
        //extract last digit
        int ld = n%10;
        //calculate sum
        sum = sum + ld;
        //update the n i.e.remove last digit
        n = n/10;
    }
    cout<<"Sum of digit is: "<<sum<<endl;

    return 0;
}
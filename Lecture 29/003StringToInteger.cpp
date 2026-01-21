#include<iostream>
#include<string>
using namespace std;
int f(string str, int n){
    //base case
    if(n==1){
        return str[0] - '0';
    }
    //recursive case
    //1. ask your friend to give you the integer value of smaller problem i.e. (0-n-1)
    string substring = str.substr(0, n-1);
    //extract last character
    char lastChar = str[n-1];
    int A = f(substring, n-1);
    return A * 10 + (lastChar - '0');
}
int main(){
    string str = "1234";
    int n = str.size();
    cout<< f(str, n);
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>='A' and ch<='Z'){
        cout<<"You have entered an Uppercase letter";
    }else if(ch>='a' and ch<='z'){
        cout<<"You have entered a Lowercase letter";
    }else if(ch>='0' and ch<='9'){
        cout<<"You have entered a Digit";
    }else{
        cout<<"You have entered a Special Character";
    }

    return 0;
}
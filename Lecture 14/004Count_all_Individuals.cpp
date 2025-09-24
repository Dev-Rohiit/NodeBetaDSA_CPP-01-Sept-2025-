#include<iostream>
using namespace std;
int main(){
    char ch;
    ch = cin.get();
    int digit = 0;
    int alphabets = 0;
    int specialChar = 0;
    int whiteSpaces = 0;
    while (ch!='$')
    {
        if (ch>='A' and ch<='Z' || ch>='a' and ch<='z')
        {
            alphabets++;
        }
        else if(ch>='0' and ch<='9'){
            digit ++;
        }
        else if(ch == ' ' or ch =='\n' or ch == '\t'){
            whiteSpaces++;
        }
        else{
            specialChar++;
        }
        ch = cin.get();
        
        
    }
    cout<<"Alphabets : "<<alphabets<<endl;
    cout<<"digit : "<<digit<<endl;
    cout<<"whiteSpaces : "<<whiteSpaces<<endl;
    cout<<"specialChar : "<<specialChar<<endl;

    
    return 0;
}
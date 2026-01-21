#include<iostream>
using namespace std;
string f(string str){
    //base case
    if (str.length() == 0)
    {
        return "";
    }
    //recursive case
    char temp = str[0];
    string Substring = str.substr(1);
    //ask your friend to move all the 'x' char to the end of the given substring
    string FriendSubstring = f(Substring);
    if (temp == 'x')
    {
        return FriendSubstring + temp;
    }
    return temp + FriendSubstring;
}
int main(){
    string str = "xabxcxx";
    string ans = f(str);
    cout<<ans;
    return 0;
}
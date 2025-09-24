#include<iostream>
using namespace std;
int main(){
    char ch;
    // cin>>ch;
    ch = cin.get();
    int cnt = 0;
    while (ch!='$')
    {
        // cin>>ch;
        ch = cin.get();
        cnt++;
    }
    cout<<"Total count is "<<cnt;
    return 0;
}
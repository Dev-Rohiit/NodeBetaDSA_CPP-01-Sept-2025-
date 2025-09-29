#include<iostream>
using namespace std;
int main(){
    int n = 15;
    int count = 0;
    for (int k = 0; k < 32; k++)
    {
        if(n>>k&1){
            count++;
        };
    }
    cout<<"Total set Bits are: "<<count<<endl;
    return 0;

}
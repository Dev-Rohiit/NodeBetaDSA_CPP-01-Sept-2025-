#include<iostream>
using namespace std;
int main(){
    int n = 3;
    for (int i = 1; i <=n; i++)
    {
        //print 'n-i+1' characters;
        char ch = 'A';
        for (int j = 1; j <=n-i+1; j++)
        {
            cout<<ch;
            ch++;
        }
        ch--;
        //print the reamining character i.e (n-i+1)
        for (int j = 1; j <=n-i+1; j++)
        {
            cout<<ch;
            ch--;
        }
        
        cout<<endl;    
    }
    
    return 0;
}
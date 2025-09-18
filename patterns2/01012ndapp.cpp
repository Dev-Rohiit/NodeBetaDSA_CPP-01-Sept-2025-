#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int i = 1;
    while (i<=n)
    {
        int no;
        if (i%2==0)
        {
            //even row;
            no = 0;
        }else{
            no = 1;
        }
        int j = 1;
        while (j<=i)
        {
            cout<<no;
            no = 1-no;
            j++;
        }
    cout<<endl;
    i++;
        
    }
    


    return 0;
}
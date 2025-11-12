#include<iostream>
using namespace std;
void printprime(int N){
    int n = 2;
    while (n<=N)
    {
        bool isprime = true; //assume the number i have is true
        for (int i = 2; i <=n-1; i++)
        {
            if (n%i==0)
            {
                isprime = false;
                break;
            }
            
        }
        if(isprime){ //isprime==true
            cout<<n<<" ";
        }
        n++;
    }
    
}
int main(){
    int N  = 10;
    printprime(N);
    return 0;
}




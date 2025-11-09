// #include<iostream>
// using namespace std;
// void multiply(int a , int b){
//     cout<<"Multiplication is: "<<a*b<<endl;
// }
// int main(){
//     int x = 10;
//     int y = 2;
//     multiply(x,y);

//     return 0;
// }

#include<iostream>
using namespace std;
int multiply(int a , int b){
    int multipy = a*b;
    return multipy;
}
int main(){
    int x = 10;
    int y = 2;
    // multiply(x,y);
    cout<< multiply(x,y) << endl;

    return 0;
}
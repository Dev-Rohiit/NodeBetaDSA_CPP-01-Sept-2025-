#include<iostream>
#include<cmath>
using namespace std;
float ComputeAreaOfTriangle(int b, int h){
    return 0.5*b*h;
}

float ComputeAreaOfTriangle(int a, int b, int c){
    int s = (a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main(){
    cout<<ComputeAreaOfTriangle(3,4)<<endl;
    cout<<ComputeAreaOfTriangle(3,4, 5)<<endl;


    return 0;
}
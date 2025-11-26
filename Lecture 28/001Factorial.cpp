#include<iostream>
using namespace std;
int f(int n){
	//base case
	if(n==0){
		return 1;
	}
	//recursive case
	//1. Ask your friend to compute factorial of (n-1)
	int A = f(n-1);
	return n*A;
	// return n * f(n-1);
}
int main() {
	int n = 5;
	cout<<f(n);
	return 0;
}
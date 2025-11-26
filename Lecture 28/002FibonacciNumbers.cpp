#include<iostream>

using namespace std;

int f(int n) {
	//base case
	if(n==0 || n==1){
		return n;
	}
	//recursive csase...
	//1. ask your friend for the value of n-1th fibonacci
	int A = f(n-1);
	//2. ask your friend to find the value of n-2th fibonacci no.
	int B = f(n-2);
	return A + B;
}
int main() { 
	int n = 1;
	cout<<f(n);
	return 0;
}
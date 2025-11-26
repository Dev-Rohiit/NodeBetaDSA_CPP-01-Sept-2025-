#include<iostream>
using namespace std;
void f(int n){
	//base case
	if (n==0){
		return;
	}
	//recursive case
	//1. Ask you friend to print the numbers from 1 to n-1;
	f(n-1);
	cout<<n<<endl;
}
int main() {
	int n = 10;
	f(n);
	return 0;
}
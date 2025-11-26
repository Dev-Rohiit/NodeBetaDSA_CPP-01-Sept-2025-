#include<iostream>

using namespace std;

string spellingMap[] = { "zero", "one", "two", "three",
                         "four", "five", "six", "seven",
                       	 "eight", "nine"};

void f(int n){
    //base case
    if (n==0)
    {
        return;
    }
    //recursive case
    f(n/10);
    int d = n%10;
    cout<<spellingMap[d]<<" ";
}
int main() {
	int n = 001;
	f(n);
	return 0;
}
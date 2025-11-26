#include<iostream>
using namespace std;
int f(int x , int y){
	//base case
	if(y==0){
		return 0;
	}
	//recursive case..
	int A = f(x, y-1);
	return x+A;
}
int main(){
	int x = 10;
	int y = 10;
	cout<<f(x,y);
	return 0;
}
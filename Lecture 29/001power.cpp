#include<iostream>

using namespace std;
// int f(int x, int y){
//     //base case
//     if(y==0){
//         return 1;
//     }

//     //recursive case..
//     //1 ask your friend to compute x raised to the power y-1
//     int A = f(x, y-1);
//     return x*A;
// }
int f2(int x, int y){
    //base case
    if(y==1){
        return x;
    }

    //recursive case..
    //1.ask your friend to copute the value of x^(y/2)
    int A = f2(x, y/2);
    if(y%2==0){
        return A*A;
    }
    else{
        return x*A*A;
    }
}
int main() {

	int x = 2;
	int y = 8;

	// cout << f(x, y) << endl;

	cout << f2(x, y) << endl;

	return 0;
}
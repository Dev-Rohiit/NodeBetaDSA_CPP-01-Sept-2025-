#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin>>n;
	int count = 1;
	int ans = 0;
	while(n!=0){
		int rem = n%10;
		n/=10;
		ans = count*pow(10, rem-1);
		count++;
	}
	cout<<ans;
	
	return 0;
}
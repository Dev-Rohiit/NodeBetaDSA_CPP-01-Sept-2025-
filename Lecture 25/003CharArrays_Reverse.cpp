#include<iostream>
using namespace std;
#include<cstring>
#include<algorithm>
// void ReverseString(char* str){//char str[]
// 	int i =0;
// 	int j = strlen(str)-1;
// 	while (i<j)
// 	{
// 		swap(str[i], str[j]);
// 		i++;
// 		j--;
// 	}	
// }
int main() {
	char str[] = "Coding";
	cout<<"Before Reverse: "<<str<<endl;
	// ReverseString(str);
	// reverse(str, str+strlen(str));
	strrev(str);
	cout<<"After Reverse: "<<str<<endl;
	return 0;
}
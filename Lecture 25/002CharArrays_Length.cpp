#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char str[100] = "coding";
	// int cnt = 0;
	// for (int i = 0; str[i] !='\0'; i++)
	// {
	// 	cnt++;
	// }
	// while (str[cnt]!='\0')
	// {
	// 	cnt++;
	// }
	// cout<<"Length of String: "<<cnt;
	cout<<"Length of String: "<<strlen(str);

	return 0;
}
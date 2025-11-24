#include<iostream>
// #include<cstring>
#include<string>

using namespace std;

int main() {

	// declaring a string 
    string str1;
    str1 = "Hello World";

    string str10;
    str10 = "Good World";
    

    // assigning a string literal 
    str10 = str1;
    cout<<"str10: "<< str10 << endl;
	

	// printing a string
    cout << str1;
    cout<<endl;
	
	// indexing into a string

    cout << str1[0] << endl;
    cout << str1[5] << endl; 

	// initialising a string
    string str2 = "Coding Blocks";
    cout << str2 << endl;



	// creating a copy of string
    string str7 = str2;
    cout<<"I am str7: " << str7 << endl;


	// reading input into a string

	// 1. using cin >> 
    string str3;
    cin>>str3;
    cout << str3 << endl;


	// 2. using getline
    string str4;
    getline(cin, str4); // reads the whole line including spaces

	// getline(cin, str5); // '\n' is the default delimiting char.
	cout << str4 << endl;
	
	return 0;
}
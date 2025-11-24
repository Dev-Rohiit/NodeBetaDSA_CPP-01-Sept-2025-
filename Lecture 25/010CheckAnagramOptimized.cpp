#include<iostream>
#include<cstring>

using namespace std;
bool isAnagram(char* str1, char* str2){
	//1. build a freq1 array corr. to str1
	int freq1[26] = {};
	// for(char ch: str1){
	// 	int index = ch-'a';
	// 	freq1[index]++;
	// }
	for (int i = 0; str1[i] !='\0'; i++)
	{	
		char ch = str1[i];
		int index = ch-'a';
		freq1[index]++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout<<freq1[i]<<" ";
	}
	cout<<endl;
	

	//2. build a freq2 array corr. to str2;
	int freq2[26] = {};
	// 	for(char ch: str2){
	// 	freq2[ch-'a']++;
	// }
		for (int i = 0; str2[i] !='\0'; i++)
	{	
		char ch = str2[i];
		int index = ch-'a';
		freq2[index]++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout<<freq2[i]<<" ";
	}
	cout<<endl;

	//3. compare both the arrays
	for (int i = 0; i < 26; i++)
	{
		if (freq1[i]!=freq2[i])
		{
			return false;
		}
	}
	return true;
}

int main() {

	char str1[] = "st";
	char str2[] = "taste";

	isAnagram(str1, str2) ? cout << "true" << endl :
	                        cout << "false" << endl;

	return 0;
}
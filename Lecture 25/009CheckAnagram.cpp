#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
void  checkAnagram(char* str1, char* str2){
    sort(str1, str1+strlen(str1));
    sort(str2, str2+strlen(str2));
}

int main(){
    char str1[] = "abacbac";
    char str2[] = "aabbbcc";
    checkAnagram(str1, str2);
    int finalComp = strcmp(str1, str2);
    
    if (finalComp==0)
    {
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
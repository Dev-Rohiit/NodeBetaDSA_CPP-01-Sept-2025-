#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/ sizeof(int);

    int res[n];
    int s = 0;
    int e = n-1;
    int i = 0;
    while (s<=e)
    {
        if (i<n)
        {
            res[i++] = arr[e--];
        }
        if (i<n)
        {
            res[i++] = arr[s++];          
        }
    }
    for (int k = 0; k <=n-1; k++)
    {
        cout<<res[k]<<" ";
    }

    return 0;
}
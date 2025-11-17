#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);
    cout<<&arr[0]<<"  "<<arr<<endl;
    cout<<&arr[1]<<"  "<<arr+1<<endl;
    cout<<&arr[2]<<"  "<<arr+2<<endl;


    for (int i = 0; i <=n-1; i++)
    {
        cout<<&arr[i]<<" " <<arr+i<< " values->" <<arr[i]<<" " <<*(arr+i)<<endl;

    };

    cout<<endl;

    int * ptr = arr;
        cout<<ptr++<<endl;

    return 0;
}
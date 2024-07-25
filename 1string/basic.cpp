#include<iostream>
using namespace std;
int main(){
    char abc = 'x';
    char arr[20];
    cin>>arr;
    cout<<arr;
    cout<<endl;
    for(int i = 0 ; i < 20 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr[2] = '\0';
    cout<<arr;
}
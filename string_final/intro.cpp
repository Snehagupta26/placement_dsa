#include<iostream>
using namespace std;
int main(){
    char a = 'x'; //block in mmeory named a //single character only
    //strings  - 1d char array
    //to store mulitple chracters
    char arr[10];
    //input
    cin>>arr;
    // s n e h a \0 null character at end ; show termination ; to show string end here
    // cin stop execution space tab newline /enter \t \n
    cout<<arr;
    cout<<endl;
    for(int i = 0 ; i < 10 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr[2] = '\0';
    cout<<arr;
}
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int sum = 0;
    cout<<"numbers are :"<<endl;
    for(int i = 1 ; i <= n ; i++){
        
        cout<<i<<endl;
        sum = sum + i;
        
    }
    cout<<"sum is "<<sum<<endl;
}
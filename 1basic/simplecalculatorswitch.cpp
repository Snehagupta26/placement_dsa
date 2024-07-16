#include<iostream>
using namespace std;
int main(){
    int a , b;
    cin>>a>>b;
    cout<<"enter 1 for add , 2 for sub"<<endl;
    int command;
    cin>>command;
    switch (command)
    {
    case 1/* constant-expression */:
        /* code */
        cout<<a+b;
        break;
    case 2/* constant-expression */:
        /* code */
        cout<<a-b;
        break;    
    
    default:
    cout<<"invalid";
        break;
    }
}
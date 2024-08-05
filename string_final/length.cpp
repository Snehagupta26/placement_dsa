#include<iostream>
using namespace std;
int length(char name[]){
        int i = 0 ;
        int count = 0 ;
        while(name[i] != '\0'){
            i++;
            count++;
        }
        return count;
}
int main(){
    cout<<"enter the string : "<<endl;
    char name[20];
    cin>>name;
    cout<<"string is : "<<name<<endl;
    cout<<"length of string is : "<<length(name)<<endl;
}
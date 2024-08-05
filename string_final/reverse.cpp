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
void reverse(char name[] , int length){
       int i = 0  ;
       int j = length - 1;
       while( i <= j){
        swap(name[i] , name[j]);
        i++;
        j--;
       }
}
int main(){
    cout<<"enter the string : "<<endl;
    char name[20];
    cin>>name;
    cout<<"string is : "<<name<<endl;
    int l = length(name);
    cout<<"length of string is : "<<l<<endl;
    reverse(name , l);
    cout<<"reversed string is : "<<name<<endl;
}
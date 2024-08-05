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
bool checkPalindrome(char name[] , int length){
    int i = 0 ;
    int j = length - 1;
    while(i <= j){
    if(name[i] == name[j]){
        i++;
        j--;
    }else{
        return 0;
    }
    }
    return 1;
  
}
int main(){
     cout<<"enter the string : "<<endl;
    char name[20];
    cin>>name;
    cout<<"string is : "<<name<<endl;
    int l = length(name);
    cout<<"length of string is : "<<l<<endl;
    bool ans = checkPalindrome(name , l);
    if(ans){
        cout<<"it is a palindrome";
    }else{
        cout<<"it is not a palindrome";
    }
    
}
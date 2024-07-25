#include<iostream>
using namespace std;
void reverse(char name[]){
    int count = 0 ;
    for(int i = 0 ; name[i] != '\0' ; i++){
        count++;
    }
    int i = 0;
    while(i <= count){
        swap(name[i] , name[count-1]);
        i++;
        count--;
    }
}
int main(){
   char name[20];
   cout<<"enter your name : "<<endl;
   cin>>name;
   cout<<name;
   cout<<endl;
   reverse(name);
   cout<<name;
   
    
};
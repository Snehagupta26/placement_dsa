#include<iostream>
#include <string>
using namespace std;
int main(){
   char a  = 'z';//memory block with z inside name - a
   //pass only single character
   //to store sneha
   //string in c++ ->1d dimension char type array
   
   //chaaracter array
   char ch[10];
   char name[20];
   cin>>name;
   name[2] = '\0';
   cout<<name;
   cout<<endl;
   cout<<name[0];
   cout<<endl;
   for(int i = 0 ; i < 20 ; i++){
    cout<<name[i];
   }
   cout<<endl;
  
}
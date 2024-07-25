#include<iostream>
using namespace std;
int getLength(char arr[]){
    int count = 0;
    for(int i = 0 ; arr[i] != '\0' ; i++){
        count++;
    }
    return count;
    
}
void reverse(char arr[] , int length){
    int start = 0 ;
    int end = length - 1;
    while(start <= end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    
}
int main(){
   
    char arr[20];
    cin>>arr;
    cout<<arr;
    cout<<endl;
    cout<<"length is : "<<getLength(arr)<<endl;
    int n =  getLength(arr);
    
    cout<<"reversed string is : ";
    reverse(arr , n);
    cout<<arr;
   
}
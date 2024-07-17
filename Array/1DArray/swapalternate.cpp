#include<iostream>
using namespace std;
void swapAlternate(int arr[] , int size){
    int i = 0;
    while(i+1 < size ){
    swap(arr[i] , arr[i+1]);
       i = i + 2;
    }
}
void display(int arr[] , int size){
    cout<<"Elements of array are : "<<endl;
      for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
     }
}
int main(){
     int arr[100];
     cout<<"Enter the size of array : "<<endl;
     int n;
     cin>>n;
     cout<<"Enter elements of array : "<<endl;
     for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
     }
     display(arr , n);
     cout<<endl;
     swapAlternate(arr , n);
     display(arr , n);
   
     
}
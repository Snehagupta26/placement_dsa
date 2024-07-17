#include<iostream>
using namespace std;
bool linearSearch(int arr[] , int size , int target){
     for(int i = 0 ; i < size ; i++){
        if(target == arr[i]){
            return 1;
        }
     }
     return 0;
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
     cout<<"Elements of array are : "<<endl;
      for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
     cout<<"Enter the element to be searched : "<<endl;
     int key;
     cin>>key;
     bool result = linearSearch(arr , n , key);
     if(result){
        cout<<"element found !"<<endl;
     }else{
        cout<<"element not found"<<endl;
     }
}
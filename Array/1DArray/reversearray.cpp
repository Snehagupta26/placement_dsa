#include<iostream>
using namespace std;
void reverseArray(int arr[] , int size){
    int i = 0;
    int j = size - 1;
    while(i <= j){
        swap(arr[i] , arr[j]);
        // int temp;
        // temp = arr[i];
        // arr[i] = arr[j];
        // arr[j] = temp;
        i++;
        j--;
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
     cout<<"Elements of array are : "<<endl;
      for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
     reverseArray(arr , n);
    cout<<"Elements of array are : "<<endl;
      for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
     }
   
     
}
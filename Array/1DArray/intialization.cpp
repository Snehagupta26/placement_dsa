#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    cout<<"elements of arr are : ";
    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";//1 2 3 4 5
    }

cout<<endl;
cout<<"accessing element of index > size of array : "<<arr[50]<<endl;// garbage value or 0
cout<<"size of array : "<<sizeof(arr)<<endl;//5*4 = 20
cout<<"size of each element of array "<<sizeof(arr[0])<<endl;//4 as int is of 4

int arr2[4] = {0};
cout<<"elements of arr2 are : ";
  for(int i = 0 ; i < 4 ; i++){
        cout<<arr2[i]<<" ";//all elements 0
    }
cout<<endl;
int arr3[4] = {6};
cout<<"elements of arr3 are : ";
  for(int i = 0 ; i < 4 ; i++){
        cout<<arr3[i]<<" ";// 6 then all elements 0
    }  
cout<<endl;
int arr4[4] = {65,32};
cout<<"elements of arr4 are : ";
  for(int i = 0 ; i < 4 ; i++){
        cout<<arr4[i]<<" ";//65 32 then all elements 0
    }        
cout<<endl;

int arr5[5];
fill_n(arr5 , 5 ,89);
cout<<"elements of arr5 are : ";
for(int i = 0 ; i < 4 ; i++){
        cout<<arr5[i]<<" ";//all elements 89 by fill_n command
    }  
cout<<endl;
cout<<"total elements of arr5 is : "<<sizeof(arr)/sizeof(arr[0]);//give total size or element of array logic : 5 * 4/4 = 5
cout<<endl;
cout<<"EXAMPLE OF TAKING INPUT AND THEN DISPLAYING "<<endl;
cout<<"Enter the size of array"<<endl;
int n;
cin>>n;
int array[100];
cout<<"Enter the elements of array : "<<endl;
for(int i = 0 ; i < n ; i++){
        cin>>array[i];
    } 
cout<<"elements of array are : "<<endl;
for(int i = 0 ; i < n ; i++){
        cout<<array[i]<<" ";
    }   

}
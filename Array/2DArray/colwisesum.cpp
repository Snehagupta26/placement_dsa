#include<iostream>
using namespace std;
void rowwisesum(int arr[][2] , int row , int col){
    for(int j = 0 ; j < 2;j++){
        int sum = 0;
        for(int i = 0 ; i < 2 ; i++){
           sum = sum + arr[i][j];
        }
        cout<<sum<<" ";
    }
} 
int main(){
    int arr[2][2] ;
    for(int i = 0 ; i < 2;i++){
        for(int j = 0 ; j < 2 ; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ; i < 2;i++){
        for(int j = 0 ; j < 2 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    rowwisesum(arr , 2 , 2);
   
}
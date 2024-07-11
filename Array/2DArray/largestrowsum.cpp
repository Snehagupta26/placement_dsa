#include<iostream>
using namespace std;
void rowwisesum(int arr[][2] , int row , int col){
    int ans = 0;
    int ansrow ;
    for(int i = 0 ; i < 2;i++){
        int sum = 0;
        
        for(int j = 0 ; j < 2 ; j++){
           sum = sum + arr[i][j];
           if(ans < sum){
              ans = sum;
              ansrow = i;
           }
        }
        

    }
    cout<<"largest sum possible is : "<<ans<<" with row "<<ansrow;
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
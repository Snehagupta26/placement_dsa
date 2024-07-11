#include<iostream>
using namespace std;
int main(){
    int arr[2][3];
    //row wise input
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout<< arr[i][j] <<" ";
        }
        cout<<endl;
    }

    int arr1[2][3];
    //col wise input
      for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cin >> arr1[j][i];
        }
    }
    
    //print same order
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout<< arr1[i][j] <<" ";
        }
        cout<<endl;
    }

    //insert directly
    int arr2[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
        for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cout<< arr2[i][j] <<" ";
        }
        cout<<endl;
    }
    
    //row wise insert directly
     int arr3[3][4] = {{1,2,3,4} , {5,6,7,8} , {9,0,1,2}};
        for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cout<< arr3[i][j] <<" ";
        }
        cout<<endl;
    }

  
}
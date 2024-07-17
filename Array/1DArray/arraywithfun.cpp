#include<iostream>
using namespace std;
void display(int arr[] , int size){
     for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int a1[5] = {1,2,3,4,5};
    display(a1,5);

    //int abc[3] = {1,2,3,4}; give error too many initialization values


}
// #include<iostream>
// #include<climits>
// using namespace std;
// void findMax(int arr[] , int size){
//         int max = INT_MIN;//means max alloted minimum value possible
//         //int max = arr[0]
//         for(int i = 0 ; i < size ; i++){
//             if(max < arr[i]){
//                 max = arr[i];
//             }
//         }
//         cout<<"max is "<<max<<endl;
// }
// void findMin(int arr[] , int size){
//         int min = INT_MAX;//means min alloted maximumvalue possible
//         //int min = arr[0];
//         for(int i = 0 ; i < size ; i++){
//             if(min > arr[i]){
//                 min = arr[i];
//             }
//         }
//         cout<<"min is "<<min<<endl;
// }
// int main(){
//     int a1[5] = {14,2,35,49,45};
//     findMax(a1,5);
//     findMin(a1,5);
// }
/*Alternate - recommended*/
#include<iostream>
#include<climits>
using namespace std;
void findMax(int arr[] , int size){
        int maxi = INT_MIN;//means max alloted minimum value possible
        //int max = arr[0]
        for(int i = 0 ; i < size ; i++){
            if(maxi < arr[i]){
                maxi = max(maxi,arr[i]);
            }
        }
        cout<<"max is "<<maxi<<endl;
}
void findMin(int arr[] , int size){
        int mini = INT_MAX;//means min alloted maximumvalue possible
        //int min = arr[0];
        for(int i = 0 ; i < size ; i++){
            if(mini > arr[i]){
                mini = min(mini , arr[i]);
            }
        }
        cout<<"min is "<<mini<<endl;
}
int main(){
    int a1[5] = {14,2,35,49,45};
    findMax(a1,5);
    findMin(a1,5);
}
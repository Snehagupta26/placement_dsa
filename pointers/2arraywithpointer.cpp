#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,23,31,42,53};
    cout<<arr<<endl;//address
    cout<<&arr[0]<<endl;//address
    cout<<arr[0]<<endl;//1
    cout<<*arr<<endl;//1
    cout<<(*arr)+1<<endl;//2
    cout<<*(arr + 1)<<endl;//23
    cout<<arr[4]<<" "<<*(arr + 4)<<endl;//53
    cout<<4[arr]<<" "<<*(4 + arr)<<endl;//53
    cout<<"************"<<endl;
    cout<<sizeof(arr)<<endl;//20(5 * 4)
    cout<<sizeof(arr[0])<<endl;//4
    cout<<sizeof(*arr)<<endl;//4
    cout<<" ....."<<sizeof(&arr)<<endl;//8
    int *p = &arr[0];
    cout<<" ....."<<sizeof(p)<<endl;//8
    cout<<sizeof(*p)<<endl;//4
    cout<<" ....."<<sizeof(&p)<<endl;//8
   
    }
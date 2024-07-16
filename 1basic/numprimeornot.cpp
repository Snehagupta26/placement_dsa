#include<iostream>
using namespace std;
// int main(){
//     cout<<"enter number to check prime or not"<<endl;
//     int n;
//     cin>>n;
//     int div = 2;
//     while(div < n){
//         if(n % div == 0){
//             cout<<"not prime"<<endl;
//             break;
//         }else{
//             div = div + 1;
//         }
//     }
//     cout<<"prime"<<endl;

// }

bool display(int n , int div){
    while(div < n){
        if(n % div == 0){
            return 0;
            break;
        }else{
            div = div + 1;
        }
    }
    return 1;
}
int main(){
    cout<<"enter number to check prime or not"<<endl;
    int n;
    cin>>n;
    int div = 2;
    bool isPrime = display(n,div);
    if(isPrime){
        cout<<"prime"<<endl;
    }else{
        cout<<"not prime"<<endl;
    }
}
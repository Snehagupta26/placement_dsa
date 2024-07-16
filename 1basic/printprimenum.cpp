#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number : "<<endl;
    int n;
    cin>>n;
    
    int i = 2;
    if(i < n){
        int div = 2;
        while(div  <  n){
            if(i % div == 0){
                i = i + 1;
            }else{
                div = div + 1;
            }
        }
        cout<<n;

    }
}

/* 1- 7
i = 2
div = 2
2< 7
yes now , i % div 2%2 = 0 so i = i+1 now 3%2 != 0 so div = div + 1 and now 3%3

/*DOUBT WRONG*/
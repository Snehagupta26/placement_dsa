#include<iostream>
using namespace std;
int main(){
    
    int num = 5;
    int *ptr = &num;
    cout<<num<<endl;
    cout<<&num<<endl;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    cout<<&(ptr)<<endl;
    cout<<&(*ptr)<<endl;
    cout<<"**********"<<endl;
    cout<<sizeof(num)<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<"**********"<<endl;
    double a = 4.2;
    double *pt = &a;
    cout<<sizeof(pt)<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(*pt)<<endl;
    cout<<"**********"<<endl;
    /*bad practise
    int *p ;
    cout<<*p<<endl points to unknown location
    
    better
    int *p = 0;
    cout<<*p <<endl; give segmentation fault*/

    int i = 9;
    int *p = 0;
    p = &i;
    cout<<i<<" "<<&i<<" "<<*p<<" "<<p<<endl;

    cout<<"**********"<<endl;

    int x = 8;
    int y = x;
    y++;
    cout<<"x is : "<<x<<" y is : "<<y<<endl;

    int q = 7;
    int *qp = &q;
    int j = *qp;
    j++;
    cout<<"q is : "<<q<<" j is : "<<j<<endl;

    int number = 4;
    int *ptrnum = &number;
    (*ptrnum)++;
    cout<<"number is : "<<number<<" "<<" *ptrnum has same value i.e : "<<*ptrnum<<endl;
    cout<<"**********"<<endl;
    
    //copy a pointer
    int num2 = 3;
    int *pnum2 = &num2;
    int *qnum2 = pnum2;
    cout<<*pnum2<<" "<<*qnum2<<endl;
    cout<<pnum2<<" "<<qnum2<<endl;


    

     
}
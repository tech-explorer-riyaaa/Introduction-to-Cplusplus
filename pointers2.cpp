#include <iostream>
using namespace std;

int main(){
    int i=10;
    int*p=&i;

    int*q=p;
    cout<<sizeof(p)<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    i++;
    cout<<i<<endl;
    cout<<*p<<endl;

    int a=i;
    int b=*p;
    b++; // will not affect *p
    a++; // this will not affect i
    cout<<b<<endl;
    cout<<*p<<endl;


    i=12;
    cout<<i<<endl;
    cout<<*p<<endl;

    *p=23;
    cout<<i<<endl;
    cout<<*p<<endl;
    (*p)++; // *p++ gives error
    //can treat *p as integer here
    cout<<i<<endl;
    cout<<*p<<endl;

    //Question
    int aa = 50;
    int *ptr = &aa;
    int *qa = ptr;
    (*qa)++;
    cout << aa  << endl;

    //Question
     int ab = 50;
    int *ptrr = &ab;
    cout << (*ptrr)++ << " ";
    cout << ab << endl;
}
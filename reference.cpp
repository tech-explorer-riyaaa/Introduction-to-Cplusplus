#include <iostream>
using namespace std;

void increment(int& n){
    n++;
}

// bad practice
int& f(int n){ // by reference return krega
    int a=n;
    return a;
}


// bad practice
int* f2(){
    int i = 10;
    return &i; // pointer return krwaega
}

int main(){
    int* p = f2();
    int i=10;
    int& j=i;

    int& k1 = f(i); // by reference catch krenge

    increment(i);
    cout<<i<<endl;

    i++;
    cout<<j<<endl;
    j++;
    cout<<i<<endl;

    int k=100;
    j=k;
    cout<<i<<endl;
}
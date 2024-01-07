# include <iostream>
using namespace std;

int main(){
    int i = 100;
    //cout<<&i<<endl;
    int*p=&i;
    cout<<p<<endl;
    cout<<*p<<endl; // dereference operator

    float f=10.2;
    float*q=&f;

    double d=100.322;
    double*r=&d;

    cout<<q<<endl<<r<<endl;
}
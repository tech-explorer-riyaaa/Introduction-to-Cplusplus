#include <iostream>
using namespace std;

int main(){
    int a[10];
    cout << a << endl;
    cout << &a[0] << endl;

    a[0]=5;
    a[1]=10;
    cout<< *a <<endl;

    cout<< *(a+1) << endl;

    cout<<a<<endl;
    cout<<&a<<endl;

    int*p = &a[0];
    
    cout << p << endl;
    cout << a << endl;

    cout << &p << endl;
    cout << &a << endl;

    cout<< sizeof(p)<< endl;
    cout << sizeof(a) << endl;

    p=p+1; // kahi point krra hai , aage point kar
    // a = a+1; error
    p=a+1;
    // a++; also an error


    int aa[6] = {1, 2, 3};
    int *ab = aa;
    cout << ab[2];

}
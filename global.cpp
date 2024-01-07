#include <iostream>
using namespace std;

int a; // this var is accessible by evrybody
// functions
void g(){
    a++;
    cout << a << endl;
}

// void f(int& k){ //passing by reference to pass same storage and not just copy - ye bhi use kr skte hai agr ek var sb jagah pass karana hai
void f(){
    cout << a << endl;
    a++;
    g();
}

int main(){
    // int i;
    // f(i); - to share a var with func f
    a = 10;
    f();
    f(); // for diff calls same val use kre jaare hai 10 ka 12 then 14 - bad practice
    cout << a << endl;

    // ek var bahar rkha hua hai
    // uski scope poori file hai
    // jaise hi program bana wo bann chuka hai
    // jaise hi program khatam hoga wo variable khatam ho jayega

    
}
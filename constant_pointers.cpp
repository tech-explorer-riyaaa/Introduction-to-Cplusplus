#include <iostream>
using namespace std;

int main(){
    int i = 10;
    int j =21;
    int const*p = &i; 
    // p is a pointer to a constant integer


    p = &j; // allowed hai
    // p is pointing towards a constant integer
    // p promise krra hai ki jiski taraf bhi mai point krra hua use jaake change nahi krunga
    // p ye nahi keh rha ki mai khud change nahi hounga
    // (*p)++ mt krna // p is pointing towards a constant
    

    // agar tum chahre he ho ki tumhara pointer constant ho toh tum ye kr skte ho
    int * const p2 = &i;
    // p2 is a constant pointer to an integer
    // p2 jaha point krra hai wo const nahi hai
    (*p2)++;
    // p2 = &j; - wrong

    // you can declarea pointer like this as well

    int const * const p3 = &i;
    // p3 is a const pointer to a const integer
    // ab p3 bhi change nahi ho skta and jsiki taraf wo point krra hai wo bhi cahnge nahi ho skta
    // p3 = &j;
    // (*p3)++;
}
#include <iostream>
using namespace std;
// for a func to promise ki wo change nahi krega
void g(int const &a){
    // a++; - will give error
}

void f(const int * p){
    // (*p)++; // isse j mei changes reflect ho jayenge
    // read only memory is not assignable
    // after adding const ab p ko use krke wo aage mere integer ko change nahi kr skta
}

int main(){
    int const i = 10;

    // int* p = &i; - you cannot store address of a const integer in a normal pointer
    // the pointer has to promise ki wo chnage nahi krega..kyoki hmare pass pehle hi read only access tha
    // use use krke write access nahi de skte

    int const* p = &i;
    // ulta pdhte hai ise
    // *p++; - error
    // read only variable is not assignable

    int j = 12;
    int* p3 = &j;
    f(p3); // f(&j)
    g(j);

    int const* p2 = &j; // ye theek hai
    cout << *p2 << endl;
    j++;
    cout << *p2 << endl;
    // *p2++; - wrong

}
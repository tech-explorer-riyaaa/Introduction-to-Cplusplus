// DO NOT RUN THIS FILE

# include <iostream>
using namespace std;

int main(){
    int i; // garbage value
    cout<<i<<endl;

    i++;
    cout<<i<<endl;

    int*p; // garbage address // banate hi ya toh variable daal do ya 0 daal do
    int *p=0; // right way
    cout<<p<<endl;

    cout<<*p<<endl; // error de bhi skta hai ya nahi bhi // very dangerous ; ho skta hai system k bahar ho;
    (*p)++;
    cout<<*p<<endl; // bhot risky hai;ye hga ya nahi wo depend rkta hai kitni critical jagah ko target karra hai
}